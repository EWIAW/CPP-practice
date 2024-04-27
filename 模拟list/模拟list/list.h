#pragma once
#include<iostream>
#include<stdbool.h>
#include<assert.h>
#include<algorithm>
using namespace std;

//��һ��ģ��ʵ��list
namespace My_list
{
	//��װ��������	
	template<class T>
	struct __list_node
	{
		//��Ա����
		T _data;
		__list_node<T>* _prev;
		__list_node<T>* _next;

		//��Ա����
		__list_node(const T& val = T())
			:_data(val)
			,_prev(nullptr)
			,_next(nullptr)
		{
		}
	};

	//��װ��������
	//__list_iterator<T,T&,T> -> iterator
	//__list_iterator<T,const T&,const T*> -> const iterator
	template<class T,class Ref,class Ptr>
	struct __list_iterator
	{
		typedef __list_node<T> Node;
		typedef __list_iterator<T, Ref, Ptr> iterator;

		//���캯��	���������
		__list_iterator(Node* node=nullptr)
			:_node(node)
		{
		}

		//���ص�����ָ�����ݵ�����
		Ref operator*() const
		{
			return _node->_data;
		}

		//���ڲ���list�����Date��Ľ����ò���		���ص��ǵ�����ָ�����ݵ�ָ��
		Ptr operator->() const
		{
			return &_node->_data;
		}

		//������ǰ��++����
		iterator operator++()
		{
			_node = _node->_next;
			return *this;
		}

		//������ǰ��--����
		iterator operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		//����������++
		iterator operator++(int)
		{
			iterator tmp(*this);
			//_node = _node->_next;
			++(*this);
			return tmp; 
		}
		//����������--
		iterator operator--(int)
		{
			iterator tmp(*this);
			//_node = _node->_prev;
			--(*this);
			return tmp;
		}

		//����operator!=
		bool operator!=(const iterator it) const
		{
			if (_node != it._node)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		//����operator==
		bool operator==(const iterator it) const 
		{
			return !(*this != it);
		}

		//��Ա����
		Node* _node;
	};

	//list��
	template<class T>
	class list
	{
		//��������
		typedef __list_node<T> Node;
	public:
		//��������
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;

		//begin������
		iterator begin()
		{
			iterator it(_head->_next);
			return it;
		}

		//end������
		iterator end()
		{
			iterator it(_head);
			return it;
		}

		//const_begin������
		const_iterator begin() const
		{
			const_iterator cit(_head->_next);
			return cit;
		}

		//const_end������
		const_iterator end() const
		{
			const_iterator cit(_head);
			return cit;
		}

		//���캯��
		list()
			:_head(new Node)
		{
			//_head = new Node;	
			_head->_prev = _head;
			_head->_next = _head;
		}

		//��������
		~list()
		{
			clear();
			delete _head;
			_head = nullptr;
		}

		//��������
		//list<int> l2(l1)
		list(const list<T>& tmp)
			:_head(new Node)
		{
			_head->_next = _head;
			_head->_prev = _head;

			const_iterator it = tmp.begin();
			while (it != tmp.end())
			{
				push_back(*it);
				it++;
			}
		}

		//��ֵ=����
		//list<int> l3;
		//l3=l2;
		list<T>& operator=(const list<T>& tmp)
		{
			if (this != &tmp)
			{
				list<T> l(tmp);
				Swap(l);
			}
			return *this;
		}

		//������������
		//l1.Swap(l2);
		void Swap(list<T>& tmp)	
		{
			swap(_head, tmp._head);
		}

		//clear������	�����Ľ�Ϊ����erase����
		void clear()
		{
			Node* headnext = _head->_next;//�ҵ�ͷ������һ�����
			//�ͷų�ͷ���������н��
			while (headnext != _head)
			{
				Node* tmp = headnext->_next;
				delete headnext;
				headnext = tmp;
			}

			_head->_next = _head;
			_head->_prev = _head;
		}

		//β��
		void push_back(const T& val)
		{
			////����һ���½�㣬���½�㸳ֵ
			//Node* newnode = new Node(val);
			//Node* tail = _head->_prev;//���ҵ�β���

			//tail->_next = newnode;
			//newnode->_prev = tail;
			//newnode->_next = _head;
			//_head->_prev = newnode;

			insert(end(), val);
		}

		//βɾ
		void pop_back()
		{
			iterator it = end();
			erase(--it);
		}

		//ͷ��
		void push_front(const T& val)
		{
			insert(begin(), val);
		}

