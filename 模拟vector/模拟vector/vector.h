#pragma once
#include<assert.h>
#include<iostream>
#include<vector>
using namespace std;

																				//��һ����ϰģ��vector
namespace My_vector
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;//�ɶ���д������
		typedef const T* const_iterator;//ֻ�ܶ�������

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
		vector(const vector<T>& v)
			:_start(new T[v.capacity()])
			,_finish(_start)
			,_endofstorage(_start+v.capacity())
		{
			//memmove(_start, tmp._start, sizeof(T) * tmp.size());

			iterator pos = v._start;
			while (pos != v._finish)//��v1�����ݸ�ֵ��v2
			{
				*_finish = *pos;
				pos++;
				_finish++;
			}
		}

		//��ֵ=����
		//vector<int> v3;
		//v3=v2;
		vector<T>& operator=(const vector<T>& tmp)
		{
			if (this != &tmp)//�жϷ�ֹ�Լ����Լ�����
			{
				vector<T> copy(tmp);
				Swap(copy);
				return *this;
			}
		}

		//begin������
		iterator begin() 
		{
			return _start;
		}

		//end������
		iterator end() 
		{
			return _finish;
		}

		//const_begin������
		const_iterator begin() const
		{
			return _start;
		}

		//const_end������
		const_iterator end() const
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
					//memmove(tmp, _start, sizeof(T) * size());//��ԭ���ռ�����ݿ������¿ռ���
					iterator pos1 = _start;
					iterator pos2 = tmp;
					while (pos1 != _finish)//��ԭ���ռ�����ݿ������¿ռ���
					{
						*pos2++ = *pos1++;
					}
				}

				//ע�⣡���� ���������д���һ��Ҫд��delete��ǰ��
				_finish = tmp + size();//����_finish��λ��
				_endofstorage = tmp + sz;//����_endofstorage��λ��

				delete[] _start;
				_start = tmp;
			}
		}

		//����sizeֵ
		void resize(const size_t sz, const T& val = T() )//��һ��T���͵�ȱʡֵ
		{
			if (sz < size())
			{
				_finish = _start + sz;
			}
			if (sz > size())
			{
				if (sz > capacity())//�����Ҫ������sizeֵ��������������Ҫ����
				{
					reserve(sz);
				}

				while (_finish != _endofstorage)
				{
					*(_finish) = val;
					_finish++;
				}
			}
		}

		//�ж�vector�Ƿ�Ϊ��
		bool empty() const
		{
			if (size() == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
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

		//βɾ
		void pop_back()
		{
			assert(size() != 0);
			_finish--;
		}

		//�м����	!!!
		iterator insert(iterator pos, const T& val)
		{
			assert(pos >= _start && pos <= _finish);

			if (size() == capacity())//�����������������Ҫ���ݣ����ݺ���Ҫ���¸�pos��������ֵ��������е�����ʧЧ����
			{
				size_t tmp = pos - _start;
				size_t newcapacity = (capacity() == 0 ? 2 : capacity() * 2);
				reserve(newcapacity);
				pos = begin() + tmp;
			}

			iterator prev = _finish - 1;
			iterator tail = _finish;

			/*int flag = _finish - pos;*///ҪŲ���Ĵ���
			while (prev >= pos)//pos֮���Ԫ������Ų
			{
				*tail = *prev;
				tail--;
				prev--;
			}

			//Ų�����ݺ�_finish��Ҫ++
			_finish++;

			*pos = val;

			return pos;
		}

		//�м�ɾ��	!!!	
		iterator erase(iterator pos)
		{
			assert(pos < _finish);

			iterator prev = pos;
			iterator tail = pos + 1;

			while (tail<_finish)
			{
				*prev = *tail;
				prev++;
				tail++;
			}

			_finish--;

			return pos;
		}

		//����[]
		T& operator[](const size_t pos) 
		{
			assert(pos < size());
			return *(_start + pos);
		}

		const T& operator[](const size_t pos) const
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

		//���vector
		void print_arr() const
		{
			vector<int>::const_iterator it = begin();
			while (it != end())
			{
				cout << *it << " ";
				it++;
			}
			cout << endl;
		}

	private:
		iterator _start;//һ��������ָ���һ��Ԫ��
		iterator _finish;//һ��������ָ�����һ��Ԫ�ص���һ��λ��
		iterator _endofstorage;//һ��������ָ��������λ�õ���һ��λ��
	};



	//���Թ��캯��	�������캯��
	void Test1()
	{
		vector<int> v1;

		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);

		vector<int> v2(v1);

		v1.print_arr();
		v2.print_arr();
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

		v1.print_arr();
		v2.print_arr();
	}

	//���Ե�����
	void Test3()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);

		const vector<int> v2(v1);
		v2.print_arr();
	}

	//����resize
	void Test4()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);

		v1.resize(10);

		v1.resize(20, 10);

		v1.print_arr();
	}

	//����βɾ
	void Test5()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);

		v1.pop_back();
		v1.pop_back();

		v1.print_arr();
	}

	//�����м���룬�м�ɾ��
	void Test6()
	{
		vector<int> v1;

		v1.insert(v1.begin(), 10);
		v1.insert(v1.end(), 20);
		v1.insert(v1.end(), 30);

		//v1.erase(v1.begin());
		//v1.erase(v1.end() - 2);

		vector<int> v2;
		v2.erase(v2.begin());

		v1.print_arr();
	}

	//����reserve
	void Test7()
	{
		vector<string> v1;
		v1.push_back("11111");
		v1.push_back("22222");
		v1.push_back("33333");
		v1.push_back("44444");

		cout << v1[0] << endl;
		cout << v1[1] << endl;
		cout << v1[2] << endl;
		cout << v1[3] << endl;
	}
}



																			//�ڶ���ģ��vector��������дblog
