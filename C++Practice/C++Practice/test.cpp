//#include<iostream>

//using namespace std;
//
//int main()
//{
//	cout << "hehe\n" << endl;
//
//	int a = 10;
//	double b = 3.1415926;
//	char ch = 'c';
//
//	char arr[] = "haha";
//
//	cout << a << " " << b << " " << ch << " " << arr << endl;
//
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//int main()
//{
//	cout << "hehe" << endl;
//
//	return 0;
//}

//int main()
//{
//	std::cout << "hehe" << std::endl;
//	return 0;
//}

//#include<iostream>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//double Add(double x, double y)
//{
//	return x + y;
//}
//
//
//
//int main()
//{
//	Add(1, 2);
//	Add(3.1, 2.5);
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//namespace aaa
//{
//	int a = 10;
//	int b = 20;
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//}
//
//using namespace aaa;
//
//int main()
//{
//	aaa::a;
//
//	cout << a << endl;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	std::cout << "hello world" << std::endl;
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int endl = 10;
//
//int main()
//{
//	cout << endl << std::endl;
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//namespace calculator
//{
//	int a = 10;
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//}
//
//using namespace calculator;
//
//int main()
//{
//	int sum = Add(10, 20);
//
//	cout << sum << " " << a << endl;
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int Add(int x = 0, int y = 0, int z = 0)
//{
//	return x + y + z;
//}
//
//int main()
//{
//	int sum = Add();
//	cout << sum << endl;
//
//	int sum1 = Add(1, 3);
//	cout << sum1 << endl;
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int Add(int x , int y=0, int z=0)
//{
//	return x + y + z;
//}
//
//int main()
//{
//	int sum = Add(10, , 3);
//	cout<<sum<<endl;
//	return 0;
//}

//#include<iostream>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Add(double x, double y)//���Ͳ�ͬ
//{
//	return x + y;
//}
//
//int Add(double x, double y, double z)//������ͬ
//{
//	return x + y + z;
//}
//
//
//void Add(int i, char a)
//{
//	;
//}
//
//void Add(char a, int i)//˳��ͬ
//{
//	;
//}
//
//int main()
//{
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	int& ra = a;
//
//	cout << &a << endl;
//	cout << &ra << endl;
//
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	const int a = 10;
//	int& ra = a;//���벻��ͨ������Ϊconst ���εı���aֻ�ܶ�����д����ra�ɶ���д��Ȩ�޷Ŵ���
//
//	const int b = 20;
//	const int& rb = 20;//������ͨ��
//
//	int c = 30;
//	const int& rc = c;//������ͨ������Ϊc�ɶ���д��rcֻ�ɶ���Ȩ����С
//
//	//�ܽᣬȨ�޿�����С�������ܷŴ�
//
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	int i = 0;
//	double aaa = i;
//	double& bd = i;
//
//	int a = 1;
//	const double& pa = a;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//
//int Count1()
//{
//	static int a = 0;
//	a++;
//	return a;
//}
//
////int& Count2()
////{
////	a++;
////	return a;
////}
//
//int main()
//{
//	int tmp = Count1();	
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
////C���Խ�����������д��
//void Swap_C(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
////C++ʹ�����ý���������
//void Swap_CPP(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//
//	Swap_C(&x, &y);
//
//	cout << x << " " << y << endl;
//
//	Swap_CPP(x, y);
//
//	cout << x << " " << y << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int a = 0;//ȫ�ֱ���a
//
//int& Count1()
//{
//	a++;
//	return a;
//}
//
//int main()
//{
//	int& tmp = Count1();
//	cout << a << endl;
//	tmp++;
//	cout << a << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//inline void Swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	Swap(x, y);
//	cout << x << " " << y << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//
//	for (auto& e : arr)
//	{
//		e *= 2;
//		cout << e;
//	}
//	cout << endl;
//
//
//	return 0;
//}

