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

//#include<iostream>
//using namespace std;
//
//class Solution
//{
//public:
//	int GetSum(int n)
//	{
//		return n;
//	}
//};
//
//int main()
//{
//	Solution().GetSum(10);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//template<class T>
//class Vetor
//{
//public:
//	Vetor(int size=0,int capacity=0)
//		:_a(nullptr)
//		,_size(size)
//		,_capacity(capacity)
//	{}
//	~Vetor()
//	{
//		delete[] _a;
//		_size = 0;
//		_capacity = 0;
//	}
//	void Push(const T& x)
//	{
//		if (_size == _capacity)
//		{
//			int newcapacity = _capacity == 0 ? 2 : _capacity * 2;
//			T* tmp = new T[newcapacity];
//			memcpy(tmp, _a, sizeof(T) * _capacity);
//			_capacity = newcapacity;
//			delete[] _a;
//			_a = tmp;
//		}
//
//		_a[_size] = x;
//		_size++;
//	}
//	T& operator[](const int& i)
//	{
//		return _a[i];
//	}
//	int Getsize()
//	{
//		return _size;
//	}
//private:
//	T* _a;
//	int _size;
//	int _capacity;
//};
//
//int main()
//{
//	Vetor<int> v;
//	v.Push(1);
//	v.Push(2);
//	v.Push(3);
//	v.Push(4);
//
//	for (int i = 0; i < v.Getsize(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	string s1("hello");
//	s1.push_back('a');
//	s1.append("world");
//	s1 += 'b';
//	s1 += "ccc";
//
//	cout << s1 << " " << s1.size() << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	string s1("12345");
//
//	int num = 0;
//
//	for (int i = 0; i < s1.size(); i++)
//	{
//		num *= 10;
//		num += s1[i] - '0';
//	}
//	cout << num << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char c1 = '1';
//	for (int i = 0; i < 10; i++)
//	{
//		c1++;
//	}
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    string addStrings(string num1, string num2)
//    {
//        int size1 = num1.size();
//        int size2 = num2.size();
//        string ret("");
//        int i = size1 - 1;
//        int j = size2 - 1;
//
//        int flag = 0;
//
//        while (i >= 0 && j >= 0)
//        {
//            int tmp = num1[i] + num2[j] + flag - '0' - '0';
//            if (tmp >= 10)
//            {
//                flag = 1;
//            }
//            else
//            {
//                flag = 0;
//            }
//            tmp %= 10;
//            ret += tmp + '0';
//            i--;
//            j--;
//        }
//        while (i >= 0)
//        {
//            int tmp = num1[i] + flag - '0';
//            if (tmp >= 10)
//            {
//                flag = 1;
//            }
//            else
//            {
//                flag = 0;
//            }
//            tmp %= 10;
//            ret += tmp + '0';
//            i--;
//        }
//        while (j >= 0)
//        {
//            int tmp = num2[j] + flag - '0';
//            if (tmp >= 10)
//            {
//                flag = 1;
//            }
//            else
//            {
//                flag = 0;
//            }
//            tmp %= 10;
//            ret += tmp + '0';
//            j--;
//        }
//        if (flag == 1)
//        {
//            ret += 1 + '0';
//        }
//        int size = ret.size();
//        for (int i = 0; i < size / 2; i++)
//        {
//            char ch = ret[i];
//            ret[i] = ret[size - i - 1];
//            ret[size -i- 1] = ch;
//        }
//        return ret;
//    }
//};
//
//int main()
//{
//    string num1("999");
//    string num2("999");
//
//    string ret = Solution().addStrings(num1, num2);
//
//
//    return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num = INT_MAX;
//	//cout << (num ^ 4) << endl;
//	//cout << (num ^ 78) << endl;
//	//cout << (num ^ 12) << endl;
//	//cout << (num ^ 1) << endl;
//	//cout << (num ^ 3) << endl;
//
//	//cout << (2147483635 ^ 12) << endl;
//	//cout << (2147483632 ^ 12) << endl;
//	//cout << (2147483632 ^ 1) << endl;
//	//cout << (2147483632 ^ 3) << endl;
//
//	//cout << (78 ^ 12 ^ 1 ^ 3) << endl;
//	//cout << (1 ^ 12 ^ 78 ^ 3) << endl;
//	//cout << (1 ^ 78 ^ 3 ^ 12) << endl;
//	//cout << (78 ^ 1 ^ 12 ^ 3) << endl;
//
//	//cout << (64 ^ 2147483632) << endl;
//	//cout << (78 ^ 12 ^ 1 ^ 3^2147483632) << endl;
//
//	cout << (64 ^ 2147483583) << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[100] = {
//        5, 6, 8, 6, 9, 1, 6, 1, 2, 4, 9, 1, 9, 8, 2, 3, 6, 4, 7, 7,
//        5, 9, 5, 0, 3, 8, 7, 5, 8, 1, 5, 8, 6, 1, 8, 3, 0, 3, 7, 9,
//        2, 7, 0, 5, 8, 8, 5, 7, 0, 9, 9, 1, 9, 4, 4, 6, 8, 6, 3, 3,
//        8, 5, 1, 6, 3, 4, 6, 7, 0, 7, 8, 2, 7, 6, 8, 9, 5, 6, 5, 6,
//        1, 4, 0, 1, 0, 0, 9, 4, 8, 0, 9, 1, 2, 8, 5, 0, 2, 5, 3, 3
//    };
//
//    int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int month[13] = { 0,1,2,3,4,5,6,7,8,9,10,11,12 };
//    int count = 0;
//
//    for (int i = 1; i <= 12; i++)
//    {
//        for (int j = 1; j <= day[i]; j++)
//        {
//            int data[8] = { 2,0,2,3,month[i] / 10,month[i] % 10,j / 10,j % 10 };
//            int l = 0;
//
//            for (int k = 0; k < 100; k++)
//            {
//                if (data[l] == arr[k])
//                {
//                    l++;
//                }
//                if (l == 8)
//                {
//                    count++;
//                    break;
//                }
//            }
//
//        }
//    }
//    cout << count << endl;
//    return 0;
//}
////
//#include<iostream>
//using namespace std;
//
//extern class AAA;
//
//class BBB
//{
//public:
//	void GetA()
//	{
//		cout << _A._a << endl;
//	}
//private:
//	int _size;
//	AAA _A;
//};
//
//class AAA
//{
//	/*friend void BBB::GetA();*/
//	friend class BBB;
//private:
//	int _a;
//};
//
//int main()
//{
//	BBB b1;
//	b1.GetA();
//	return 0;
//}

// ǰ������

//#include<iostream>
//
//class A; // ǰ������
//
//class B {
//public:
//    // ����B�����д������display������������ΪA�����Ԫ����
//    friend void display(A& aRef);
//};
//
//class A {
//private:
//    int mimi = 42; // ��ʼ��˽�г�Ա
//public:
//    // ����B���Ѿ���ɶ��壬�������ֱ��ʹ��B::display��Ϊ��Ԫ
//};
//
//// �����ﶨ��B���display����
//void B::display(A& aRef) {
//    std::cout << "A��������: " << aRef.mimi << std::endl;
//}
//
//int main() {
//    A a;
//    B b;
//    b.display(a); // ��ʱ���õ�display�����ܹ�����A���˽�г�Ա
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
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
//class Time
//{
//public:
//	Time(int hour = 24, int min = 0, int second = 0)
//		:_hour(hour)
//		, _min(min)
//		, _second(second)
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
//int main()
//{
//	Date d1;
//	d1.Show();
//
//	return 0;
//}