namespace Vector_blog
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;//�ɶ���д������
		typedef const T* const_iterator;//ֻ�ɶ�������

		//begin������
		iterator begin()
		{
			return _start;
		}

		//end������
		iterator end()
		{
			return _finish;
		}

		//const begin������
		const_iterator begin() const
		{
			return _start;
		}

		//const end������
		const_iterator end() const
		{
			return _finish;
		}
	public:
		//�޲ι��캯����ֱ��ȫ����nullptr����
		vector()
			:_start(nullptr)
			,_finish(nullptr)
			,_endofstorage(nullptr)
		{}

		//�������캯��
		//vector<int> v1;
		//vector<int> v2(v1);
		vector(const vector<T>& v)
			:_start(nullptr)
			,_finish(nullptr)
			,_endofstorage(nullptr)
		{
			const_iterator move = v.begin();
			while (move != v.end())
			{
				push_back(*move);
				move++;
			}
		}

		//��������
		~vector()
		{
			delete[] _start;
			_start = _finish = _endofstorage = nullptr;
		}

		//�������������ڽ�������vector
		void Swap(vector<T>& v)
		{
			swap(_start, v._start);
			swap(_finish, v._finish);
			swap(_endofstorage, v._endofstorage);
		}

		//��ֵ=���غ���
		//vector<int> v1;
		//v1=v2;
		vector<T>& operator=(const vector<T>& v)
		{
			if (this != &v)
			{
				vector<T> tmp(v);
				Swap(tmp);
			}
			return *this;
		}

		//����vector�����ݸ���
		void resize(const size_t n, const T& val = T())//�ڶ�������Ϊһ��T���͵�ȱʡֵ
		{
			if (n < size())
			{
				_finish = _start + n;
			}
			else if (n > size())
			{
				if (n > capacity())//����������n��������������Ҫ����
				{
					reserve(n);
				}
				iterator it1 = begin() + n;
				iterator it2 = end();
				while (it2 < it1)
				{
					push_back(val);
					it2++;
				}
			}
		}

		//����vector������
		void reserve(const size_t n)
		{
			//���Ҫ��������������ԭ����������������
			if (n > capacity())
			{
				T* tmp = new T[n];//����һ���¿ռ�
				T* tmp_start = _start;
				T* tmp_move = tmp;
				while (tmp_start != _finish)
				{
					*tmp_move++ = *tmp_start++;
				}

				//�ͷžɿռ䣬������_start,_finish,_endofstorage��λ��
				_finish = tmp + size();
				_endofstorage = tmp + n;
				delete[] _start;
				_start = tmp;
			}
		}

		//�ж�vector�Ƿ�Ϊ��
		bool empty() const
		{
			return !size();
		}

		//β������
		void push_back(const T& val)
		{
			insert(end(), val);
		}

		//βɾ
		void pop_back()
		{
			erase(end() - 1);
		}

		//�м����
		iterator insert(iterator pos, const T& val)
		{
			assert(pos <= end());
			//�������������������
			if (size() == capacity())
			{
				size_t n = pos - begin();//����֮ǰ��Ҫ��סpos����_start��ƫ�������Է����ֵ�����ʧЧ����
				size_t newcapacity = size() == 0 ? 4 : capacity() * 2;
				reserve(newcapacity);
				pos = _start + n;//����posλ��
			}

			//��posλ�ü������������������Ų��
			iterator move = end();
			while (move != pos)
			{
				*move = *(move - 1);
				move--;
			}

			*pos = val;
			_finish++;

			return pos;
		}

		//�м�ɾ��
		iterator erase(iterator pos)
		{
			assert(pos < end());

			iterator tmp = pos + 1;
			while (tmp != end())
			{
				*(tmp - 1) = *tmp;
				tmp++;
			}

			_finish--;

			return pos;
		}

		//��ȡ���ݸ���
		size_t size() const
		{
			return _finish - _start;
		}

		//��ȡ����
		size_t capacity() const
		{
			return _endofstorage - _start;
		}

		//����operator[]
		T& operator[](size_t pos)
		{
			assert(pos < size());
			return *(_start + pos);
		}

		//����operator[] const 
		const T& operator[](size_t pos) const
		{
			assert(pos < size());
			return *(_start + pos);
		}

		//front����
		T& front()
		{
			assert(size() > 0);
			return *_start;
		}

		//front���� const
		const T& front() const
		{
			assert(size() > 0);
			return *_start;
		}

		//back����
		T& back()
		{
			assert(size() > 0);
			return *(_start + size() - 1);
		}

		//back���� const
		const T& back() const
		{
			assert(size() > 0);
			return *(_start + size() - 1);
		}

		//clear����
		void clear()
		{
			_finish = _start;
		}

		bool operator==(const vector<T>& v)
		{
			if (size() == v.size())
			{
				iterator it1 = begin();
				iterator it2 = v.begin();
				while (it1 < end() && it2 < v.end())
				{
					if (*it1 == *it2)
					{
						it1++;
						it2++;
					}
					else
					{
						return false;
					}
				}
				return true;
			}
			else
			{
				return false;
			}
		}

		bool operator!=(const vector<T>& v)
		{
			return !(*this == v);
		}

		bool operator>(const vector<T>& v)
		{
			iterator it1 = begin();
			iterator it2 = v.begin();

			while (it1 < end() && it2 < v.end())
			{
				if (*it1 > *it2)
				{
					return true;
				}
				else if(*it1 < *it1)
				{
					return false;
				}
				else
				{
					it1++;
					it2++;
				}
			}

			if (it1 == end())
			{
				return false;
			}
			else
			{
				return true;
			}
		}

		bool operator>=(const vector<T>& v)
		{
			return (*this > v || *this == v);
		}

		bool operator<(const vector<T>& v)
		{
			return !(*this >= v);
		}

		bool operator<=(const vector<T>& v)
		{
			return !(*this > v);
		}

	private:
		iterator _start;
		iterator _finish;
		iterator _endofstorage;
	};

	//���Թ��캯�����������졢��ֵ=����
	void Test1()
	{
		vector<int> v1;
		v1.insert(v1.end(), 1);
		v1.insert(v1.end(), 2);
		v1.insert(v1.end(), 3);
		v1.insert(v1.end(), 4);
		v1.insert(v1.end(), 5);
		v1.insert(v1.end(), 6);

		vector<int> v2(v1);
		vector<int> v3;
		v3 = v2;

		vector<int>::iterator it1 = v1.begin();
		while (it1 != v1.end())
		{
			cout << *it1 << " ";
			it1++;
		}
		cout << endl;

		vector<int>::iterator it2 = v2.begin();
		while (it2 != v2.end())
		{
			cout << *it2 << " ";
			it2++;
		}
		cout << endl;

		vector<int>::iterator it3 = v3.begin();
		while (it3 != v3.end())
		{
			cout << *it3 << " ";
			it3++;
		}
		cout << endl;
	}

	//����resize��reserve
	void Test2()
	{
		vector<int> v1;
		v1.insert(v1.end(), 1);
		v1.insert(v1.end(), 2);
		v1.insert(v1.end(), 3);
		v1.insert(v1.end(), 4);

		v1.reserve(10);
		v1.resize(15, 20);

		vector<int>::iterator it1 = v1.begin();
		while (it1 != v1.end())
		{
			cout << *it1 << " ";
			it1++;
		}
		cout << endl;

		cout << v1.empty() << endl;
	}

	//����operator[]
	void Test3()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);

		for (int i = 0; i < v1.size(); i++)
		{
			cout << v1[i] << " ";
		}
		cout << endl;

		cout << v1.front() << endl;
		cout << v1.back() << endl;
	}

	//����insert��erase
	void Test4()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);

		v1.insert(v1.begin() + 2, 50);
		v1.erase(v1.begin());
		v1.erase(v1.end() - 1);
		v1.erase(v1.begin() + 1);

		for (int i = 0; i < v1.size(); i++)
		{
			cout << v1[i] << " ";
		}
		cout << endl;
	}

	//
	void Test5()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.clear();

		for (int i = 0; i < v1.size(); i++)
		{
			cout << v1[i] << " ";
		}
		cout << endl;
	}
}