//#include"game.h"
//
//int main()
//{
//
//
//	GameStart();
//	GameRun();
//	GameEnd();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char arr[10];
//	cin >> arr;
//	cout << arr << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int Count(int x, int y)
//{
//	return x + y;
//}
//
//double Count(double x, double y)
//{
//	return x + y;
//}
//
//int main()
//{
//	Count(1, 2);
//	Count(1.2, 3.5);
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//class A
//{
//private:
//	int a;
//	char b;
//	char c;
//	char d;
//	char e;
//	char g;
//};
//
//class B
//{
//	;
//};
//
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//////��struct������
////struct Date
////{
////	void Show()
////	{
////		cout << _year << "-" << _month << "-" << _day << endl;
////	}
////
////	int _year;
////	int _month;
////	int _day;
////};
//
////��class������
//class date
//{
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Show();
//
//	date d2;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Data
//{
//public:
//	void Show();
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void Data::Show()
//{
//	cout << _year << "-" << _month << "-" << _day << endl;
//}
//
//int main()
//{
//	Data d1;
//	cout << sizeof(d1) << endl;
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//class Data
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Data d1;
//	Data d2;
//	d1.Init(2024, 3, 5);
//	d2.Init(2024, 3, 6);
//
//	d1.Show();
//	d2.Show();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	bool operator>(Date& d)
//	{
//		if (_year > d._year)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month > d._month)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month == d._month && _day > d._day)
//		{
//			return true;
//		}
//		return false;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2024, 3, 7);
//	Date d2(2024, 3, 7);
//
//	bool ret = d1.operator>(d2);
//	cout << ret << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//void Init(int year,int month,int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	//Date(int year = 0,int month = 1,int day = 1)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//	Date()
//	{
//		_year = 0;
//		_month = 1;
//		_day = 1;
//	}
//
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{	
//
//	//Date d1(2024, 3, 9);
//	//Date d2;
//	Date d1;
//	Date d2(2024, 3, 8);
//
//	d1.Show();
//	d2.Show();
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Time
//{
//public:
//	Time()
//	{
//		_hour = 0;
//		_min = 1;
//		_second = 1;
//		cout << "Time" << endl;
//		cout << _hour << "-" << _min << "-" << _second << endl;
//	}
//private:
//	int _hour;
//	int _min;
//	int _second;
//};
//
//class Date
//{
//public:
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	Time _t;
//};
//
//int main()
//{
//	Date d1;
//	d1.Show();
//
//	return 0;
//}




//#include<iostream>
//using namespace std;
//
//class Time
//{
//public:
//	Time(int hour = 24, int min = 0, int second = 0)
//	{
//		_hour = hour;
//		_min = min;
//		_second = second;
//	}
//
//	void Show()
//	{
//		cout << _hour << "-" << _min << "-" << _second << endl;
//	}
//
//	~Time()
//	{
//		cout << "Time�� �������" << endl;
//	}
//private:
//	int _hour;
//	int _min;
//	int _second;
//};
//
//class Date
//{
//public:
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	~Date()
//	{
//		cout << "Date�� �������" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	Time _t;
//};
//
//int main()
//{
//	Date d1(2024, 3, 8);
//
//	d1.Show();
//
//	return 0;
//}

//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//class Stack
//{
//public:
//	//���캯��
//	Stack(int n = 10)//ջ�ĳ�ʼ��
//	{
//		int* tmp = (int*)malloc(sizeof(int) * n);
//		if (tmp == nullptr)
//		{
//			cout << "����ʧ��" << endl;
//			exit(-1);
//		}
//		_a = tmp;
//		_size = 0;
//		_capacity = n;
//	}
//
//	//ջ������
//	void CheckCapacity()
//	{
//		if (_size == _capacity)
//		{
//			int* tmp = (int*)realloc(_a, sizeof(int) * (_capacity * 2));
//			if (tmp == nullptr)
//			{
//				cout << "����ʧ��" << endl;
//				exit(-1);
//			}
//			_a = tmp;
//			_capacity *= 2;
//		}
//	}
//
//	//��ջ
//	void Push(int x)
//	{
//		CheckCapacity();
//		_a[_size] = x;
//		_size++;
//	}
//
//	//��ջ
//	void Pop()
//	{
//		assert(_size > 0);
//		_size--;
//	}
//
//	//����ջ
//	void Print()
//	{
//		int i = 0;
//		while (i < _size)
//		{
//			cout << _a[i] << " ";
//			i++;
//		}
//	}
//
//	//��������
//	~Stack()
//	{
//		free(_a);
//		_size = 0;
//		_capacity = 0;
//		_a == nullptr;
//	}
//
//private:
//	int* _a;//ջ����
//	int _size;//ջ������Ԫ�ظ���
//	int _capacity;//ջ������
//};
//
//int main()
//{
//	Stack s1;
//
//	s1.Push(1);
//	s1.Push(2);
//	s1.Push(3);
//	s1.Push(4);
//	s1.Push(5);
//
//	s1.Pop();
//	s1.Pop();
//	s1.Pop();
//
//	s1.Print();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2024, 3, 9);
//	d1.Show();
//
//	Date d2(d1);
//	d2.Show();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Time
//{
//public:
//	Time(int hour = 24, int min = 0, int second = 0)
//	{
//		_hour = hour;
//		_min = min;
//		_second = second;
//	}
//
//private:
//	int _hour;
//	int _min;
//	int _second;
//};
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	bool operator==(const Date& d)
//	{
//		return _year == d._year
//			&& _month == d._month
//			&& _day == d._day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Date d1(2024, 3, 9);
//	Date d2(2024, 3, 9);
//
//	//bool ret = d1.operator==(d2);
//	bool ret = d1 == d2;
//
//	cout << ret << endl;
//
//	return 0;
//}




//ʱ����������ʵ��
//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//��ȡ���µ�����
//	int GetMonthDay(int year, int month)
//	{
//		int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		//�ж��Ƿ�����
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			arr[2]++;//���·�����++
//		}
//		return arr[month];
//	}
//
//	//���캯��
//	Date(int year = 0, int month = 0, int day = 0)
//	{
//		if (year >= 0 
//			&& month >= 1 && month <= 12 
//			&& day >= 1 && day <= GetMonthDay(year, month))
//		{
//			_year = year;
//			_month = month;
//			_day = day;
//		}
//		else
//		{
//			/*cout << "�Ƿ�����" << endl;*/
//			_year = -1;
//			_month = -1;
//			_day = -1;
//		}
//	}
//
//	//��������
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	//���ڱȽ�
//	bool operator==(const Date& d)//�ж������Ƿ����
//	{
//		if (_year == d._year
//			&& _month == d._month
//			&& _day == d._day)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	bool operator>(const Date& d)//�ж������Ƿ��������
//	{
//		if (_year > d._year)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month > d._month)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month == d._month && _day > d._day)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	bool operator>=(const Date& d)//�ж������Ƿ���ڵ�������
//	{
//		return (*this == d) || (*this > d);
//	}
//
//	bool operator<(const Date& d)//�ж������Ƿ�С������
//	{
//		return !(*this >= d);
//	}
//
//	bool operator!=(const Date& d)//�ж������Ƿ����
//	{
//		return !(*this == d);
//	}
//
//	bool operator<=(const Date& d)//�ж������Ƿ�С�ڵ�������
//	{
//		return !(*this >= d);
//	}
//
//	//����+��+=����
//	Date operator+(int day)//����+����
//	{
//		Date ret(*this);
//
//		ret._day += day;
//
//		while (ret._day > GetMonthDay(ret._year, ret._month))
//		{
//			ret._day -= GetMonthDay(ret._year, ret._month);
//			ret._month++;
//
//			if (ret._month > 12)
//			{
//				ret._year++;
//				ret._month -= 12;
//			}
//		}
//		return ret;
//	}
//
//	Date& operator+=(int day)//����+=����
//	{
//		_day += day;
//
//		while (_day > GetMonthDay(_year, _month))
//		{
//			_day -= GetMonthDay(_year, _month);
//			_month++;
//
//			if (_month > 12)
//			{
//				_year++;
//				_month -= 12;
//			}
//		}
//		return (*this);
//	}
//
//	//����-����-=����
//	Date operator-(int day)//����-����
//	{
//		//Date ret(*this);
//
//		//ret._day -= day;
//		//while (ret._day <= 0)
//		//{
//		//	ret._month--;
//		//	if (ret._month <= 0)
//		//	{
//		//		ret._month = 12;
//		//		ret._year--;
//		//	}
//
//		//	ret._day += GetMonthDay(ret._year, ret._month);
//		//}
//
//		//return ret;
//
//		Date ret(*this);
//		ret -= day;
//		return ret;
//	}
//
//	Date& operator-=(int day)//����-=����
//	{
//		_day -= day;
//
//		while (_day <= 0)
//		{
//			_month--;
//			if (_month <= 0)
//			{
//				_year--;
//				_month = 12;
//			}
//			_day += GetMonthDay(_year, _month);
//		}
//
//		return (*this);
//	}
//
//	//���� ǰ��++
//	void operator++()
//	{
//		//_day++;
//		//while (_day > GetMonthDay(_year, _month))
//		//{
//		//	_day -= GetMonthDay(_year, _month);
//		//	_month++;
//
//		//	if (_month > 12)
//		//	{
//		//		_year++;
//		//		_month = 1;
//		//	}
//		//} 
//		(*this) += 1;
//	}
//
//	//���� ����++
//	Date operator++(int)
//	{
//		//Date ret(*this);
//
//		//ret._day++;
//
//		//while (ret._day > GetMonthDay(_year, _month))
//		//{
//		//	ret._day -= GetMonthDay(_year, _month);
//		//	ret._month++;
//
//		//	if (ret._month > 12)
//		//	{
//		//		ret._year++;
//		//		ret._month = 1;
//		//	}
//		//}
//		//return ret;
//
//		Date ret(*this);
//		ret += 1;
//		return ret;
//	}
//
//	//���� ǰ��--
//	void operator--()
//	{
//		//_day--;
//
//		//while (_day == 0)
//		//{
//		//	_month--;
//		//	if (_month == 0)
//		//	{
//		//		_year--;
//		//		_month = 12;
//		//	}
//		//	_day += GetMonthDay(_year, _month);
//		//}
//
//		(*this) -= 1;
//	}
//
//	//���� ����--
//	Date operator--(int)
//	{
//		//Date ret(*this);
//		//ret._day--;
//		//while (ret._day == 0)
//		//{
//		//	ret._month--;
//		//	if (ret._month == 0)
//		//	{
//		//		ret._year--;
//		//		ret._month = 12;
//		//	}
//		//	ret._day += GetMonthDay(ret._year, ret._month);
//		//}
//		Date ret(*this);
//		ret -= 1;
//		return ret;
//	}
//
//	//����-����
//	int operator-(const Date& d)
//	{
//		int ret = 0;//���صĲ�ֵ����
//
//		Date tmp(d);
//
//		//��һ����� d1���ڴ���d
//		if ((*this) > d)
//		{
//			while (tmp._year != _year)
//			{
//				ret -= 365;
//				tmp += 365;
//			}
//
//			while (tmp._month != _month)
//			{
//				if (_month > tmp._month)
//				{
//					ret -= GetMonthDay(tmp._year, tmp._month);
//					tmp += GetMonthDay(tmp._year, tmp._month);
//				}
//				else
//				{
//					ret += GetMonthDay(tmp._year, tmp._month);
//					tmp -= GetMonthDay(tmp._year, tmp._month);
//				}
//			}
//
//			if (_day > tmp._day)
//			{
//				ret -= (_day - tmp._day);
//			}
//			else
//			{
//				ret += (tmp._day - _day);
//			}
//		}
//
//		//�ڶ������ d1����С��d
//		if ((*this) < d)
//		{
//			while (tmp._year != _year)
//			{
//				ret += 365;
//				tmp -= 365;
//			}
//
//			while (tmp._month != _month)
//			{
//				if (_month < tmp._month)
//				{
//					ret += GetMonthDay(tmp._year, tmp._month);
//					tmp -= GetMonthDay(tmp._year, tmp._month);
//				}
//				else
//				{
//					ret -= GetMonthDay(tmp._year, tmp._month);
//					tmp += GetMonthDay(tmp._year, tmp._month);
//				}
//			}
//
//			if (_day < tmp._day)
//			{
//				ret -= (_day-tmp._day);
//			}
//			else
//			{
//				ret += (tmp._day - _day);
//			}
//		}
//
//		//��������� d1���ڵ���d
//		if ((*this) == d)
//		{
//			return ret;
//		}
//		return ret;
//	}
//
//	//��ֵ���������
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//			return (*this);
//		}
//	}
//
//	//�����Ϣ����
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2024, 8, 10);
//	Date d2;
//	d2 = d1;
//	d2.Show();
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 0, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2024, 3, 12);
//	d1.Show();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
////��ʵ��ջ
//class Stack
//{
//public:
//	Stack(int n = 10)//ջ�Ĺ��캯��
//	{
//		int* tmp = (int*)malloc(sizeof(int) * n);
//		_a = tmp;
//		_size = 0;
//		_capacity = 0;
//	}
//	~Stack()//ջ����������
//	{
//		free(_a);
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//private:
//	int* _a;//ָ��ջ��ָ��
//	int _size;//ջ��Ԫ�ظ���
//	int _capacity;//ջ������
//};
//
//int main()
//{
//	Stack s1(4);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)//���캯��
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2024, 3, 12);
//	//��������д����ͬ Date d2(d1)�ȼ���Date d3=d1
//	Date d2(d1);
//	Date d3 = d1;
//
//	d1.Show();
//	d2.Show();
//	d3.Show();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Stack//ջ��
//{
//public:
//	Stack(int n = 10)//ջ�Ĺ��캯��
//	{
//		int* tmp = (int*)malloc(sizeof(int) * n);
//		_a = tmp;
//		_size = _capacity = 0;
//	}
//	~Stack()//ջ����������
//	{
//		free(_a);
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//private:
//	int* _a;//ָ��ջ��ָ��
//	int _size;//ջ��Ԫ�ظ���
//	int _capacity;//ջ������
//};
//
//int main()
//{
//	Stack s1;
//	Stack s2(s1);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date& operator=(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		return (*this);
//	}
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2024, 3, 13);
//	Date d2;
//	d2 = d1;
//
//	d1.Show();
//	d2.Show();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Time
//{
//public:
//	Time(int hour, int min, int second)
//	{
//		cout << "Time()" << endl;
//		_hour = hour;
//		_min = min;
//		_second = second;
//	}
//	void Show()
//	{
//		cout << _hour << "-" << _min << "-" << _second << endl;
//	}
//private:
//	int _hour;
//	int _min;
//	int _second;
//};
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1, int* tmp = nullptr)
//		:ret(*tmp)
//		, _t(1, 2, 3)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	int& ret;
//
//	Time _t;
//};
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	Date d1(2024, 3, 15, pa);
//	d1.Show();
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year)
//	{
//		_year;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(1);
//	Date d2 = 2;
//	Date d3 = d1;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		_n++;
//	}
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._year;
//		_n++;
//	}
//	int ret()
//	{
//		return _n;
//	}
//private:
//	static int _n;
//	int _year;
//	int _month;
//	int _day;
//};
//
//int Date::_n = 0;
//
//int main()
//{
//	Date d1(2024, 3, 15);
//	Date d2 = d1;
//
//	cout << d1.ret() << endl;
//	return 0;
//}