//#include"Date.h"
//#include"Time.h"
//
//Date::Date(int year,int month,int day)
//	:_year(year)
//	,_month(month)
//	,_day(day)
//{}
//
//void Date::Show()
//{
//	cout << _year << "-" << _month << "-" << _day << endl;
//}
//
//
//
//Time::Time(int hour , int min , int second )
//	:_hour(hour)
//	,_min(min)
//	,_second(second)
//{}
//
//void Time::Show()
//{
//	cout << _hour << "-" << _min << "-" << _second << endl;
//}

//#include<iostream>
//using namespace std;
//
//int global = 0;
//static int i = 0;
//
//
//int main()
//{
//	int a = 1;
//	int b = 20;
//
//	int* tmp = (int*)malloc(sizeof(int));
//	int* tp = new int;
//
//	static int j = 0;
//
//	const char* s = "abcd";
//	char s2[10] = "abcd";
//
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int* tmp1 = new int;//����һ��int���͵Ŀռ�
//	int* tmp2 = new int[10];//����һ��int���͵�����
//	int* tmp3 = new int(10);//����һ��int���͵Ŀռ䣬����ʼ��Ϊ10
//
//	delete tmp1;//�ͷ�tmp1ָ��Ŀռ�
//	delete[] tmp2;//�ͷ�tmp2ָ�������ռ�
//	delete tmp3;//�ͷ�tmp3ָ��Ŀռ�
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 0, int day = 0)
//	{
//		cout << "Date()" << endl;
//	}
//	
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
//	cout << "malloc�ķ�ʽ" << endl;
//	Date* d1 = (Date*)malloc(sizeof(Date));
//	free(d1);
//
//	cout << "�м�������ڹ۲�" << endl;
//
//	cout << "new�ķ�ʽ" << endl;
//	Date* d2 = new Date;
//	delete d2;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//
//	for (auto& e : arr)
//	{
//		cout << e << endl; 
//	}
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//string addStrings(string num1, string num2)
//{
//    int end1 = num1.size() - 1;
//    int end2 = num2.size() - 1;
//
//    string str;
//    int flag = 0;
//    while (end1 >= 0 || end2 >= 0)
//    {
//        int val1 = 0;
//        int val2 = 0;
//        if (end1 < 0)
//            val1 = 0;
//        else
//            val1 = num1[end1] - '0';
//        if (end2 < 0)
//            val2 = 0;
//        else
//            val2 = num2[end2] - '0';
//        int tmp = val1 + val2 + flag;
//        if (tmp > 9)
//        {
//            tmp %= 10;
//            flag = 1;
//        }
//        else
//        {
//            flag = 0;
//        }
//        str += tmp + '0';
//        end1--;
//        end2--;
//    }
//    if (flag == 1)
//        str += '1';
//    reverse(str.begin(), str.end());
//    return str;
//}
//
//class Solution {
//public:
//    string multiply(string num1, string num2)
//    {
//        string ret;
//        string str("0");
//
//        int end1 = num1.size() - 1;
//        int end2 = num2.size() - 1;
//        int flag = 0;
//        while (end2 >= 0)
//        {
//            int i = end1;
//            while (i >= 0)
//            {
//                int tmp = (num1[i] - '0') * (num2[end2] - '0') + flag;
//                flag = tmp / 10;
//                tmp %= 10;
//                ret += tmp + '0';
//                i--;
//            }
//            if (flag > 0)
//            {
//                ret += flag + '0';
//                flag = 0;
//            }
//            reverse(ret.begin(), ret.end());
//            str = addStrings(ret, str);
//            ret.resize(0);
//            end2--;
//        }
//        return str;
//    }
//};
//
//int main()
//{
//    string str1("123");
//    string str2("456");
//    string ret = Solution().multiply(str1, str2);
//    cout << ret << endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
////�ַ���ת����
//int ConvertNum(string& str)
//{
//	int count = 0;
//	for (int i = 0; i < str.size(); i++)
//	{
//		count *= 10;
//		count += str[i] - '0';
//	}
//	return count;
//}
//
////����ת�ַ���
//string ConvertStr(int num)
//{
//	string s;
//	while (num > 0)
//	{
//		int tmp = num % 10;
//		s += tmp + '0';
//		num /= 10;
//	}
//	reverse(s.begin(), s.end());
//	return s;
//}
//
//int main()
//{
//	string str("12345");
//	int ret = ConvertNum(str);
//	cout << ret << endl;
//
//	int num = 456;
//	string s = ConvertStr(num);
//	cout << s << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void Swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(double& x, double& y)
//{
//	double tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(char& x, char& y)
//{
//	char tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//template<class T>
//void Swap(T& x, T& y)
//{
//	T tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int x1 = 10;
//	int y1 = 20;
//
//	Swap(x1, y1);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
////����һ���Լ���ջ
//template<class T>
//class Stack
//{
//public:
//	//ջ��һϵ�в���
//	//��������
//private:
//	T* _arr;//һ��ָ��ջ��ָ��
//};
//
//class Stack
//{
//public:
//	//ջ��һϵ�в���
//	//��������
//private:
//	int* _arr;//һ��ָ��ջ��ָ��
//};
//
//class Stack
//{
//public:
//	//ջ��һϵ�в���
//	//��������
//private:
//	double* _arr;//һ��ָ��ջ��ָ��
//};
//
//class Stack
//{
//public:
//	//ջ��һϵ�в���
//	//��������
//private:
//	char* _arr;//һ��ָ��ջ��ָ��
//};
//
//int main()
//{
//	Stack<int> s1;//���int���͵�ջ
//	Stack<double> s2;//���double���͵�ջ
//	Stack<char> s3;//���char���͵�ջ
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int singleNumber(vector<int>& nums)
//    {
//        vector<int> v;
//        v.resize(32);
//        for (int i = 0; i < nums.size(); i++)//��ȡÿ��nums��ֵ��
//        {
//            for (int j = 0; j < 32; j++)
//            {
//                int tmp = nums[i];
//                tmp = tmp >> j;//��nums[i]�������Ʋ���
//                if ((tmp & 1) == 1)//�������֮���nums[i]��1��λ�����1������nums[i]�ĵ�һλ��1����¼����++
//                {
//                    v[31 - j]++;
//                }
//            }
//        }
//
//        int ret = 0;
//        for (int i = v.size() - 1; i >= 0; i--)//��������v
//        {
//            v[i] %= 3;//��ÿ��v[i]����ȡģ3����󼴿ɱ���Ψһ����һ�����ֵĶ�������
//            if (v[i] == 1)
//            {
//                ret += pow(2, 31 - i);//ͨ��������������������ֵ
//            }
//        }
//        return ret;
//    }
//};
//
//int main()
//{
//    vector<int> nums;
//    nums.push_back(0);
//    nums.push_back(1);
//    nums.push_back(0);
//    nums.push_back(1);
//    nums.push_back(0);
//    nums.push_back(1);
//    nums.push_back(99);
//
//    int ret = Solution().singleNumber(nums);
//    cout << ret << endl;
//    return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> singleNumber(vector<int>& nums)
//    {
//        //�������з��飬�ŵ�����vector��
//        vector<int> v1;
//        vector<int> v2;
//        //��nums�е���ȫ�������һ���ҵ�Ψһ���������������
//        int result = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            result ^= nums[i];
//        }
//
//        //cout<<result<<endl;
//
//        //��������Ķ�����λ���б������ҵ���һ�γ��ֶ�����1��λ�ã�����ͨ�����1��λ�������з���
//        int flag = 0;
//        for (int i = 0; i < 32; i++)
//        {
//            if (result & 1 == 1)
//            {
//                flag = i;
//                break;
//            }
//            result >>= 1;
//        }
//
//        //cout<<flag<<endl;
//
//        //����nums���з���
//        for (int i = 0; i < nums.size(); i++)
//        {
//            int tmp = 1;
//            tmp <<= flag;
//            //cout<<tmp<<endl;
//            if (nums[i] & tmp == 1)
//            {
//                v1.push_back(nums[i]);
//            }
//            else
//            {
//                v2.push_back(nums[i]);
//            }
//        }
//
//        vector<int> ret;
//        int count = 0;
//        for (int i = 0; i < v1.size(); i++)
//        {
//            count ^= v1[i];
//        }
//        ret.push_back(count);
//
//        count = 0;
//        for (int i = 0; i < v2.size(); i++)
//        {
//            count ^= v2[i];
//        }
//        ret.push_back(count);
//        return ret;
//    }
//};
//
//int main()
//{
//    vector<int> nums;
//    nums.push_back(1);
//    nums.push_back(2);
//    nums.push_back(1);
//    nums.push_back(3);
//    nums.push_back(2);
//    nums.push_back(5);
//
//    Solution().singleNumber(nums);
//    return 0;
//}