		//ͷɾ
		void pop_front()
		{
			iterator it(begin());
			erase(it);
		}

		//�м����
		iterator insert(iterator pos, const T& val)
		{
			Node* newnode = new Node(val);
			Node* posprev = pos._node->_prev;

			posprev->_next = newnode;
			newnode->_prev = posprev;
			newnode->_next = pos._node;
			pos._node->_prev = newnode;	

			iterator it(newnode);
		return it;
		}

		//�м�ɾ��
		iterator erase(iterator pos)
		{
			assert(pos != end());

			Node* posprev = pos._node->_prev;
			Node* posnext = pos._node->_next;

			posprev->_next = posnext;
			posnext->_prev = posprev;

			delete pos._node;

			iterator it(posnext);
			return it;
		}

	private:
		Node* _head;
	};

	//����list�����Date����
	class Date
	{
	public:
		Date(int year = 0, int month = 0, int day = 0)
			:_year(year)
			,_month(month)
			,_day(day)
		{

		}
	//private:
		int _year;
		int _month;
		int _day;
	};

	void Test1()
	{
		list<int> l1;
		l1.push_back(1);
		l1.push_back(2);
		l1.push_back(3);
		l1.push_back(4);
		l1.push_front(0);
		l1.push_front(-1);
		l1.push_front(-2);
		l1.push_front(-3);

		l1.pop_back();
		l1.pop_back();

		l1.pop_front();
		l1.pop_front();

		list<int>::iterator it = l1.begin();
		while (it != l1.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}

	void Test2()
	{
		list<Date> l1;
		l1.push_back(Date());
		l1.push_back(Date());
		l1.push_back(Date());
		l1.push_back(Date());

		list<Date>::iterator it = l1.begin();
		while (it != l1.end())
		{
			cout << it->_year << "-" << it->_month << "-" << it->_day << endl;
			it++;
		}
		
	}

	//���Ե������ķ�const��const
	void Test3()
	{
		list<int> l1;
		l1.push_back(1);
		l1.push_back(2);
		l1.push_back(3);
		l1.push_back(4);

		list<int>::iterator it = l1.begin();
		while (it != l1.end())
		{
			(*it)++;
			cout << *it << " ";
			it++;
		}
		cout << endl;

	}

	//���Կ������� �� ��ֵ=����
	void Test4()
	{
		list<int> l1;
		l1.push_back(1);
		l1.push_back(2);
		l1.push_back(3);
		l1.push_back(4);

		list<int> l2(l1);

		list<int> l3;
		l3 = l2;

		list<int>::iterator it1 = l1.begin();
		while (it1 != l1.end())
		{
			(*it1)++;
			cout << *it1 << " ";
			it1++;
		}
		cout << endl;

		list<int>::iterator it2 = l2.begin();
		while (it2 != l2.end())
		{
			(*it2)++;
			cout << *it2 << " ";
			it2++;
		}
		cout << endl;

		list<int>::iterator it3 = l3.begin();
		while (it3 != l3.end())
		{
			(*it3)++;
			cout << *it3 << " ";
			it3++;
		}

		cout << endl;
	}
}



																									//�ڶ���ģ��ʵ��list�������ڴ�������
namespace list_blog
{
	//������
	template<class T>
	struct __List_Node
	{
		//���캯��
		__List_Node(const T& val = T())
			:_val(val)
			,_prev(nullptr)
			,_next(nullptr)
		{}
		//��Ա����
		T _val;
		__List_Node<T>* _prev;
		__List_Node<T>* _next;
	};

	//��װ���������
	template<class T,class Ref,class Ptr>
	struct __list_iterator
	{
		typedef __List_Node<T> Node;
		typedef __list_iterator<T, Ref, Ptr> iterator;

		typedef Ref Ref;
		typedef Ptr Ptr;
		//���캯��
		__list_iterator(Node* val)
			:_node(val)
		{}

		//����*
		Ref operator*() const
		{
			return _node->_val;
		}

		//����ǰ��++
		iterator& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		//���غ���++
		iterator operator++(int)
		{
			iterator tmp(*this);
			_node = _node->_next;
			return tmp;
		}

		//����ǰ��--
		iterator& operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		//���غ���--
		iterator operator--(int)
		{
			iterator tmp(*this);
			_node = _node->_prev;
			return tmp;
		}

		//����!=
		bool operator!=(const iterator& it)
		{
			if (this->_node != it._node)
				return true;
			else
				return false;
		}

