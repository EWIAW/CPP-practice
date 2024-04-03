#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

//ʵ��һ���򵥵�string��
namespace My_String
{
	class string
	{
	public:
		//���캯��
		//string()
		//	:_str(new char)
		//{
		//	(*_str) = '\0';
		//}
		// 
		//string(const char* pstr)
		//	:_str(new char[strlen(pstr)+1])
		//{
		//	strcpy(_str, pstr);
		//}
		
		//ȫȱʡ���캯��
		string(const char* pstr = "")
			:_str(new char[strlen(pstr)+1])
		{
			strcpy(_str, pstr);
		}

		//��������
		~string()
		{
			delete[] _str;
			_str = nullptr;
		}

		//��������
		string(const string& pstr)
			:_str(new char[pstr.size() + 1])
		{
			strcpy(_str, pstr._str);
		}

		//��ֵ���������
		string& operator=(const string& pstr)
		{
			if (this != &pstr)//�����Լ����Լ���ֵ���˷�����
			{
				char* tmp = new char[pstr.size() + 1];//������һ���µĿռ�
				strcpy(tmp, pstr._str);//��Ҫ��ֵ�����ݿ������¿ռ���
				delete[] _str;//�ͷ�_strָ��Ŀռ�
				_str = tmp;//���¿ռ����_str

				return *this;//����this�ַ������������Ȳ���
			}
		}

		//��ȡ�ַ�������
		size_t size() const
		{
			return strlen(_str);
		}

		//��ȡ�ַ�����ĳ���ַ�
		char& operator[](int size) const
		{
			return *(_str + size);
		}

	private:
		char* _str;
	};

	//����cout<<
	ostream& operator<<(ostream& out,string& str)
	{
		for (int i = 0; i < str.size(); i++)
		{
			out << str[i];
		}
		out << endl;

		return out;
	}

	//���Թ��캯��
	void Test1()
	{
		string s1;
		string s2("hello");
	}

	//���Ա���
	void Test2()
	{
		string s1;
		const string s2("hello");
		for (int i = 0; i < s1.size(); i++)
		{
			//s1[i]++;
			cout << s1[i] << " ";
		}
		cout << endl;

		for (int i = 0; i < s2.size(); i++)
		{
			//s1[i]++;
			cout << s2[i] << " ";
		}
		cout << endl;
	}

	//���Կ������� �� ��ֵ
	void Test3()
	{
		string s1("hello");
		string s2(s1);
		string s3;
		s2 = s2;

		std::cout << s1 << std::endl;
		std::cout << s2 << std::endl;
		std::cout << s3 << std::endl;

	}
}



//ģ��ʵ��string����ɾ�Ĳ�
namespace String
{
	class string
	{
	public:
		//���캯��
		string(const char* pstr = "")
			:_str(new char[strlen(pstr) + 1])//�࿪�Ŀռ����ڴ��\0
			,_size(strlen(pstr))
			,_capacity(strlen(pstr))
		{
			strcpy(_str, pstr);
		}

		//��������
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}

		//��������
		string(const string& pstr)
			:_str(new char[pstr.size()+1])
			,_size(pstr._size)
			,_capacity(pstr._capacity)
		{
			strcpy(_str, pstr._str);
		}

		//������
		typedef char* iterator;
		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		//��ֵ���������
		string& operator=(const string& pstr)
		{
			if (this != &pstr)
			{
				char* tmp = new char[pstr.size() + 1];//��һ���µĿռ��this
				strcpy(tmp, pstr._str);//��Ҫ��ֵ�����ݸ����¿��Ŀռ�
				delete[] _str;
				_str = tmp;
				_size = _capacity = pstr._size;

				return *this;
			}
		}

		//��ȡ�ַ�������Ч�ַ�����
		size_t size() const
		{
			return _size;
		}

		//��ȡ�ַ���������
		size_t capacity() const
		{
			return _capacity;
		}

		//�����ַ����ĵ�i���ַ�
		char& operator[](size_t i) const
		{
			assert(i < _size);
			return _str[i];
		}

		//����C��ʽ���ַ���
		char* c_str() const
		{
			return _str;
		}