//#include<iostream>
//#include<stdbool.h>
//using namespace std;
//
//bool Solution(int (*arr)[4], int row, int col, int num)
//{
//	if (arr == nullptr)
//	{
//		return false;
//	}
//
//	int brow = 0;//��
//	int bcol = col - 1;//��
//
//	while (brow < row && bcol >= 0)
//	{
//		if (arr[brow][bcol] == num)
//		{
//			return true;
//		}
//		else if (arr[brow][bcol] > num)
//		{
//			bcol--;
//		}
//		else
//		{
//			brow++;
//		}
//	}
//	return false;
//}
//
//void Test(arr)
//
//int main()
//{
//	int arr[4][4] = { {1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15} };
//	//cout << arr << endl;
//	//cout << arr + 1 << endl;
//
//	//cout << (*arr)[3] << endl;
//	//cout << (*(arr + 1))[3] << endl;
//	cout << Solution(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]) / sizeof(arr[0][0]), 7) << endl;
//	//cout << Solution(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), 7) << endl;
//	return 0;
//}

//#include <iostream>
//
//template <size_t rows, size_t cols>
//void printArray1(int (&arr)[rows][cols]) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            arr[i][j]++;
//        }
//    }
//}
//
//template <size_t rows, size_t cols>
//void printArray2(int(&arr)[rows][cols]) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            std::cout << arr[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//}
//
//int main() {
//    int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
//    printArray1(arr); // �����1 2 3 4  5 6 7 8  9 10 11 12
//    printArray2(arr); // �����1 2 3 4  5 6 7 8  9 10 11 12
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//void fun2(int& pa)
//{
//	pa++;
//}
//
//void fun1()
//{
//	int a = 10;
//	fun2(a);	
//}
//
//int main()
//{
//	fun1();
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<stdbool.h>
//using namespace std;
//
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param pushV int����vector
//     * @param popV int����vector
//     * @return bool������
//     */
//    bool IsPopOrder(vector<int>& pushV, vector<int>& popV)
//    {
//        //��һ��popVֵ���������������
//        int begin = 0;
//        int end = pushV.size() - 1;
//        while (!pushV.empty())
//        {
//            for (int i = 0; i < popV.size(); i++)
//            {
//                int tmp = popV[i];
//                //�������䣬���治����
//                int j = 0;
//                for (j = begin; j <= end; j++)
//                {
//                    if (tmp == pushV[j])//�� ��ǰpopVֵ�ڸ�������ڣ���ɾ��pushV�е�popVֵ����ˢ������
//                    {
//                        pushV.erase(pushV.begin() + j);
//                        begin = j - 1;
//                        end = end - 1;
//                        break;
//                    }
//                }
//                if (j == pushV.size())//��������������䶼û���ҵ���Ҫ��popVֵ����˵�������ϣ�����false
//                {
//                    return false;;
//                }
//            }
//        }
//        return true;
//    }
//};
//
//int main()
//{
//    vector<int> pushV;
//    pushV.push_back(1);
//    pushV.push_back(2);
//    pushV.push_back(3);
//    pushV.push_back(4);
//    pushV.push_back(5);
//
//    vector<int> popV;
//    popV.push_back(4);
//    popV.push_back(5);
//    popV.push_back(3);
//    popV.push_back(2);
//    popV.push_back(1);
//
//    bool ret = Solution().IsPopOrder(pushV, popV);
//    cout << ret << endl;
//
//    return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(6);
//
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it += 10;
//	}
//	cout << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s1("hello world");
//
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << " ";
//		it += 2;
//	}
//	cout << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void Print1(int (*parr)[5], int rows, int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << (*(parr + i))[j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//void Print2(int* parr, int rows, int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << *(parr + i * cols + j) << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//void Print3(int(&parr)[4][5],int rows,int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << parr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//template<size_t row, size_t col>
//void Print4(int(&parr)[row][col])
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << parr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int arr[][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20} };
//	Print1(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]) / sizeof(arr[0][0]));
//	Print2(&arr[0][0], sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]) / sizeof(arr[0][0]));
//	Print3(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]) / sizeof(arr[0][0]));
//	Print4(arr);
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	vector<int>::iterator it1 = v.begin();
//	while (it1 != v.end())
//	{
//		cout << *it1 << " ";
//		it1 = it1 + 1;
//	}
//
//	list<int> l;
//	l.push_back(1);
//	l.push_back(2);
//	l.push_back(3);
//	l.push_back(4);
//
//	list<int>::iterator it2 = l.begin();
//	while (it2 != l.end())
//	{
//		cout << *it2 << " ";
//		it2 = it2 + 1;
//	}
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//typedef const int INT;
//
//INT add(int num1, int num2)
//{
//	return num1 + num2;
//}
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int ret = add(x, y);
//	ret++;
//	cout << ret << endl;
//	return 0;
//}
//��һ��ģ��ʵ��list
//namespace My_list
//{
//	//��װ��������	
//	template<class T>
//	struct __list_node
//	{
//		//��Ա����
//		T _data;
//		__list_node<T>* _prev;
//		__list_node<T>* _next;
//
//		//��Ա����
//		__list_node(const T& val = T())
//			:_data(val)
//			, _prev(nullptr)
//			, _next(nullptr)
//		{
//		}
//	};
//
//	//��װ��������
//	//__list_iterator<T,T&,T> -> iterator
//	//__list_iterator<T,const T&,const T*> -> const iterator
//	template<class T, class Ref, class Ptr>
//	struct __list_iterator
//	{
//		typedef __list_node<T> Node;
//		typedef __list_iterator<T, Ref, Ptr> iterator;
//
//		//���캯��	���������
//		__list_iterator(Node* node = nullptr)
//			:_node(node)
//		{
//		}
//
//		//���ص�����ָ�����ݵ�����
//		Ref operator*() const
//		{
//			return _node->_data;
//		}
//
//		//���ڲ���list�����Date��Ľ����ò���		���ص��ǵ�����ָ�����ݵ�ָ��
//		Ptr operator->() const
//		{
//			return &_node->_data;
//		}
//
//		//������ǰ��++����
//		iterator operator++()
//		{
//			_node = _node->_next;
//			return *this;
//		}
//
//		//������ǰ��--����
//		iterator operator--()
//		{
//			_node = _node->_prev;
//			return *this;
//		}
//
//		//����������++
//		iterator operator++(int)
//		{
//			iterator tmp(*this);
//			//_node = _node->_next;
//			++(*this);
//			return tmp;
//		}
//		//����������--
//		iterator operator--(int)
//		{
//			iterator tmp(*this);
//			//_node = _node->_prev;
//			--(*this);
//			return tmp;
//		}
//
//		//����operator!=
//		bool operator!=(const iterator it) const
//		{
//			if (_node != it._node)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//
//		//����operator==
//		bool operator==(const iterator it) const
//		{
//			return !(*this != it);
//		}
//
//		//��Ա����
//		Node* _node;
//	};
//
//	//list��
//	template<class T>
//	class list
//	{
//		//��������
//		typedef __list_node<T> Node;
//	public:
//		//��������
//		typedef __list_iterator<T, T&, T*> iterator;
//		typedef __list_iterator<T, const T&, const T*> const_iterator;
//
//		//begin������
//		iterator begin()
//		{
//			iterator it(_head->_next);
//			return it;
//		}
//
//		//end������
//		iterator end()
//		{
//			iterator it(_head);
//			return it;
//		}
//
//		//const_begin������
//		const_iterator begin() const
//		{
//			const_iterator cit(_head->_next);
//			return cit;
//		}
//
//		//const_end������
//		const_iterator end() const
//		{
//			const_iterator cit(_head);
//			return cit;
//		}
//
//		//���캯��
//		list()
//			:_head(new Node)
//		{
//			//_head = new Node;	
//			_head->_prev = _head;
//			_head->_next = _head;
//		}
//
//		//��������
//		~list()
//		{
//			clear();
//			delete _head;
//			_head = nullptr;
//		}
//
//		//��������
//		//list<int> l2(l1)
//		list(const list<T>& tmp)
//			:_head(new Node)
//		{
//			_head->_next = _head;
//			_head->_prev = _head;
//
//			const_iterator it = tmp.begin();
//			while (it != tmp.end())
//			{
//				push_back(*it);
//				it++;
//			}
//		}
//
//		//��ֵ=����
//		//list<int> l3;
//		//l3=l2;
//		list<T>& operator=(const list<T>& tmp)
//		{
//			if (this != &tmp)
//			{
//				list<T> l(tmp);
//				Swap(l);
//			}
//			return *this;
//		}
//
//		//������������
//		//l1.Swap(l2);
//		void Swap(list<T>& tmp)
//		{
//			swap(_head, tmp._head);
//		}
//
//		//clear������	�����Ľ�Ϊ����erase����
//		void clear()
//		{
//			Node* headnext = _head->_next;//�ҵ�ͷ������һ�����
//			//�ͷų�ͷ���������н��
//			while (headnext != _head)
//			{
//				Node* tmp = headnext->_next;
//				delete headnext;
//				headnext = tmp;
//			}
//
//			_head->_next = _head;
//			_head->_prev = _head;
//		}
//
//		//β��
//		void push_back(const T& val)
//		{
//			////����һ���½�㣬���½�㸳ֵ
//			//Node* newnode = new Node(val);
//			//Node* tail = _head->_prev;//���ҵ�β���
//
//			//tail->_next = newnode;
//			//newnode->_prev = tail;
//			//newnode->_next = _head;
//			//_head->_prev = newnode;
//
//			insert(end(), val);
//		}
//
//		//βɾ
//		void pop_back()
//		{
//			iterator it = end();
//			erase(--it);
//		}
//
//		//ͷ��
//		void push_front(const T& val)
//		{
//			insert(begin(), val);
//		}
//
//		//ͷɾ
//		void pop_front()
//		{
//			iterator it(begin());
//			erase(it);
//		}
//
//		//�м����
//		iterator insert(iterator pos, const T& val)
//		{
//			Node* newnode = new Node(val);
//			Node* posprev = pos._node->_prev;
//
//			posprev->_next = newnode;
//			newnode->_prev = posprev;
//			newnode->_next = pos._node;
//			pos._node->_prev = newnode;
//
//			iterator it(newnode);
//			return it;
//		}
//
//		//�м�ɾ��
//		iterator erase(iterator pos)
//		{
//			assert(pos != end());
//
//			Node* posprev = pos._node->_prev;
//			Node* posnext = pos._node->_next;
//
//			posprev->_next = posnext;
//			posnext->_prev = posprev;
//
//			delete pos._node;
//
//			iterator it(posnext);
//			return it;
//		}
//
//	private:
//		Node* _head;
//	};
//
//	//����list�����Date����
//	class Date
//	{
//	public:
//		Date(int year = 0, int month = 0, int day = 0)
//			:_year(year)
//			, _month(month)
//			, _day(day)
//		{
//
//		}
//		//private:
//		int _year;
//		int _month;
//		int _day;
//	};
//
//	void Test1()
//	{
//		list<int> l1;
//		l1.push_back(1);
//		l1.push_back(2);
//		l1.push_back(3);
//		l1.push_back(4);
//		l1.push_front(0);
//		l1.push_front(-1);
//		l1.push_front(-2);
//		l1.push_front(-3);
//
//		l1.pop_back();
//		l1.pop_back();
//
//		l1.pop_front();
//		l1.pop_front();
//
//		list<int>::iterator it = l1.begin();
//		while (it != l1.end())
//		{
//			cout << *it << " ";
//			++it;
//		}
//		cout << endl;
//	}
//
//	void Test2()
//	{
//		list<Date> l1;
//		l1.push_back(Date());
//		l1.push_back(Date());
//		l1.push_back(Date());
//		l1.push_back(Date());
//
//		list<Date>::iterator it = l1.begin();
//		while (it != l1.end())
//		{
//			cout << it->_year << "-" << it->_month << "-" << it->_day << endl;
//			it++;
//		}
//
//	}
//
//	//���Ե������ķ�const��const
//	void Test3()
//	{
//		list<int> l1;
//		l1.push_back(1);
//		l1.push_back(2);
//		l1.push_back(3);
//		l1.push_back(4);
//
//		list<int>::iterator it = l1.begin();
//		while (it != l1.end())
//		{
//			(*it)++;
//			cout << *it << " ";
//			it++;
//		}
//		cout << endl;
//
//	}
//
//	//���Կ������� �� ��ֵ=����
//	void Test4()
//	{
//		list<int> l1;
//		l1.push_back(1);
//		l1.push_back(2);
//		l1.push_back(3);
//		l1.push_back(4);
//
//		list<int> l2(l1);
//
//		list<int> l3;
//		l3 = l2;
//
//		list<int>::iterator it1 = l1.begin();
//		while (it1 != l1.end())
//		{
//			(*it1)++;
//			cout << *it1 << " ";
//			it1++;
//		}
//		cout << endl;
//
//		list<int>::iterator it2 = l2.begin();
//		while (it2 != l2.end())
//		{
//			(*it2)++;
//			cout << *it2 << " ";
//			it2++;
//		}
//		cout << endl;
//
//		list<int>::iterator it3 = l3.begin();
//		while (it3 != l3.end())
//		{
//			(*it3)++;
//			cout << *it3 << " ";
//			it3++;
//		}
//
//		cout << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//
//template<class T,size_t N>
//class arr
//{
//public:
//
//private:
//	T _arr[N];
//};
//
//int main()
//{
//	arr<int,100> a1;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//
//template<class T>
//bool Compare(T& left, T& right)
//{
//	if (left == right)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//template<>
//bool Compare<char*>(char*& left, char*& right)
//{
//	if (strcmp(left, right) == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	char p1[] = "hello";
//	char p2[] = "hello";
//	
//	cout << Compare(p1, p2) << endl;
//
//	char* p3 = p1;
//	char* p4 = p2;
//
//	cout << Compare(p3, p4) << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//template<class T1,class T2>
//class Date
//{
//public:
//	Date()
//	{
//		cout << "Date<T1,T2>" << endl;
//	}
//private:
//	T1 _data1;
//	T2 _data2;
//};
//
//template<>
//class Date<int,char>
//{
//public:
//	Date()
//	{
//		cout << "Date<int,char>" << endl;
//	}
//private:
//	int _data1;
//	char _data2;
//};
//
//int main()
//{
//	Date<int, int> d1;
//	Date<int, double> d2;
//
//	Date<int, char> d3;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//template<class T,size_t N>
//class Arr
//{
//public:
//
//private:
//	T _arr[N];
//};
//
//int main()
//{
//	Arr<int, 10> a1;;
//	Arr<int, 100> a2;;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//template<class T>
//bool Compare(T& left, T& right)//�ȽϺ������Ƚ�����ֵ�Ƿ����
//{
//	if (left == right)
//		return true;
//	else
//		return false;
//}
//
//template<>
//bool Compare<char*>(char*& left, char*& right)
//{
//	if (strcmp(left, right) == 0)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	cout << Compare(a, b) << endl;
//
//	char arr1[] = "hello";
//	char arr2[] = "hello";
//
//	char* p1 = arr1;
//	char* p2 = arr2;
//
//	cout << Compare(p1, p2) << endl;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//template<class T1,class T2>
//class Date
//{
//public:
//	Date()
//	{
//		cout << "Date<T1,T2>" << endl;
//	}
//private:
//	T1 _data1;
//	T2 _data2;
//};
//
//template<class T1,class T2>
//class Date<T1*,T2*>
//{
//public:
//	Date()
//	{
//		cout << "Date<T1*,T2*>" << endl;
//	}
//private:
//	T1* _data1;
//	T2* _data2;
//};
//
//template<class T1, class T2>
//class Date<T1&, T2&>
//{
//public:
//	Date()
//	{
//		cout << "Date<T1&,T2&>" << endl;
//	}
//private:
//	const T1& _data1 = 10;
//	const T2& _data2 = 20;
//};
//
//int main()
//{
//	Date<int, int> d1;
//	Date<int*, int*> d2;
//	Date<int&, int&> d3;
//	return 0;
//}