//#include <climits>
//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//    Date(int year, int month, int day)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    int GetMonthoDay(int year, int month)
//    {
//        int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//        {
//            arr[2]++;
//        }
//        return arr[month];
//    }
//
//    Date& dayadd(Date& d)
//    {
//        d._day++;
//        if (d._day > GetMonthoDay(d._year, d._month))
//        {
//            d._day -= GetMonthoDay(d._year, d._month);
//            d._month++;
//        }
//        if (d._month > 12)
//        {
//            d._year++;
//            d._month = 1;
//        }
//        return d;
//    }
//
//    int Judge(Date& d1, Date& d2)
//    {
//        if (d1._year == d2._year && d1._month == d2._month && d1._day == d2._day)
//        {
//            return 1;
//        }
//        else
//        {
//            return 0;
//        }
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//    int year;
//    int month;
//    int day;
//    cin >> year;
//    cin >> month;
//    cin >> day;
//
//    int ret = 1;
//
//    Date d(year, month, day);
//
//    Date tmp(year, 1, 1);
//
//    while (!d.Judge(d, tmp))
//    {
//        ret++;
//        tmp.dayadd(tmp);
//    }
//
//    cout << ret << endl;
//
//    return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	const Date* operator&() const
//	{
//		return this;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	cout << &d1 << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//
//    int GetMonthDay(int year, int month)
//    {
//        int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//        {
//            arr[2]++;
//        }
//        return arr[month];
//    }
//
//    Date(int year = 0, int month = 1, int day = 1)
//        :_year(year)
//        , _month(month)
//        , _day(day)
//    {}
//
//    Date operator+(int day)
//    {
//        Date d(*this);
//        d._day += day;
//        while (d._day > GetMonthDay(d._year, d._month))
//        {
//            d._day -= GetMonthDay(d._year, d._month);
//            d._month++;
//            if (d._month > 12)
//            {
//                d._year++;
//                d._month = 1;
//            }
//        }
//        return d;
//    }
//
//    void Show()
//    {
//        printf("%d-%02d-%02d\n", _year, _month, _day);
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//    int year;
//    int month;
//    int day;
//    int add;
//    cin >> year >> month >> day >> add;
//    Date d1(year, month, day);
//    Date ret = d1 + add;
//    ret.Show();
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//
//		_count++;
//	}
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//
//		_count++;
//	}
//
//	void Show()
//	{
//		int ret = GetCount();
//		cout << ret << endl;
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	static int GetCount()
//	{
//		return _count;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	static int _count;
//};
//
//int Date::_count = 0;
//
//int main()
//{
//	Date d1(2024, 3, 17);
//	Date d2 = d1;
//
//	d1.Show();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//	friend ostream& operator<<(ostream& out, Date& d);
//	friend istream& operator>>(istream& in, Date& d);
//
//public:
//	Date(int year=1, int month=0, int day=0)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void operator<<(ostream& out)
//	{
//		out << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year = 0;
//	int _month = 1;
//	int _day = 1;
//};
//
//ostream& operator<<(ostream& out, Date& d)
//{
//	out << d._year << "-" << d._month << "-" << d._day << endl;
//	return out;
//}
//
//istream& operator>>(istream& in, Date& d)
//{ 
//	in >> d._year >> d._month >> d._day;
//	return in;
//}
//
//int main()
//{
//	Date d1;
//	Date d2;
//
//	cin >> d1 >> d2;
//	cout << d1 << d2;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Time
//{
//	friend class Date;
//public:
//	Time(int hour = 24, int min = 0, int second = 0)
//		:_hour(hour)
//		,_min(min)
//		,_second(second)
//	{}
//	void Show()
//	{
//		cout << _hour << "-" << _min << "-" << _second << endl;
//	}
//private:
//	int _hour;
//	int _min;
//	int _second;
//};
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
//	void SetTime(int hour = 24, int min = 0, int second = 0)
//	{
//		_t._hour = hour;
//		_t._min = min;
//		_t._second = second;
//	}
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	Time _t;
//};
//
//int main()
//{
//	Date d1(2024, 3, 18);
//	d1.SetTime(20, 38, 26);
//	d1.Show();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//		class Time
//		{
//		public:
//			Time(int hour=24,int min=0,int second=0)
//				:_hour(hour)
//				,_min(min)
//				,_second(second)
//			{}
//		private:
//			int _hour;
//			int _min;
//			int _second;
//		};
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
//	void SetTime()
//	{
//
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num[10] = { 1,2,3 };
//	cout << sizeof(num) << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year=0,int month=1,int day=1)
//	{
//		cout << "Date()" << endl;
//	}
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	int* ptr1 = (int*)malloc(sizeof(int));
//	int* ptr2 = new int;
//
//	Date* ptr3 = new Date;
//	Date* ptr4 = new Date[3];
//
//	delete ptr3;
//	delete[] ptr4;
//
//	return 0;
//}
//s

