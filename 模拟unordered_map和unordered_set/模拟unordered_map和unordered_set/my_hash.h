#pragma once
#include<vector>
using namespace std;

namespace my_hash
{
	//���ݽ��
	template<class Val>
	struct HashNode
	{
		//��Ա����
		Val _val;//����
		HashNode<Val>* _next;//ָ��ͬһ��Ͱ�е���һ�����
		HashNode<Val>* _linknext;//ָ����һ������˳��Ľ��
		HashNode<Val>* _linkprev;//ָ����һ������˳��Ľ��

		//��Ա����
		HashNode(const Val& val)
			:_val(val)
			, _next(nullptr)
			, _linknext(nullptr)
			, _linkprev(nullptr)
		{}
	};

	//������
	template<class Val>
	struct HashIterator
	{
		typedef HashNode<Val> Node;
		typedef HashIterator<Val> Self;
		//��Ա����
		Node* _node;

		//��Ա����
		HashIterator(Node* tmp)
			:_node(tmp)
		{}

		Val& operator*()
		{
			return _node->_val;
		}

		Val* operator->()
		{
			return &_node->_val;
		}

		Self operator++()
		{
			_node = _node->_linknext;
			return *this;
		}

		Self operator--()
		{
			_node = _node->_linkprev;
			return *this;
		}

		bool operator!=(const Self& tmp)
		{
			if (_node != tmp._node)
				return true;
			else
				return false;
		}

	};

	//��ϣ��
	template<class K, class Val, class GetCompareKey, class Hash>
	class HashTable
	{
		typedef HashNode<Val> Node;
	public:
		typedef HashIterator<Val> iterator;
	public:
		//���캯��
		HashTable()
			:_nums(0)
			,_prev(nullptr)
			,_first(nullptr)
		{
			_vec.resize(10);
		}

		//��������
		~HashTable()
		{
			clear();
		}

		//������
		void clear()
		{
			Node* cur = _first;
			while (cur != nullptr)
			{
				Node* next = cur->_linknext;//������һ�����
				delete cur;
				cur = next;
			}
		}

		iterator begin()
		{
			return iterator(_first);
		}

		iterator end()
		{
			return iterator(nullptr);
		}

		//����Ƿ���Ҫ����
		void CheckCapacity()
		{
			//�����Ч���ݸ�������_vec����ĳ��ȣ����������
			if (_nums == _vec.size())
			{
				GetCompareKey GCK;
				Hash hash;
				vector<Node*> newvec;//��һ���µ�ָ������
				newvec.resize(_nums * 2);//���ݵ�ԭ��������

				//����ԭ���飬��������ù���
				for (int i = 0; i < _vec.size(); i++)
				{
					Node* cur = _vec[i];
					while (cur != nullptr)
					{
						Node* next = cur->_next;//������һ�����

						size_t index = hash(GCK(cur->_val)) % newvec.size();//�ҵ��µ�ָ������ӳ���λ��
						cur->_next = newvec[index];
						newvec[index] = cur;

						cur = next;
					}
				}
				newvec.swap(_vec);
			}
		}

		//����
		pair<iterator, bool> insert(const Val& tmp)
		{
			//����֮ǰҪ�ж��Ƿ���Ҫ����
			CheckCapacity();

			GetCompareKey GCK;
			Hash hash;
			size_t index = hash(GCK(tmp)) % _vec.size();//�ҵ�����ӳ���±�
			//��ȥ����Ͱ����Ҫ�����������û��
			Node* cur = _vec[index];
			while (cur != nullptr)
			{
				if (cur->_val == tmp)//˵��Ͱ���Ѿ��и�ֵ
				{
					return make_pair(iterator(cur), false);
				}
				cur = cur->_next;
			}
			//���û��,�ٽ��в��룬ʹ��ͷ�巨
			Node* newnode = new Node(tmp);
			newnode->_next = _vec[index];
			_vec[index] = newnode;
			
			//������ɺ������ӵ���һ��������ĺ���
			Node* prev = _prev;
			if (prev == nullptr)//�����һ��������Ϊnullptr��˵����newnode�ǵ�һ������Ľ��
			{
				_prev = newnode;
				_first = newnode;
			}
			else
			{
				prev->_linknext = newnode;
				newnode->_linkprev = prev;
				_prev = newnode;
			}
			_nums++;
			return make_pair(iterator(newnode), true);
		}

		//ɾ��
		bool erase(const K& tmp)
		{
			GetCompareKey GCK;
			Hash hash;
			size_t index = hash(tmp) % _vec.size();
			Node* cur = _vec[index];
			Node* cur_prev = nullptr;
			while (cur != nullptr)
			{
				if (GCK(cur->_val) == tmp)
				{
					//ɾ�����Ҫע��Ҫ�ı�_next,_linknext,_linkprev����ָ��
					//���������޸�_linknext��_linkprevָ��

					Node* cur_linkprev = cur->_linkprev;
					Node* cur_linknext = cur->_linknext;
					if (cur_linkprev == nullptr)//˵��Ҫɾ����cur�ڲ���˳�����ǵ�һ��
					{
						cur_linknext->_linkprev = nullptr;
						_first = cur_linknext;
					}
					else if (cur_linknext == nullptr)//˵��Ҫɾ����cur�ǲ���˳���е����һ��
					{
						cur_linkprev->_linknext = nullptr;
					}
					else//˵��Ҫɾ����cur�ǲ���˳���е��м�λ��
					{
						cur_linkprev->_linknext = cur_linknext;
						cur_linknext->_linkprev = cur_linkprev;
					}

					//���޸�_nextָ��
					if (cur_prev == nullptr)//˵��Ҫɾ����cur��Ͱ�еĵ�һ�����
					{
						_vec[index] = cur->_next;
					}
					else
					{
						cur_prev->_next = cur->_next;
					}

					delete cur;
					_nums--;
					return true;
				}
				cur_prev = cur;
				cur = cur->_next;
			}
			return false;
		}

		//����
		iterator find(const K& key)
		{
			GetCompareKey GCK;
			Hash hash;
			size_t index = hash(key) % _vec.size();
			Node* cur = _vec[index];
			while (cur != nullptr)
			{
				if (GCK(cur->_val) == key)
				{
					return iterator(cur);
				}
				cur = cur->_next;
			}
			return iterator(nullptr);
		}

	private:
		vector<Node*> _vec;//ָ������
		size_t _nums;//��Ч���ݸ���
		Node* _prev;//������һ������Ľ��
		Node* _first;//�����һ������Ľ��
	};

}