//#include"Add.h"
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int ret = Add(a, b);
//	cout << ret << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "age:" << _age << endl;
//	}
//protected:
//	char _name[20] = "aaaaa";
//private:
//	int _age = 20;
//};
//
//class Student :public Person
//{
//public:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "stdid:" << _stdid << endl;
//	}
//protected:
//	int _stdid = 12345678;//ѧ��
//};
//
//int main()
//{
//	Person p1;
//	Student s1;
//
//	p1.Print();
//	s1.Print();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//protected:
//	char _name[20] = "aaaaa";
//	int age = 20;
//};
//
//class Student :public Person
//{
//protected:
//	int _stdid = 12345678;
//};
//
//int main()
//{
//	Student s1;
//
//	//���������Ը�ֵ���������ָ�롢����
//	Person p1 = s1;
//	Person* p2 = &s1;
//	Person& p3 = s1;
//
//	Student* s2 = (Student*)p2;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//namespace My_less_greater
//{
//	template<class T>
//	struct less
//	{
//		bool operator()(const T& x1, const T& x2)//����һ��operator()
//		{
//			return x1 < x2;
//		}
//	};
//
//	template<class T>
//	struct greater
//	{
//		bool operator()(const T& x1, const T& x2)
//		{
//			return x1 > x2;
//		}
//	};
//}
//
//int main()
//{
//	My_less_greater::less<int> lessFunc;//����һ��less�Ķ���
//	int a = 10;
//	int b = 20;
//	bool ret = lessFunc(a, b);//�ȼ��� lessFunc.operator()(a,b)
//	cout << ret << endl;
//	return 0;
//}




