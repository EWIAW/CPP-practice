#pragma once
#include<iostream>
#include<vector>
#include<deque>
using namespace std;

namespace My_Stack
{
	//ʹ��ģ������һ��vector����
	template<class T,class Container=vector<T>>
	class stack
	{
	public:
		stack()
		{}

		//��ջ
		void push(const T& val)
		{
			_s.push_back(val);
		}

		//��ջ
		void pop()
		{
			_s.pop_back();
		}

		//�ж��Ƿ�Ϊ��
		bool empty() const
		{
			return _s.empty();
		}

		//��ȡ���ݸ���
		size_t size() const
		{
			return _s.size();
		}

		//ȡջ������
		T& top()
		{
			return _s.back();
		}

		//const����ȡջ������
		const T& top() const
		{
			return _s.back();
		}

	private:
		Container _s;
	};

	void Test1()
	{
		stack<int> s1;
		s1.push(1);
		s1.push(2);
		s1.push(3);
		s1.push(4);

		while (!s1.empty())
		{
			cout << s1.top() << " ";
			s1.pop();
		}
	}

	void Test2()
	{
		stack<int> s1;
		s1.push(1);
		s1.push(2);
		s1.push(3);
		s1.push(4);

		int a = s1.top();
		s1.pop();
		s1.push(10);
	
		cout << a << endl;
	}
}

namespace deque_stack
{
	template<class T, class Container = deque<T>>
	class stack
	{
	public:
		stack(){}
		//��ջ
		void push(const T& val){_s.push_back(val);}
		//��ջ
		void pop(){_s.pop_back();}
		//�ж��Ƿ�Ϊ��
		bool empty() const{return _s.empty();}
		//��ȡ���ݸ���
		size_t size() const{return _s.size();}
		//ȡջ������
		T& top(){return _s.back();}
		//const����ȡջ������
		const T& top() const{return _s.back();}
	private:
		Container _s;
	};

	void Test1()
	{
		stack<int> s1;
		s1.push(1);
		s1.push(2);
		s1.push(3);
		s1.push(4);
		while (!s1.empty())
		{
			cout << s1.top() << " ";
			s1.pop();
		}
	}
}