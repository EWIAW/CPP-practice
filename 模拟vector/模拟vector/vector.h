#pragma once
#include<assert.h>
#include<iostream>
using namespace std;

namespace My_vector
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;

		//���캯��
		vector()
			:_start(nullptr)
			,_finish(nullptr)
			,_endofstorage(nullptr)
		{

		}

		//��������
		~vector()
		{
			delete[] _start;
			_start = _finish = _endofstorage = nullptr;
		}

		//��������
		//vector<int> v2(v1)
		vector(const vector<T>& tmp)
			:_start(new T[tmp.capacity()])
			,_finish(_start+tmp.size())
			,_endofstorage(_start+tmp.capacity())
		{
			memmove(_start, tmp._start, sizeof(T) * tmp.size());
		}

		//��ֵ=����
		//vector<int> v3;
		//v3=v2;
		vector<T>& operator=(const vector<T>& tmp)//�������Σ���v2���������һ��tmp
		{
			if (this != &tmp)//�жϷ�ֹ�Լ����Լ�����
			{
				vector<T> copy(tmp);
				Swap(copy);
				return *this;
			}
		}

		//begin������
		iterator begin() const
		{
			return _start;
		}

		//end������
		iterator end() const
		{
			return _finish;
		}

		//����
		void reserve(size_t sz)
		{
			if (sz > capacity())//�����Ҫ���ݵ�������ԭ����capacity������
			{
				T* tmp = new T[sz];//����һ���¿ռ�

				if (_start != nullptr)
				{
					memmove(tmp, _start, sizeof(T) * size());//��ԭ���ռ�����ݿ������¿ռ���
				}

				//ע�⣡���� ���������д���һ��Ҫд��delete��ǰ��
				_finish = tmp + size();//����_finish��λ��
				_endofstorage = tmp + sz;//����_endofstorage��λ��

				delete[] _start;
				_start = tmp;
			}
		}

		//����sizeֵ
		void resize(size_t sz)
		{
			;
		}

		//β��
		void push_back(const T& val)
		{
			//����ǰҪ�ж��Ƿ�Ҫ����
			if (_finish == _endofstorage)
			{
				size_t newcapacity = _finish == nullptr ? 2 : capacity() * 2;//���_finishΪ�գ�����2���ռ䣬�����ԭ��������
				reserve(newcapacity);
				//T* tmp = new T[newcapacity];

				//memmove(tmp, _start, sizeof(T) * size());//��ԭ��λ�õ�Ԫ�ؿ������¿ռ���

				////�����д���һ��Ҫ����delete[]֮ǰ
				//_finish = tmp + size();
				//_endofstorage = tmp + newcapacity;

				//delete[] _start;
				//_start = tmp;
			}

			*_finish = val;
			_finish++;
		}

		//����[]
		T& operator[](const size_t pos) 
		{
			assert(pos < size());
			return *(_start + pos);
		}

		//����vector�е�Ԫ�ظ���
		size_t size() const
		{
			return _finish - _start;
		}

		//����vector������
		size_t capacity() const
		{
			return _endofstorage - _start;
		}

		//��������
		//vector<int> v1;
		//v1.Swap(v2);
		void Swap(vector<T>& tmp)
		{
			swap(_start, tmp._start);
			swap(_finish, tmp._finish);
			swap(_endofstorage, tmp._endofstorage);
		}

	private:
		iterator _start;//һ��������ָ���һ��Ԫ��
		iterator _finish;//һ��������ָ�����һ��Ԫ�ص���һ��λ��
		iterator _endofstorage;//һ��������ָ��������λ�õ���һ��λ��
	};



	//���Թ��캯��
	void Test1()
	{
		vector<int> v1;

		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);

		vector<int> v2(v1);

		cout << v1[0] << endl;
		cout << v1[1] << endl;
		cout << v1[2] << endl;
		cout << v1[3] << endl;

		cout << v2[0] << endl;
		cout << v2[1] << endl;
		cout << v2[2] << endl;
		cout << v2[3] << endl;
	}

	//���Ը�ֵ=
	void Test2()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);

		vector<int> v2;
		v2 = v1;

		cout << v2[0] << endl;
		cout << v2[1] << endl;
		cout << v2[2] << endl;
		cout << v2[3] << endl;
	}

	//���Ե������ͷ�Χfor
	void Test3()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);

		vector<int>::iterator it = v1.begin();
		while (it != v1.end())
		{
			(*it)++;
			cout << *it << " ";
			it++;	
		}
		cout << endl;	

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void Test4()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);

		v1[0] = 10;

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;
	}
}