//
//#include<iostream>
//using namespace std;
//
//class ListNode
//{
//public:
//	ListNode(int val = 0)
//		:_val(val)
//		,_prev(nullptr)
//		,_tail(nullptr)
//	{
//		cout << "ListNode()" << endl;
//	}
//	~ListNode()
//	{
//		cout << "~ListNode()" << endl;
//	}
//private:
//	int _val;
//	ListNode* _prev;
//	ListNode* _tail;
//};
//
//int main()
//{
//	//ListNode* ptr1 = new ListNode;
//	//delete ptr1;
//
//	//int n = 10;
//	//ListNode* ptr2 = new ListNode[n];
//	//cout << sizeof(ListNode) << endl;
//	//delete[] ptr2;
//
//	//long long size = 30;
//	//int* tmp = (int*)operator new(size * 1024 * 1024 * 1024);
//	//cout << tmp << endl;
//
//	//long long size = 10;
//	//int* ptr1 = new int[size * 1024 * 1024 * 1024];
//	//cout << ptr1 << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	size_t n = 2;
//	char* ptr = new char[n * 1024 * 1024 * 1024];
//	cout << &ptr << endl;
//	const char* p = "abcd";
//	cout << &p << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//template<class T>
//
//void Swap(T& x, T& y)
//{
//	T tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a, b);
//
//	double c = 1.1;
//	double d = 2.22;
//	cout << a << b << endl;
//
//	Swap(c, d);
//
//	cout << c << d << endl;
//
//	return 0;
//}
//
//#include"test.h"
//
//int Add(int a=0, int b=0)
//{
//	return a + b;
//}
//
//int main()
//{
//	int ret = Add();
//	cout << ret << endl;
//
//	return 0;
//}