		//��Ա����
		Node* _node;//��һ��ָ�����ָ��
	};

	////��װ���������
	//template<class Iterator>
	//struct __list_reverse_iterator
	//{
	//	typedef __list_reverse_iterator<Iterator> reverse_iterator;

	//	typedef typename Iterator::Ref Ref;
	//	typedef typename Iterator::Ptr Ptr;

	//	//���캯��
	//	__list_reverse_iterator(Iterator it)
	//		:_it(it)
	//	{}

	//	Ref operator*()
	//	{
	//		return (*_it);
	//	}

	//	reverse_iterator& operator++()
	//	{
	//		--_it;
	//		return *this;
	//	}

	//	bool operator!=(const reverse_iterator& tmp)
	//	{
	//		return _it != tmp._it;
	//	}

	//	//��Ա����(��Ա������ʵ����һ�����������)
	//	Iterator _it;
	//};

	//list��
	template<class T>
	class list
	{
	public:
		typedef __List_Node<T> Node;
		typedef __list_iterator<T, T&, T*> iterator;//�����const������
		typedef __list_iterator<T, const T&, const T*> const_iterator;//����const������

		//typedef __list_reverse_iterator<iterator> reverse_iterator;//�����const������
	public:
		//��const����begin
		iterator begin()
		{
			iterator it(_head->_next);
			return it;
		}

		//��const����end
		iterator end()
		{
			iterator it(_head);
			return it;
		}

		//const����begin
		const_iterator begin() const
		{
			const_iterator it(_head->_next);
			return it;
		}

		//const����end
		const_iterator end() const
		{
			const_iterator it(_head);
			return it;
		}

		//��const����rbegin
		//reverse_iterator rbegin()
		//{
		//	reverse_iterator rit(--end());//
		//	return rit;
		//}

		////��const����rend
		//reverse_iterator rend()
		//{
		//	reverse_iterator rit(end());
		//	return rit;
		//}

		//���캯��
		list()
			:_head(new Node)
		{
			_head->_next = _head;
			_head->_prev = _head;
		}

		//�������캯��
		list(const list<T>& l)
			:_head(new Node)
		{
			_head->_next = _head;
			_head->_prev = _head;

			list<T>::const_iterator it = l.begin();
			while (it != l.end())
			{
				push_back(*it);
				++it;
			}
		}

		//clear����
		void clear()
		{
			Node* move = _head->_next;
			while (move != _head)//���α���ÿһ����㣬��������ͷ�
			{
				Node* moveNext = move->_next;
				delete move;
				move = moveNext;
			}
			_head->_next = _head;//����ͷָ��
			_head->_prev = _head;
		}

		//��������
		~list()
		{
			clear();
			delete _head;
			_head = nullptr;
		}

		//�������������ڽ�������list
		void Swap(list<T>& l)
		{
			swap(_head, l._head);
		}

		//��ֵ=����
		list<T>& operator=(const list<T>& l)
		{
			if (this != &l)
			{
				list<T> tmp(l);
				Swap(tmp);
			}
			return *this;
		}

		//������Ĵ�С
		size_t size() const
		{
			size_t count = 0;
			const_iterator cit = begin();
			while (cit != end())
			{
				count++;
				cit++;
			}
			return count;
		}

		//�ж������Ƿ�Ϊ��
		bool empty() const
		{
			if (size() == 0)
				return true;
			else
				return false;
		}

		//front����
		T& front()
		{
			assert(size());//����list�Ƿ�û������
			return *(begin());
		}

		const T& front() const
		{
			assert(size());//����list�Ƿ�û������
			return *(begin());
		}

		//back����
		T& back()
		{
			assert(size());
			return *(--end());
		}

		const T& back() const
		{
			assert(size());
			return *(--end());
		}

		//insert����
		iterator insert(iterator pos, const T& val)
		{
			Node* newnode = new Node(val);//����һ���½��

			Node* posNext = pos._node->_next;//�ҵ�pos����һ�����

			pos._node->_next = newnode;
			newnode->_prev = pos._node;
			newnode->_next = posNext;
			posNext->_prev = newnode;

			return iterator(newnode);
		}

		//erase����
		iterator erase(iterator pos)
		{
			assert(pos != end());//Ҫɾ���Ľ�㲻����_head
			Node* posPrev = pos._node->_prev;
			Node* posNext = pos._node->_next;

			posPrev->_next = posNext;
			posNext->_prev = posPrev;

			delete pos._node;
			
			return iterator(posNext);
		}

