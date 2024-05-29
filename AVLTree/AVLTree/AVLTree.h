#pragma once
#include<iostream>
#include<vector>
#include<time.h>
using namespace std;


	template<class K, class V>
	struct AVLTreeNode
	{
		//��Ա����
		K _key;
		V _val;
		AVLTreeNode<K, V>* _left;
		AVLTreeNode<K, V>* _right;
		AVLTreeNode<K, V>* _parent;
		int _bf;//ƽ�����ӣ���������Ƿ�ƽ�⣬ƽ��������   ����-����

		//��Ա����
		AVLTreeNode(pair<K, V> p)
			:_key(p.first)
			, _val(p.second)
			, _left(nullptr)
			, _right(nullptr)
			, _parent(nullptr)
			, _bf(0)
		{}
	};

	template<class K, class V>
	class AVLTree
	{
	public:
		typedef AVLTreeNode<K, V> Node;
	public:
		//���캯��
		AVLTree()
			:_root(nullptr)
		{}

		//������
		bool insert(const pair<K, V>& p)
		{
			//�����ʱtreeΪ�գ���ֱ�Ӱѽ���_root
			if (_root == nullptr)
			{
				_root = new Node(p);
				return true;
			}

			//���tree��Ϊ�գ�����ҿ�λ���������в���
			Node* cur = _root;
			Node* curparent = nullptr;
			while (cur != nullptr)
			{
				curparent = cur;
				if (p.first > cur->_key)
				{
					cur = cur->_right;
				}
				else if (p.first < cur->_key)
				{
					cur = cur->_left;
				}
				else
				{
					return false;
				}
			}

			cur = new Node(p);//����һ��������λ��
			if (curparent->_key > cur->_key)//���½�����ӵ�����
			{
				curparent->_left = cur;
			}
			else
			{
				curparent->_right = cur;
			}
			cur->_parent = curparent;

			//�����½��󣬸��¸�����_bfƽ������
			while (curparent != nullptr)
			{
				if (curparent->_right == cur)
				{
					curparent->_bf++;
				}
				else
				{
					curparent->_bf--;
				}

				if (curparent->_bf == 0)
				{
					break;
				}
				else if (curparent->_bf == 1 || curparent->_bf == -1)
				{
					cur = curparent;
					curparent = cur->_parent;
				}
				else if (curparent->_bf == 2 || curparent->_bf == -2)
				{
					//������ת����
					//1.����
					//2.������
					//3.�ҵ���
					//4.���ҵ���
					if (curparent->_bf == 2)
					{
						if (curparent->_right->_bf == 1)
						{
							RotateL(curparent);//����
						}
						else
						{
							RotateRL(curparent);
						}
					}
					else if (curparent->_bf == -2)
					{
						if (curparent->_left->_bf == -1)
						{
							RotateR(curparent);//�ҵ���
						}
						else
						{
							RotateLR(curparent);
						}
					}

					break;
				}
			}

			return true;
		}

		//ɾ�����
		void erase(const K& key)
		{
			Node* cur = find(key);
			if (cur == nullptr)
			{
				return;
			}

			//1.curû�����ҽ��
			//2.curû�����㣬���ҽ��
			//3.curû���ҽ�㣬������
			//4.cur�����ҽ��

			//ȷ��cur��λ�ã���Ϊ�����������ʵ���Ա�Ϊ1��2��3�����

			if (cur->_left != nullptr && cur->_right != nullptr)
			{
				Node* cur_right_min = cur->_right;
				while (cur_right_min->_left != nullptr)
				{
					cur_right_min = cur_right_min->_left;
				}
				cur->_key = cur_right_min->_key;
				cur->_val = cur_right_min->_val;

				cur = cur_right_min;
			}

			Node* cur_parent = cur->_parent;
			Node* del = cur;

			//���������ƽ������
			while (cur_parent != nullptr)
			{
				if (cur_parent->_left == cur)
				{
					cur_parent->_bf++;
				}
				else if (cur_parent->_right == cur)
				{
					cur_parent->_bf--;
				}

				//�����길����ƽ�����Ӻ�Ҫ�����ж��Ƿ����ϼ����������ǽ�����ת�����ǽ�������

				//1.���cur_parent��ƽ������Ϊ1��-1������������������ɾ��
				//2.���ƽ������Ϊ0����������ϵ���
				//3.���ƽ������Ϊ2���������ת����
				if (cur_parent->_bf == 1 || cur_parent->_bf == -1)
				{
					break;
				}
				else if (cur_parent->_bf == 0)
				{
					cur = cur_parent;
					cur_parent = cur->_parent;
				}
				else if (cur_parent->_bf == 2 || cur_parent->_bf == -2)
				{
					if (cur_parent->_bf == 2)
					{
						if (cur_parent->_right->_bf == 1)
						{
							RotateL(cur_parent);//����
						}
						else
						{
							RotateRL(cur_parent);
						}
					}
					else if (cur_parent->_bf == -2)
					{
						if (cur_parent->_left->_bf == -1)
						{
							RotateR(cur_parent);//�ҵ���
						}
						else
						{
							RotateLR(cur_parent);
						}
					}
					break;
				}
			}

			//����������������ɺ���ɾ�����
			//ɾ������Ϊ������� delΪҪɾ���Ľ��
			//1.del��������Ϊnull����������Ϊnull
			//2.del��������Ϊnull����������Ϊnull
			Node* del_parent = del->_parent;
			//���del��parentΪ�գ�˵��del��Ψһ�ĸ����
			if (del_parent == nullptr)
			{
				_root = nullptr;
			}
			else if (del->_left == nullptr && del->_right != nullptr)
			{
				if (del_parent->_left == del)
				{
					del_parent->_left = del->_right;
				}
				else
				{
					del_parent->_right = del->_right;
				}
			}
			else
			{
				if (del_parent->_left == del)
				{
					del_parent->_left = del->_left;
				}
				else
				{
					del_parent->_right = del->_left;
				}
			}
			delete del;

			return;
		}

		//���ҽ��
		Node* find(const K& key)
		{
			if (_root == nullptr)
			{
				return nullptr;
			}

			Node* cur = _root;
			while (cur != nullptr)
			{
				if (key > cur->_key)
				{
					cur = cur->_right;
				}
				else if (key < cur->_key)
				{
					cur = cur->_left;
				}
				else
				{
					return cur;
				}
			}
			return nullptr;
		}

		//�������
		void InOrder()
		{
			_InOrder(_root);
			cout << endl;
		}

		//��������ĸ߶�
		int Height(Node* root)
		{
			if (root == nullptr)
			{
				return 0;
			}

			return fmax(Height(root->_left), Height(root->_right)) + 1;
		}

		//�ж��Ƿ�ƽ��
		bool JudgeBalance()
		{
			Node* root = _root;
			return _JudgeBalance(root);
		}

		//private:
		bool _JudgeBalance(Node* root)
		{
			if (root == nullptr)
			{
				return true;
			}

			int heightleft = Height(root->_left);
			int heightright = Height(root->_right);

			return abs(heightleft - heightright) < 2
				&& _JudgeBalance(root->_left)
				&& _JudgeBalance(root->_right);
		}

		void _InOrder(Node* root)
		{
			if (root == nullptr)
			{
				return;
			}

			_InOrder(root->_left);

			cout << root->_key << ":" << root->_val << "	";

			_InOrder(root->_right);
		}

		//����
		void RotateL(Node* first)
		{
			//1.first��right ָ�� second��left
			//2.second��left ָ�� first

			//������ע�⣬��Ϊ����������������parentָ�룬���Ե�ĳ������left����right�ı䣬��ý��ĺ��ӵ�parentָ��ҲҪ��
			Node* second = first->_right;
			Node* secondLeft = second->_left;

			first->_right = secondLeft;
			if (secondLeft != nullptr)
			{
				secondLeft->_parent = first;
			}

			second->_left = first;
			Node* ppNode = first->_parent;//����first�ĸ���㣬��Ϊfirst�п��������е�����һ��������Ҫͨ��first�ĸ�������������������
			first->_parent = second;


			if (first == _root)//���first��_root
			{
				_root = second;
				second->_parent = nullptr;
			}
			else//���first����_root
			{
				if (ppNode->_left == first)
				{
					ppNode->_left = second;
				}
				else
				{
					ppNode->_right = second;
				}
				second->_parent = ppNode;
			}

			//����ƽ������
			first->_bf = second->_bf = 0;
		}

		//�ҵ���
		void RotateR(Node* first)
		{
			//1.first��left  ָ��  second��right
			//2.second��right  ָ��  first
			Node* second = first->_left;
			Node* secondRight = second->_right;

			first->_left = secondRight;
			if (secondRight != nullptr)
			{
				secondRight->_parent = first;
			}

			second->_right = first;
			Node* ppNode = first->_parent;
			first->_parent = second;

			if (first == _root)
			{
				_root = second;
				second->_parent = nullptr;
			}
			else
			{
				if (ppNode->_left == first)
				{
					ppNode->_left = second;
				}
				else
				{
					ppNode->_right = second;
				}
				second->_parent = ppNode;
			}

			first->_bf = second->_bf = 0;

		}

		//����˫��
		void RotateRL(Node* first)
		{
			Node* second = first->_right;
			Node* third = second->_left;

			int bf = third->_bf;

			RotateR(second);//���ҵ���
			RotateL(first);//������

			//��ת��ɺ󣬸���ƽ������
			if (bf == 1)
			{
				first->_bf = -1;
				second->_bf = 0;
				third->_bf = 0;
			}
			else if (bf == -1)
			{
				first->_bf = 0;
				second->_bf = 1;
				third->_bf = 0;
			}
			else if (bf == 0)
			{
				first->_bf = 0;
				second->_bf = 0;
				third->_bf = 0;
			}
		}

		//����˫��
		void RotateLR(Node* first)
		{
			Node* second = first->_left;
			Node* third = second->_right;

			int bf = third->_bf;

			RotateL(second);
			RotateR(first);

			if (bf == 1)
			{
				first->_bf = 0;
				second->_bf = -1;
				third->_bf = 0;
			}
			else if (bf == -1)
			{
				first->_bf = 1;
				second->_bf = 0;
				third->_bf = 0;
			}
			else if (bf == 0)
			{
				first->_bf = 0;
				second->_bf = 0;
				third->_bf = 0;
			}
		}

		void Print()
		{
			cout << _root->_key << endl;
		}

		//private:
		Node* _root;
	};