//#include"test.h"
//
//typedef char* ptr;
//
//int main()
//{
//	ptr p1;
//	ptr* p2;
//	return 0;
//}

//#include"test.h"
//
//int main()
//{
//	auto a = 1;
//	auto b = 1.2;
//	auto c = 'c';
//
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	return 0;
//}

//#include"test.h"
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	for (auto& e : arr)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//��ʼ���б��÷�
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Show();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//��Ĭ�Ϲ��캯����Ĭ�Ϲ��캯����ָ������Ҫ���εĵĹ��캯����
//	Date(int year,int month,int day)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//	void Show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//class Temp
//{
//public:
//	Temp(int& ptmp)
//		:_b(10)
//		,_a(ptmp)
//		,_d(0,0,0)
//	{}
//	void Show()
//	{
//		cout << _a << " " << _b << endl;
//	}
//private:
//	//����Ҫ�ó�ʼ���б��������Ա����
//	int& _a;
//	const int _b;
//	Date _d;//�Զ������ͣ�����Ĭ�Ϲ��캯��
//};
//
//int main()
//{
//	int tmp = 0;
//	Temp t1(tmp);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//private:
//	int _year;
//	static int count;
//};
//
//int Date::count = 0;
//
//int main()
//{
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//	friend ostream& operator<<(ostream& _out, const Date& d);
//public:
//	Date(int year=0,int month=1,int day=1)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//ostream& operator<<(ostream& _out, const Date& d)
//{
//	_out << d._year << "-" << d._month << "-" << d._day << endl;
//	return _out;
//}
//
//int main()
//{
//	Date d1(2024, 3, 24);
//	Date d2(2024, 3, 25);
//
//	cout << d1 << d2;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Time
//{
//	friend class Date;//����Date������������
//public:
//	Time(int hour=0,int min=0,int second=0)
//		:_hour(hour)
//		,_min(min)
//		,_second(second)
//	{}
//private:
//	int _hour;
//	int _min;
//	int _second;
//};
//
//class Date
//{
//public:
//	Date(int year,int month,int day)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//	void SetTime(int hour, int min, int second)//�����������ͻ�Ʒ���Ȩ��ȥ����Time�ĳ�Ա����
//	{
//		_t._hour = hour;
//		_t._min = min;
//		_t._second = second;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	Time _t;
//};
//
//int main()
//{
//	Date d1(2024, 3, 24);
//	d1.SetTime(0, 0, 0);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	class Time
//	{
//	public:
//		Time(int hour=0,int min=0,int second=0)
//			:_hour(hour)
//			,_min(min)
//			,_second(second)
//		{}
//		void SetDate(int year = 0, int month = 1, int day)
//		{
//			_year = year;
//		}
//	private:
//		int _hour;
//		int _min;
//		int _second;
//	};
//
//public:
//	Date(int year = 0, int month = 1, int day)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//
//	return 0;
//}

#include<iostream>
using namespace std;

class Solution
{
public:
	int GetSum(int n)
	{
		return n;
	}
};

int main()
{
	Solution().GetSum(10);
	return 0;
}