//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	void Print()
//	{
//		cout << _name << ":" << _age << endl;
//	}
//protected:
//	string _name = "hello";
//	int _age = 18;
//};
//
//class Student :public Person
//{
//public:
//	void Print()
//	{
//		cout << _name << ":" << _age << ":" << _sno << endl;
//	}
//protected:
//	int _sno = 12345678;
//};
//
//int main()
//{
//	//Person p1;
//	//p1.Print();
//
//	//Student s1;
//	//s1.Print();
//
//	Student s1;
//	Person p1 = s1;
//	Person* p2 = &s1;
//	Person& p3 = s1;
//
//
//
//	return 0;
//}



//
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "Person()" << endl;
//	}
//
//	//��������
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//
//	//��������
//	Person(const Person& tmp)
//	{
//		cout << "Person(const Person& tmp)" << endl;
//	}
//
//	//��ֵ=����
//	Person& operator=(const Person& tmp)
//	{
//		cout << "Person:operator=()" << endl;
//		return *this;
//	}
//protected:
//	string _name;
//	int _age;
//};
//
//class Student :public Person
//{
//public:
//	//���캯��
//	Student()
//	{
//		cout << "Student()" << endl;
//	}
//
//	//��������
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//
//	//��������
//	Student(const Student& tmp)
//		:Person(tmp)
//	{
//		cout << "Student(const Student& tmp)" << endl;
//	}
//
//	//��ֵ=����
//	Student& operator=(const Student& tmp)
//	{
//		Person::operator=(tmp);
//		cout << "Student:operator=()" << endl;
//		return *this;
//	}
//protected:
//	int _sno;
//};
//
//int main()
//{
//	//Person p1;
//	Student s1;
//	//cout << endl;
//	//Student s2(s1);
//
//	Student s2;
//	s2 = s1;
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(const char* name = "name", const int& age = -1)
//		:_name(name)
//		,_age(age)
//	{
//		cout << "Person()" << endl;
//	}
//protected:
//	string _name;
//	int _age;
//};
//
//class Student :public Person
//{
//public:
//	Student(const char* name = "name", const int& age = -1, const int& sno = 11111111)
//		:Person(name, age)
//		,_sno(sno)
//	{
//		cout << "Student()" << endl;
//	}
//protected:
//	int _sno;
//};
//
//int main()
//{
//	Person p1("hello", 18);
//	Student s1;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int _age;
//};
//
//class Student :virtual public Person
//{
//public:
//	int _sno;
//};
//
//int main()
//{
//	Person p1;
//	p1._age = 1;
//	Student s1;
//	s1._age = 2;
//	s1._sno = 3;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	int _age;
//};
//
//class Student :virtual public Person
//{
//public:
//
//	int _sno;
//};
//
//class Teacher :virtual public Person
//{
//public:
//
//	int _tno;
//};
//
//class Assistant :public Student, public Teacher
//{
//public:
//
//	int _aaa;
//};
//
//int main()
//{
//	Assistant a1;
//	cout << sizeof(a1) << endl;
//
//	a1.Student::_age = 1;
//	a1.Teacher::_age = 2;
//	a1._sno = 3;
//	a1._tno = 4;
//	a1._aaa = 5;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int _age = 1;//����
//};
//
////�̳��˸���Person�����г�Ա
//class Student :public Person
//{
//public:
//	int _sno = 2;//ѧ��
//};
//
//int main()
//{
//	Student s1;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��Ʊ-ȫ��" << endl;
//	}
//};
//
//class Student :public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��Ʊ-���" << endl;
//	}
//};
//
//void Func1(Person& tmp)
//{
//	tmp.BuyTicket();
//}
//
//void Func2(Student& tmp)
//{
//	tmp.BuyTicket();
//}
//
//int main()
//{
//	Person p1;
//
//	Student s1;
//
//	Func1(p1);
//
//	Func1(s1);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual ~A()
//	{
//		cout << "~A" << endl;
//	}
//};
//
//class B :public A
//{
//public:
//	 virtual~B()
//	{
//		cout << "~b" << endl;
//	}
//};
//
//int main()
//{
//	A* pa = new A;
//	delete pa;
//
//	A* pb = new B;
//	delete pb;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��Ʊ-ȫ��" << endl;
//	}
//
//	int _age;
//};
//
//class Student :public Person
//{
//public:
//	//virtual void BuyTichet()
//	//{
//	//	cout << "��Ʊ-���" << endl;
//	//}
//
//	int _sno;
//};
//
//int main()
//{
//	Person p1;
//
//	Student s1;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual void ButTicket() = 0;
//};
//
//class Student :public Person
//{
//public:
//	virtual void ButTicket()
//	{
//		cout << "��Ʊ-���" << endl;
//	}
//};
//
//int main()
//{
//	Person p1;
//	Student s1;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Base::Func1()" << endl;
//	}
//
//	virtual void Func2()
//	{
//		cout << "Base::Func2()" << endl;
//	}
//
//	void Func3()
//	{
//		cout << "Base::Func3()" << endl;
//	}
//protected:
//	int _b = 1;
//};
//
//class Derive :public Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Derive::Func1()" << endl;
//	}
//protected:
//	int _d = 2;
//};
//
//int main()
//{
//	Base b;
//	Derive d;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void BuyTicket()
//	{
//		cout << "��Ʊ-ȫ��" << endl;
//	}
//
//	int _age;
//};
//
//class Student :public Person
//{
//public:
//	void BuyTicket()
//	{
//		cout << "��Ʊ-���" << endl;
//	}
//
//	int _sno;
//};
//
//template<class T>
//void BuyTicket(T& tmp)
//{
//	tmp.BuyTicket();
//}
//
//
//int main()
//{
//	Person p1;
//
//	Student s1;
//
//	BuyTicket(p1);
//	BuyTicket(s1);
//
//	return 0;
//}

