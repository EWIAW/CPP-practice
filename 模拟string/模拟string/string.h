#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

																				//ʵ��һ���򵥵�string��
namespace Simple_String
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



																				//ģ��ʵ������string����ɾ�Ĳ�
namespace Full_String
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

		//��������	��ͳд��
		//string(const string& pstr)
		//	:_str(new char[pstr.size()+1])
		//	,_size(pstr._size)
		//	,_capacity(pstr._capacity)
		//{
		//	strcpy(_str, pstr._str);
		//}

		//��������	�ִ�д��
		//string s2(s1)
		string(const string& pstr)
			:_str(nullptr)
		{
			string tmp(pstr._str);
			Swap(tmp);
		}

		void Swap(string& pstr)
		{
			swap(_str, pstr._str);
			swap(_size, pstr._size);
			swap(_capacity, pstr._capacity);
		}

		//��ֵ���������	��ͳд��
		//string& operator=(const string& pstr)
		//{
		//	if (this != &pstr)
		//	{
		//		char* tmp = new char[pstr.size() + 1];//��һ���µĿռ��this
		//		strcpy(tmp, pstr._str);//��Ҫ��ֵ�����ݸ����¿��Ŀռ�
		//		delete[] _str;
		//		_str = tmp;
		//		_size = _capacity = pstr._size;

		//		return *this;
		//	}
		//}

		//��ֵ=����	�ִ�д��
		//string s3;
		//s3=s2;
		string& operator=(string pstr)
		{
			Swap(pstr);
			return *this;
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
		void resize(size_t i,char ch= '0')
		{
			if (i > _size)//�����Ҫ�������size��֮ǰ��
			{
				//����������size�ȵײ��capacity������Ҫ����
				if (i > _capacity)
				{
					reserve(i);	
				}
				 
				memset(_str + _size, ch, sizeof(char) * (i - _size));

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

		string& insert(size_t pos, const char* pstr)
		{
			assert(pos <= _size);
			size_t newcapacity = _size + strlen(pstr);//ȷ���������ַ��������������С	
			reserve(newcapacity);//����
			memmove(_str + pos + strlen(pstr), _str + pos, sizeof(char) * (_size - pos + 1));//��pos֮����ַ����󿽱�����ȷ��λ����
			memmove(_str + pos, pstr, sizeof(char) * strlen(pstr));//��Ҫ������ַ���������ȷ��λ������
			_size = newcapacity;//����_size��ֵ

			return *this;
		}

		void erase(size_t pos, size_t len = -1)
		{
			assert(pos < _size);//���Ҫɾ����λ�ô���_size�������

			if ((pos + len) > _size)//���Ҫɾ���ĳ��ȣ����ں�����ַ�������Ҫɾ���ĳ��ȸ���ĩβ
			{
				len = _size - pos;
			}

			strcpy(_str + pos, _str + pos + len);//�ú�����ַ�������ǰ���
			_size = _size - len;
		}

		size_t find(const char* pstr, size_t pos =0)
		{
			assert(pos < _size);

			char* ret = strstr(_str + pos, pstr);//�ַ�������
			if (ret == nullptr)//���û�ҵ�
			{
				return -1;
			}

			int count = 0;
			for (int i = 0; i < _size; i++)
			{
				if ((_str + i) == ret)//����retָ��ָ����ַ����±�
				{
					break;
				}
				count++;
			}
			return count;
		}

		bool operator==(const char* pstr)
		{
			int len = strlen(pstr);

			if (_size != len)
			{
				return false;
			}

			for (int i = 0; i < _size; i++)
			{
				if (_str[i] != pstr[i])
				{
					return false;
				}
			}
			
			return true;
		}

		bool operator!=(const char* pstr)
		{
			return !(*this == pstr);
		}

		bool operator>(const char* pstr)
		{
			int ret = strcmp(_str, pstr);
			if (ret == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		bool operator>=(const char* pstr)
		{
			return *this > pstr || *this == pstr;
		}

		bool operator<(const char* pstr)
		{
			return !(*this >= pstr);
		}

		bool operator<=(const char* pstr)
		{
			return !(*this > pstr);
		}

		void geline()//ʵ�ֿ�������ո�
		{
			resize(0);//����֮ǰ�Ȱ�ԭ�����������
			char ch;
			while (1)
			{
				ch = cin.get();
				if (ch == '\n')
				{
					break;
				}
				else
				{
					*this += ch;
				}
			}
		}

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
	//istream& operator>>(istream& in, string& pstr)
	//{
	//	char arr[10];
	//	cin >> arr;
	//	int len = strlen(arr);
	//	pstr.reserve(len+1);
	//	pstr.resize(len);

	//	for (int i = 0; i < pstr.size(); i++)
	//	{
	//		pstr[i] = arr[i];
	//	}

	//	return in;
	//}

	istream& operator>>(istream& in, string& pstr)
	{
		pstr.resize(0);//����֮ǰ�Ȱ�ԭ�����������
		char ch;
		while (1)
		{
			ch = in.get();
			if (ch == ' ' || ch == '\n')
			{
				break;
			}
			else
			{
				pstr += ch;
			}
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
		s1.reserve(50);
		s1.resize(10,'8');
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

	//��������cin>>  ��  getline
	void Test8()
	{
		string s1;
		s1.geline();
		cout << s1 << endl;

		s1.geline();
		cout << s1 << endl;
	}

	//����insert��erase
	void Test9()
	{
		string s1("helloabcdefghijk");

		s1.insert(0, " world");
		
		//s1.erase(0,3);

		cout << s1 << endl;
	}

	//����find
	void Test10()
	{
		string s1("hello world");
		int ret = s1.find("ha");
		cout << ret << endl;
	}

	//����==��>��<�������
	void Test11()
	{
		string s1("hello");
		bool ret1 = (s1 >= "hella");

		cout << ret1 << endl;
	}
}


																				//����������ִ�д��
namespace String_Copy
{
	class string
	{
	public:
		//���캯��
		string(const char* pstr="")
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

		//��������Ĵ�ͳд��
		//string s3(s2)
		//string(const string& pstr)
		//	:_str(new char[strlen(pstr._str)+1])
		//{
		//	strcpy(_str, pstr._str);
		//}

		//����������ִ�д��
		//string s2(s3)
		string(const string& pstr)
			:_str(nullptr)
		{
			string tmp(pstr._str);
			swap(_str, tmp._str);
		}

		//��ֵ=���صĴ�ͳд��
		//string s3;
		//s3=s2
		//string& operator=(const string& pstr)
		//{
		//	if (this != &pstr)
		//	{
		//		char* tmp = new char[strlen(pstr._str) + 1];
		//		strcpy(tmp, pstr._str);
		//		delete[] _str;
		//		_str = tmp;

		//		return *this;
		//	}
		//}

		//��ֵ=���ص��ִ�д��
		//string s3
		//s3=s2
		//string& operator=(string& pstr)
		//{
		//	if (this != &pstr)
		//	{
		//		string tmp(pstr._str);
		//		swap(_str, tmp._str);
		//	}
		//	return *this;
		//}

		string& operator=(string pstr)
		{
			if (this != &pstr)
			{
				swap(_str, pstr._str);
			}
			return *this;
		}

		char& operator[](size_t size)
		{
			return _str[size];
		}

		size_t size()
		{
			return strlen(_str);
		}

	private:
		char* _str;
	};

	void Test1()
	{
		string s1("hello");
		string s2(s1);
		string s3;
		s3 = s2;

		for (int i = 0; i < s1.size(); i++)
		{
			cout << s1[i];
		}
		cout << endl;

		for (int i = 0; i < s2.size(); i++)
		{
			cout << s2[i];
		}
		cout << endl;

		for (int i = 0; i < s3.size(); i++)
		{
			cout << s3[i];
		}
		cout << endl;
	}
}



																//�ٴ���ϰģ��ʵ��string�࣬�������´������ڴ�������
namespace string_blog
{
	class string
	{
	public:
		//��char* ������Ϊiterator������
		typedef char* iterator;
		typedef const char* const_iterator;
	public:
		//�޲�����ι��캯��
		//string s1;
		//string s2("hello world");
		string(const char* tmp = "")//ȱʡֵ��""������һ�����ַ����������ַ�����ֻ��һ��\0
			:_str(new char[strlen(tmp)+1])//�࿪һ���ռ���Ϊ�˴�\0
			,_size(strlen(tmp))
			,_capacity(strlen(tmp))
		{
			strcpy(_str, tmp);
		}

		//�������캯��
		//string s2(s1);
		//string(const string& tmp)
		//	:_str(new char[tmp.size()+1])//size()�����ں���ʵ��
		//	,_size(tmp._size)
		//	,_capacity(tmp._capacity)
		//{
		//	strcpy(_str, tmp._str);
		//}

		void Swap(string& s)//������������������string�����
		{
			swap(_str, s._str);
			swap(_size, s._size);
			swap(_capacity, s._capacity);
		}

		//���������ִ�д��
		string(const string& s)
			:_str(nullptr)
		{
			string tmp(s._str);//��s���ַ���ȥ����tmp
			Swap(tmp);//��tmp��this���н���
		}

		//��������
		~string()
		{
			delete[] _str;//�ͷ�_strָ��Ŀռ�
			_str = nullptr;//��_strָ���ó�nullptr
			_size = _capacity = 0;
		}

		//��ֵ=����
		//string s1("hello world");
		//s1=s2;
		//string& operator=(const string& tmp)
		//{
		//	if (this != &tmp)//��ֹ�Լ����Լ���ֵ
		//	{
		//		delete[] _str;//���ͷ�ԭ�����ַ���
		//		char* ptr = new char[tmp.size() + 1];//��һ���¿ռ��_str
		//		strcpy(ptr, tmp._str);//��tmp�����ݿ�����ptr
		//		_str = ptr;
		//		_size = tmp._size;
		//		_capacity = tmp._capacity;
		//	}
		//	return *this;
		//}

		//��ֵ=���ص��ִ�д��
		string& operator=(const string& s)
		{
			if (this != &s)
			{
				string tmp(s);//��sȥ����һ����ʱ����
				Swap(tmp);//��������string����
			}
			return *this;
		}

		//begin������
		iterator begin()
		{
			return _str;//���ص�һ���ַ���ָ��
		}

		//end������
		iterator end()
		{
			return _str + size();//����\0λ�õ�ָ��
		}

		//const begin������
		const_iterator begin() const
		{
			return _str;
		}

		//const end������
		const_iterator end() const
		{
			return _str + size();
		}

		//����string���ַ�����
		size_t size() const
		{
			return _size;
		}

		//����string������
		size_t capacity() const
		{
			return _capacity;
		}

		//����string������
		void reserve(const size_t n = 0)
		{
			if (n > size())//���Ҫ����������������ԭ�����������Ž��е���
			{
				char* tmp = new char[n + 1];//Ԥ��һ��λ�ô��\0
				strcpy(tmp, _str);//��ԭ�����ַ����������¿ռ���
				delete[] _str;//�ͷ�ԭ���Ŀռ�
				_str = tmp;//���¿ռ�_str
				_capacity = n;
			}
		}

		//����string��size
		void resize(const size_t n, const char& ch = '\0')
		{
			if (n > _size)
			{
				if (n > _capacity)//���size��������������Ҫ����
				{
					reserve(n);//���ݵ�n������
				}

				size_t left = _size;
				size_t right = n;
				while (left < right)//��ch�ַ����ݸ�ֵ��û�����ݵ�λ����
				{
					_str[left++] = ch;
				}
			}
			//�����һ��λ�ø�ֵ\0
			*_str = '\0';
		}

		//clearʵ��
		void clear()
		{
			_str[0] = '\0';//����һ���ַ���λ�ø�\0
			_size = 0;//�������ȸ�0
		}

		//emptyʵ��
		bool empty() const 
		{
			if (size() == 0)
				return true;
			else
				return false;
		}

		//����[]
		char& operator[](const size_t pos)
		{
			assert(pos < size());//���Ҫ���ص�λ�ò����ڣ������
			return *(_str + pos);
		}

		//����const[]
		const char& operator[](const size_t pos) const
		{
			assert(pos < size());//���Ҫ���ص�λ�ò����ڣ������
			return *(_str + pos);
		}

		//β��һ���ַ�
		void push_back(const char& ch)
		{
			insert(size(), 1, ch);
		}

		//βɾһ���ַ�
		void pop_back()
		{
			assert(size());
			erase(size() - 1, 1);
		}

		//β��һ���ַ���
		void append(const char* s)
		{
			insert(size(), s);
		}

		//����operator+=
		string& operator+=(const char* s)
		{
			append(s);
			return *this;
		}

		string& operator+=(const char& ch)
		{
			push_back(ch);
			return *this;
		}

		//��posλ�ò���һ���ַ���
		void insert(const size_t pos, const char* s)
		{
			assert(pos <= size());//���� �����λ��Ҫ<=size

			if ((size() + strlen(s)) > capacity())//�ж�׷���ַ����Ƿ���Ҫ����
			{
				reserve(size() + strlen(s));
			}

			//��posλ�ú���ַ�����Ų
			memmove(_str + pos + strlen(s), _str + pos, end() - (_str + pos));
			//��s�ַ������뵽pos��λ��
			memmove(_str + pos, s, strlen(s));
			//�����һ��λ�ø�ֵ\0
			*(_str + capacity()) = '\0';
			_size = size() + strlen(s);//������_sizeֵ
		}

		//��posλ�ò���n���ַ�
		void insert(const size_t pos, size_t n, const char& ch)
		{
			assert(pos <= size());
			if ((size() + n) > capacity())
			{
				reserve(size() + n);
			}
			memmove(_str + pos + n, _str + pos, end() - (_str + pos));
			memset(_str + pos, ch, n);
			*(_str + capacity()) = '\0';
			_size = _size + n;
		}

		//��posλ��ɾ��n���ַ�
		void erase(const size_t pos, size_t len)
		{
			assert(pos < size());
			
			if (len >= (end() - (_str + pos)))//���Ҫɾ���ĳ��ȳ���pos������ַ������ȣ���ֱ��ɾ��β
			{
				*(_str + pos) = '\0';
			}
			else
			{
				strcpy(_str + pos, _str + pos + len);
			}

			_size = _size - len;
		}

		//�ַ�������    �ӵ�pos��λ�ÿ�ʼ����
		int find(const char* s, const size_t pos =0) const
		{
			char* tmp = strstr(_str + pos, s);
			if (tmp == nullptr)
			{
				return -1;
			}
			else
			{
				return tmp - _str;
			}
		}

		//ת��ΪC���ַ���
		char* c_str() const
		{
			return _str;
		}

		bool operator==(const char* s) const 
		{
			int ret = strcmp(_str, s);
			if (ret == 0)
				return true;
			else
				return false;
		}

		bool operator!=(const char* s) const
		{
			return !(*this == s);
		}

		bool operator>(const char* s) const
		{
			int ret = strcmp(_str, s);
			if (ret > 0)
				return true;
			else
				return false;
		}

		bool operator>=(const char* s) const
		{
			return (*this > s) && (*this == s);
		}

		bool operator<(const char* s) const
		{
			return !(*this >= s);
		}

		bool operator<=(const char* s) const
		{
			return (*this < s) && (*this == s);
		}

		void getline()
		{
			//����֮ǰ����Ҫ����ַ���
			clear();
			while (1)
			{
				char ch;
				//cin >> ch;
				ch = cin.get();
				if (ch == '\n')
				{
					break;
				}
				else
				{
					(*this) += ch;
				}
			}
			(*this) += '\0';
		}

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};

	//����cout<<
	ostream& operator<<(ostream& out, string& s)
	{
		out << s.c_str() << endl;
		return out;
	}

	//����cin>>
	istream& operator>>(istream& in, string& s)
	{
		//����֮ǰ����Ҫ����ַ���
		s.clear();
		while (1)
		{
			char ch;
			//cin >> ch;
			ch = in.get();
			if (ch == ' ' || ch == '\n')
			{
				break;
			}
			else
			{
				s += ch;
			}
		}
		s += '\0';
		return in;
	}

	//���Թ��캯�� �� ��ֵ=����
	void Test1()
	{
		string s1;
		string s2("hello world");
		string s3(s2);
		s1 = s3;

		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;
		cout << s3.c_str() << endl;
	}

	//���Ե�����
	void Test2()
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

	//����
	void Test3()
	{
		string s1("hello world");
		s1.clear();
		s1.resize(10, 'b');
		cout << s1.c_str() << endl;
		cout << s1.empty() << endl;
		s1.clear();
		cout << s1.c_str() << endl;
		cout << s1.empty() << endl;
	}

	void Test4()
	{
		string s1("hello world");
		for (int i = 0; i < s1.size(); i++)
		{
			s1[i] -= 1;
		}
		cout << s1.c_str() << endl;
	}

	//����insert
	void Test5()
	{
		string s1("hello world");
		s1.getline();
		cout << s1 << endl;
	}
}