		//β��
		void push_back(const T& val)
		{
			//Node* newnode = new Node(val);//����һ���½��

			////��ʼ���½�����ӵ�β��
			//Node* tail = _head->_prev;//���ҵ�β���
			//tail->_next = newnode;
			//newnode->_prev = tail;
			//newnode->_next = _head;
			//_head->_prev = newnode;

			insert(--end(), val);
		}

		//βɾ
		void pop_back()
		{
			assert(size());
			erase(--end());
		}

		//ͷ��
		void push_front(const T& val)
		{
			insert(end(), val);
		}

		//ͷɾ
		void pop_front()
		{
			assert(size());
			erase(begin());
		}

		//resize����
		void resize(const size_t& n, const T& val = T())
		{
			if (n > size())
			{
				size_t tmp=n-size();
				while (tmp--)
				{
					push_back(val);
				}
			}
			else if (n < size())
			{
				size_t tmp = size() - n;
				while (tmp--)
				{
					pop_back();
				}
			}
		}
	private:
		Node* _head;
	};

	//�������������
	void Test1()
	{
		list<int> l1;
		l1.push_back(1);
		l1.push_back(2);
		l1.push_back(3);
		l1.push_back(4);

		list<int>::iterator it = l1.begin();
		while (it != l1.end())
		{
			cout << *it << " ";
			it++;
		}
		cout << endl;

		const list<int> l2(l1);
		list<int>::const_iterator cit = l2.begin();
		while (cit != l2.end())
		{
			cout << *cit << " ";
			cit++;
		}
		cout << endl;

	}

	//���Ը�ֵ=����
	void Test2()
	{
		list<int> l1;
		l1.push_back(1);
		l1.push_back(2);
		l1.push_back(3);
		l1.push_back(4);
		
		list<int> l2;
		l1 = l2;

		list<int>::iterator it = l1.begin();
		while (it != l1.end())
		{
			cout << *it << " ";
			it++;
		}
		cout << endl;
	}

	//����size��empty
	void Test3()
	{
		list<int> l1;
		l1.push_back(1);
		l1.push_back(2);
		l1.push_back(3);
		l1.push_back(4);

		cout << l1.size() << endl;
		cout << l1.empty() << endl;
	}

	//����front��back����
	void Test4()
	{
		list<int> l1;
		l1.push_back(1);
		l1.push_back(2);
		l1.push_back(3);
		l1.push_back(4);

		cout << l1.front() << endl;
		cout << l1.back() << endl;
	}

	//����insert��erase
	void Test5()
	{
		list<int> l1;
		l1.push_back(1);
		l1.push_back(2);
		l1.push_back(3);
		l1.push_back(4);

		list<int>::iterator it = l1.begin();
		it++;
		it++;
		l1.insert(it, 10);

		it = l1.begin();
		it++;
		l1.erase(it);

		it = l1.begin();
		while (it != l1.end())
		{
			cout << *it << " ";
			it++;
		}
		cout << endl;
	}

	//����ͷ�塢ͷɾ��β�塢βɾ
	void Test6()
	{
		list<int> l1;
		l1.push_back(1);
		l1.push_back(2);
		l1.push_back(3);
		l1.pop_back();
		l1.pop_back();

		l1.push_front(0);
		l1.push_front(-1);
		l1.push_front(-2);
		l1.pop_front();
		l1.pop_front();

		list<int>::iterator it = l1.begin();
		while (it != l1.end())
		{
			cout << *it << " ";
			it++;
		}
		cout << endl;
	}

	//����resize
	void Test7()
	{
		list<int> l1;
		l1.push_back(1);
		l1.push_back(2);
		l1.push_back(3);
		l1.push_back(4);
		l1.push_back(5);
		l1.resize(10);

		list<int>::iterator it = l1.begin();
		while (it != l1.end())
		{
			cout << *it << " ";
			it++;
		}
		cout << endl;
	}

	//���Է��������
	//void Test8()
	//{
	//	list<int> l1;
	//	l1.push_back(1);
	//	l1.push_back(2);
	//	l1.push_back(3);
	//	l1.push_back(4);
	//	l1.push_back(5);

	//	list<int>::reverse_iterator rit = l1.rbegin();
	//	while (rit != l1.rend())
	//	{
	//		cout << *rit << " ";
	//		++rit;
	//	}
	//	cout << endl;
	//}
}