//#include<iostream> 
//using namespace std;
//
//class Person
//{
//public:
//	void Print()
//	{
//
//	}
//protected:
//	int _age;
//};
//
//class Student :public Person
//{
//public:
//	
//private:
//	int _sno;
//};
//
//int main()
//{
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//protected:
//	string _name;
//	int _age;
//};
//
//class Student :public Person
//{
//public:
//protected:
//	int _sno;
//};
//
//int main()
//{
//	Student s1;
//	//������Щ��Ϊ���������
//	Person p1 = s1;
//	Person* p2 = &s1;
//	Person& p3 = s1;
//
//	s1 = p1;//�������Ͳ�����
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	int _age = 1;
//	int _num = 2;
//};
//
//class Student :public Person
//{
//public:
//
//	int _num = 10;
//};
//
//int main()
//{
//	Person p1;
//	Student s1;
//
//	cout << s1._num << endl;//Ĭ�����ֱ�����_num�������_num
//	cout << s1.Person::_num << endl;//�����Ҫ��������_num����Ҫָ��Person��������
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void Print()
//	{
//		cout << "Person" << endl;
//	}
//protected:
//	int _age;
//};
//
//class Student :public Person
//{
//public:
//	void Print(int i)
//	{
//		cout << "Student" << endl;
//	}
//protected:
//	int _sno;
//};
//
//int main()
//{
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int i)
//	{
//		cout << "Person()" << endl;
//	}
//protected:
//	string _name;
//	int _age;
//};
//
//class Student :public Person
//{
//public:
//	Student()
//		:Person(1)
//	{
//		cout << "Student()" << endl;
//	}
//protected:
//	int _sno;
//};
//
//int main()
//{
//	Person p1(1);
//	cout << endl;
//	Student s1;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//};
//
//class Student :public Person
//{
//public:
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//};
//
//int main()
//{
//	Student s1;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(const char* name="name")
//		:_name(name)
//	{}
//
//	Person(const Person& tmp)
//	{
//		cout << "Person(const Person& tmp)" << endl;
//	}
//protected:
//	string _name;
//};
//
//class Student :public Person
//{
//public:
//	Student(const char* name = "name", int sno = 1)
//		:Person(name)
//		,_sno(sno)
//	{}
//
//	Student(const Student& tmp)
//		:Person(tmp)
//	{
//		cout << "Student(const Student& tmp)" << endl;
//	}
//protected:
//	int _sno;
//};
//
//int main()
//{
//	Student s1;
//	Student s2(s1);
//	return 0;
//}