		//��������size
		void resize(size_t i)
		{
			if (i > _size)//�����Ҫ�������size��֮ǰ��
			{
				//����������size�ȵײ��capacity������Ҫ����
				if (i > _capacity)
				{
					reserve(i);
				}

				memset(_str + _size, 0, sizeof(char) * _capacity - _size);

				_size = i;
				//char* tmp = new char[i + 1];//��һ������Ŀռ�
				//memset(tmp, 0, sizeof(char) * (i + 1));//�����ռ��ֵȫ����0
				//strcpy(tmp, _str);//��ԭʼ�ռ俽�����¿ռ�
				//delete[] _str;
				//_str = tmp;

				//_size = _capacity = i;
			}
			if (i < _size)//����������size��֮ǰС
			{
				_size = i;
				_str[i] = '\0';
			}
		}

		//��������capacity
		void reserve(size_t i)
		{
			if (i > _capacity)
			{
				char* tmp = new char[i + 1];
				strcpy(tmp, _str);
				delete[] _str;
				_str = tmp;
				_capacity = i;
			}
		}

		//β��һ���ַ�
		void push_back(const char& ch)
		{
			if (_size == _capacity)//���������Ҫ����
			{
				size_t newcapacity = (_capacity == 0 ? 4 : _capacity * 2);
				//char* tmp = new char[newcapacity + 1];
				//strcpy(tmp, _str);
				//delete[] _str;
				//_str = tmp;  
				//_capacity = newcapacity;
				reserve(newcapacity);
			}

			_str[_size] = ch;
			_size++;
			_str[_size] = 0;//�����һ���ַ�����һ��λ�ø�\0		������
		}

		//β��һ���ַ���
		void append(const char* pstr)
		{
			//char* tmp = new char[_size + strlen(pstr) + 1];
			//strcpy(tmp, _str);//�뿽��ԭ����
			//strcpy(tmp + _size, pstr);//�ٿ����²����
			//delete[] + _str;
			//_str = tmp;

			size_t newcapacity = _size + strlen(pstr) + 1;//ȷ���µĿռ������
			reserve(newcapacity);//����
			strcpy(_str + _size, pstr);//��ԭ�ַ�����׷�����ַ���
			_size = newcapacity - 1;//����_size��ֵ
		}

		//����+=
		void operator+=(const char& ch)
		{
			push_back(ch);
		}

		void operator+=(const char* pstr)
		{
			append(pstr);
		}

		void insert(size_t pos, const char* pstr)
		{
			assert(pos <= _size);

		}

		void erase;

		void find;
		
		operator==();

		operator!=();

		operator>();

		operator>=();

		operator<();

		operator<=();

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};

	//����cout<<
	ostream& operator<<(ostream& out, string& pstr)
	{
		for (int i = 0; i < pstr.size(); i++)
		{
			out << pstr[i];
		}
		out << endl;
		return out;
	}

	//����cin>>
	istream& operator>>(istream& in, string& pstr)
	{
		char arr[10];
		cin >> arr;
		int len = strlen(arr);
		pstr.reserve(len+1);
		pstr.resize(len);

		for (int i = 0; i < pstr.size(); i++)
		{
			pstr[i] = arr[i];
		}

		return in;
	}

	//���Թ��캯�����������죬��ֵ���������
	void Test1()
	{
		string s1;
		string s2("hello");
		string s3(s2);
		string s4;
		s4 = s3;
		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;
		cout << s3.c_str() << endl;
		cout << s4.c_str() << endl;
	}

	//����resize
	void Test2()
	{
		string s1("hello");
		cout << s1 << endl;
		s1.resize(10);
		s1[9] = 'a';
		cout << s1 << endl;

	}

	//����reserve
	void Test3()
	{
		string s1("hello");
		s1.reserve(10);
		cout << s1 << endl;
	}

	//����push_back
	void Test4()
	{
		string s1;
		//string s2("hello");

		s1.push_back('a');

		s1.push_back(' ');
		s1.push_back('w');
		s1.push_back('o');
		s1.push_back('r');
		s1.push_back('l');
		s1.push_back('d');
		cout << s1 << endl;
		//cout << s2 << endl;
	}

	//����append
	void Test5()
	{
		string s1;
		s1.append("hello");
		s1.append(" ");
		s1.append("world");
		s1.append("");

		cout << s1 << endl;
	}

	//����+=
	void Test6()
	{
		string s1("hello");
		s1 += ' ';
		s1 += "world";

		cout << s1 << endl;
	}

	//���Ե�����
	void Test7()
	{
		string s1("hello world");
		string::iterator it = s1.begin();
		while (it != s1.end())
		{
			cout << *it << " ";
			it++;
		}
		cout << endl;
	}

	//��������cin>>
	void Test8()
	{
		string s1;
		cin >> s1;
		cout << s1 << endl;

		cin >> s1;
		cout << s1 << endl;
	}
}