//#include<iostream> 
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person& operator=(const Person& tmp)
//	{
//		cout << "operator=(const Person& tmp)" << endl;
//		return *this;
//	}
//protected:
//	string _name;
//};
//
//class Student :public Person
//{
//public:
//	Student& operator=(const Student& tmp)
//	{
//		Person::operator=(tmp);
//		cout << "operator=(const Student& tmp)" << endl;
//		return *this;
//	}
//protected:
//	int _sno;
//};
//
//int main()
//{
//	Student s1;
//	Student s2;
//	s2 = s1;
//	return 0;
//}

//class Person
//
//class Student :public Person
//
//class PostGraduate :public Student

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int _arr[10];
//};
//
//class Student :virtual public Person
//{
//public:
//	int _sno;//ѧ��ѧ��
//};
//
//class Teacher :virtual public Person
//{
//public:
//	int _tno;//��ʦ���
//};
//
//class Assiant :public Student, public Teacher
//{
//public:
//	int _aaa;
//};
//
//int main()
//{
//	cout << sizeof(Assiant);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int _age;
//};
//
//class Student
//{
//public:
//	Person p1;
//	int _sno;
//};
//
//int main()
//{
//
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��Ʊ-ȫ��" << endl;
//	}
//};
//
//class Student :public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��Ʊ-���" << endl;
//	}
//};
//
//void Func(Person& tmp)
//{
//	tmp.BuyTicket();
//}
//
//int main()
//{
//	Person p1;
//	Student s1;
//
//	Func(p1);
//	Func(s1);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A
//{};
//
//class B:public A
//{};
//
//class Person
//{
//public:
//	virtual A* BuyTicket()
//	{
//		cout << "��Ʊ-ȫ��" << endl;
//		return new A;
//	}
//};
//
//class Student :public Person
//{
//public:
//	virtual B* BuyTicket()
//	{
//		cout << "��Ʊ-���" << endl;
//		return new B;
//	}
//};
//
//void Func(Person& tmp)
//{
//	tmp.BuyTicket();
//}
//
//int main()
//{
//	Person p1;
//	Student s1;
//
//	Func(p1);
//	Func(s1);
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//struct TreeNode
//{
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//
//    TreeNode(const int& tmp)
//        :val(tmp)
//        , left(nullptr)
//        , right(nullptr)
//    {}
//};
//
//vector<vector<int>> levelOrder(TreeNode* root)
//{
//    vector<vector<int>> vv;
//    queue<TreeNode*> q;
//    if (root == nullptr)
//    {
//        return vv;
//    }
//
//    q.push(root);
//    while (!q.empty())
//    {
//        vector<int> v;
//        for (int i = 0; i < q.size(); i++)
//        {
//            TreeNode* node = q.front();
//            v.push_back(node->val);
//            q.pop();
//            if (node->left)
//                q.push(node->left);
//            if (node->right)
//                q.push(node->right);
//        }
//        vv.push_back(v);
//    }
//    return vv;
//}
//
//int main()
//{
//	TreeNode* A = new TreeNode(3);
//	TreeNode* B = new TreeNode(9);
//	TreeNode* C = new TreeNode(20);
//	TreeNode* D = new TreeNode(15);
//	TreeNode* E = new TreeNode(7);
//
//	A->left = B;
//	A->right = C;
//	C->left = D;
//	C->right = E;
//
//
//    vector<vector<int>> ret = levelOrder(A);
//
//    for (int i = 0; i < ret.size(); i++)
//    {
//        for (int j = 0; j < ret[i].size(); j++)
//        {
//            cout << ret[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//}

//#include<iostream>
//using namespace std;
//
//struct TreeNode
//{
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//
//    TreeNode(const int& tmp)
//        :val(tmp)
//        , left(nullptr)
//        , right(nullptr)
//    {}
//};
//
//bool Find(TreeNode* root, TreeNode* tmp)
//{
//    if (root->left == tmp)
//    {
//        return true;
//    }
//    else if (root->right == tmp)
//    {
//        return false;
//    }
//    else
//    {
//        if (root->left != nullptr)
//        {
//            Find(root->left, tmp);
//        }
//        if (root->right != nullptr)
//        {
//            Find(root->right, tmp);
//        }
//    }
//    return false;
//}
//
//TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
//{
//    if (root == p || root == q)
//    {
//        return root;
//    }
//
//    bool pInLeft, pInRight;
//    bool qInLeft, qInRight;
//
//    pInLeft = Find(root, p);
//    pInRight = !pInLeft;
//
//    qInLeft = Find(root, q);
//    qInRight = !qInLeft;
//
//    if ((pInLeft && qInRight) || (pInRight && qInLeft))
//    {
//        return root;
//    }
//    else if (pInLeft && qInLeft)
//    {
//        return lowestCommonAncestor(root->left, p, q);
//    }
//    else
//    {
//        return lowestCommonAncestor(root->right, p, q);
//    }
//}
//
//int main()
//{
//    TreeNode* A = new TreeNode(3);
//    TreeNode* B = new TreeNode(5);
//    TreeNode* C = new TreeNode(1);
//    TreeNode* D = new TreeNode(6);
//    TreeNode* E = new TreeNode(2);
//    TreeNode* F = new TreeNode(0);
//    TreeNode* G = new TreeNode(8);
//    TreeNode* H = new TreeNode(7);
//    TreeNode* I = new TreeNode(4);
//
//    A->left = B;
//    A->right = C;
//    B->left = D;
//    B->right = E;
//    C->left = F;
//    C->right = G;
//    E->left = H;
//    E->right = I;
//
//    TreeNode* ret = lowestCommonAncestor(A, B, I);
//    cout << ret->val << endl;
//
//    return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct TreeNode
//{
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//
//    TreeNode(const int& tmp)
//        :val(tmp)
//        , left(nullptr)
//        , right(nullptr)
//    {}
//};
//
////������������ҵ�tmp���±�
//int Find(vector<int>& inorder, int begin, int end, int tmp)
//{
//    int ret = begin;
//    for (int i = begin; i <= end; i++)
//    {
//        if (inorder[i] == tmp)
//        {
//            return ret;
//        }
//        else
//        {
//            ret++;
//        }
//    }
//    return 0;
//}
//
////�ȹ���������ȥ�ݹ鹹�������������������
//TreeNode* _buildTree(vector<int>& preorder, int begin1, int end1, vector<int>& inorder, int begin2, int end2)
//{
//    TreeNode* root = new TreeNode(preorder[begin1]);//�ȹ�����ڵ�
//
//    int mid = Find(inorder, begin2, end2, preorder[begin1]);//�ҵ����ڵ������������λ��
//    //����begin1,end1,begin2,end2
//    int left = mid - begin2;
//    int right = end2 - mid;
//
//    int fbegin = begin1;
//    begin1 = fbegin + 1;
//    end1 = fbegin + left;
//
//    begin2 = mid - left;
//    end2 = mid - 1;
//
//    if (begin1 <= end1 && begin2 <= end2)
//        root->left = _buildTree(preorder, begin1, end1, inorder, begin2, end2);
//    else
//        root->left = nullptr;
//
//    begin1 = fbegin + left + 1;
//    end1 = fbegin + left + right;
//
//    begin2 = mid + 1;
//    end2 = mid + right;
//
//    if (begin1 <= end1 && begin2 <= end2)
//        root->right = _buildTree(preorder, begin1, end1, inorder, begin2, end2);
//    else
//        root->right = nullptr;
//
//    return root;
//}
//
//TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
//{
//    return _buildTree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
//}
//
//void Print(TreeNode* root)
//{
//    if (root == nullptr)
//    {
//        return;
//    }
//
//    cout << root->val << " ";
//    Print(root->left);
//    Print(root->right);
//}
//
//int main()
//{
//    vector<int> preorder;
//    vector<int> inorder;
//    int arr1[] = { 3,9,20,15,7 };
//    int arr2[] = { 9,3,15,20,7 };
//
//    for (auto& e : arr1)
//    {
//        preorder.push_back(e);
//    }
//
//    for (auto& e : arr2)
//    {
//        inorder.push_back(e);
//    }
//
//    TreeNode* ret = buildTree(preorder, inorder);
//
//    Print(ret);
//
//    return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//using namespace std;
//
//vector<string> topKFrequent(vector<string>& words, int k)
//{
//    vector<string> ret;
//    map<string, int> Countmap;
//    for (auto& e : words)
//    {
//        map<string, int>::iterator it = Countmap.find(e);
//        if (it == Countmap.end())
//        {
//            Countmap.insert(make_pair(e, 1));
//        }
//        else
//        {
//            it->second++;
//        }
//    }
//
//    for (int i = k; i > 0; i--)
//    {
//        map<string, int>::iterator itmax = Countmap.begin();
//        map<string, int>::iterator itcom = ++itmax;
//        while (itcom != Countmap.end())
//        {
//            if (itcom->second > itmax->second)
//            {
//                itmax = itcom;
//            }
//            itcom++;
//        }
//        ret.push_back(itmax->first);
//        Countmap.erase(itmax);
//    }
//    return ret;
//}
//
//int main()
//{
//    string words[] = { "i", "love", "leetcode", "i", "love", "coding" };
//    vector<string> str;
//    for (auto& e : words)
//    {
//        str.push_back(e);
//    }
//    int k = 2;
//
//    vector<string> ret = topKFrequent(str, k);
//    for (auto& e : ret)
//    {
//        cout << e << " ";
//    }
//    cout << endl;
//    return 0;
//}




//#include<iostream>
//using namespace std;
//
//class A
//{};
//class B:public A
//{};
//
//class Person
//{
//public:
//	virtual A* BuyTicket()
//	{
//		cout << "��ͨ�ˣ���Ʊ-ȫ��" << endl;
//		return new A;
//	}
//};
//
//class Student :public Person
//{
//public:
//	virtual B* BuyTicket()
//	{
//		cout << "ѧ  ������Ʊ-���" << endl;
//		return new B;
//	}
//};
//
//void func(Person& tmp)
//{
//	tmp.BuyTicket();
//}
//
//int main()
//{
//	Person p;
//	Student s;
//	func(p);
//	func(s);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual ~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//};
//
//class Student :public Person
//{
//public:
//	virtual ~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//};
//
//int main()
//{
//	Person* p = new Person;
//	Person* s = new Student;
//	delete p;
//	delete s;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual void BuyTicket() 
//	{
//		cout << "��ͨ�ˣ���Ʊ-ȫ��" << endl;
//	}
//};
//
//class Student :public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "ѧ  ������Ʊ-���" << endl;
//	}
//};
//
//void func(Person& tmp)
//{
//	tmp.BuyTicket();
//}
//
//int main()
//{
//	Person p;
//	Student s;
//	func(p);
//	func(s);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual void BuyTicket() = 0;
//};
//
//class Student :public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "ѧ  ������Ʊ-���" << endl;
//	}
//};
//
//void func(Person& tmp)
//{
//	tmp.BuyTicket();
//}
//
//int main()
//{
//	Student s;
//	func(s);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void Print(int x = 0)
//	{
//		cout << x << endl;
//	}
//};
//
//class B :public A
//{
//public:
//	virtual void Print(int x = 1)
//	{
//		cout << x << endl;
//	}
//};
//
//void func(A& tmp)
//{
//	tmp.Print();
//}
//
//int main()
//{
//	B b;
//	func(b);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	virtual void Print()
//	{
//		cout << "Base()" << endl;
//	}
//
//	int _val;
//};
//
//int main()
//{
//	Base b;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	virtual void func1()
//	{
//		cout << "A:func1()" << endl;
//	}
//	virtual void func2()
//	{
//		cout << "A:func2()" << endl;
//	}
//	void func3()
//	{
//		cout << "A::func3()" << endl;
//	}
//};
//class B :public A
//{
//public:
//	virtual void func1()
//	{
//		cout << "B:func1()" << endl;
//	}
//};
//int main()
//{
//	A a;
//	B b;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��ͨ�ˣ���Ʊ-ȫ��" << endl;
//	}
//};
//class Student :public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "ѧ  ������Ʊ-���" << endl;
//	}
//};
//void Print()
//{
//	cout << "111" << endl;
//}
//void func(Person& tmp)
//{
//	Print();
//	tmp.BuyTicket();
//}
//int main()
//{
//	Person p;
//	Student t;
//	func(p);
//	func(t);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void func1()
//	{
//		cout << "A::func1()" << endl;
//	}
//	virtual void func2()
//	{
//		cout << "A::func2()" << endl;
//	}
//};
//class B :public A
//{
//public:
//	virtual void func1()
//	{
//		cout << "B::func1()" << endl;
//	}
//	virtual void func3()
//	{
//		cout << "B::func3()" << endl;
//	}
//	virtual void func4()
//	{
//		cout << "B::func4()" << endl;
//	}
//};
//
//typedef void(*VFTable) ();//����ָ��
//
//void Print(VFTable* table)
//{
//	for (int i = 0; *(table+i) != 0; i++)
//	{
//		cout << *(table + i) << "->";
//		VFTable f = *(table + i);
//		f();
//	}
//}
//
//int main()
//{
//	A a;
//	B b;
//
//	VFTable* p = (VFTable*)(*((int*)(&b)));
//	Print(p);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void func1() {cout << "A::func1()" << endl;}
//	virtual void func2() {cout << "A::func2()" << endl;}
//};
//
//class B
//{
//public:
//	virtual void func1() {cout << "B::func1()" << endl;}
//	virtual void func2() {cout << "B::func2()" << endl;}
//};
//
//class C :public A, public B
//{
//public:
//	virtual void func1() {cout << "C::func1()" << endl;}
//	virtual void func3() {cout << "C::func3()" << endl;}
//};
//
//typedef void(*VFTable)();
//
//void Print(VFTable* tmp)
//{
//	for (int i = 0; *(tmp + i) != nullptr; i++)
//	{
//		cout << *(tmp + i) << "->";
//		VFTable f = *(tmp + i);
//		f();
//	}
//	cout << endl;
//}
//
//int main()
//{
//	C c;
//
//	VFTable* p1 = (VFTable*)(*((int*)(&c)));//��һ���麯����ĵ�һ���麯���ĵ�ַ
//	VFTable* p2 = (VFTable*)(*(int*)((char*)(&c) + sizeof(A)));
//	Print(p1);
//	Print(p2);
//	return 0;
//}