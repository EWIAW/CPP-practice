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

#include<iostream>
using namespace std;

class Date
{
public:
	//��ȡ���µ�����
	int GetMonthDay(int year, int month)
	{
		int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		//�ж��Ƿ�����
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			arr[2]++;//���·�����++
		}
		return arr[month];
	}

	//���캯��
	Date(int year = 0, int month = 0, int day = 0)
	{
		if (year >= 0 
			&& month >= 1 && month <= 12 
			&& day >= 1 && day <= GetMonthDay(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
		{
			/*cout << "�Ƿ�����" << endl;*/
			_year = -1;
			_month = -1;
			_day = -1;
		}
	}

	//��������
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	//���ڱȽ�
	bool operator==(const Date& d)//�ж������Ƿ����
	{
		if (_year == d._year
			&& _month == d._month
			&& _day == d._day)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(const Date& d)//�ж������Ƿ��������
	{
		if (_year > d._year)
		{
			return true;
		}
		else if (_year == d._year && _month > d._month)
		{
			return true;
		}
		else if (_year == d._year && _month == d._month && _day > d._day)
		{
			return true;
		}
		return false;
	}

	bool operator>=(const Date& d)//�ж������Ƿ���ڵ�������
	{
		return (*this == d) || (*this > d);
	}

	bool operator<(const Date& d)//�ж������Ƿ�С������
	{
		return !(*this >= d);
	}

	//����-����

	//���ڼ�����

	//�����Ϣ����
	void Show()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2024, 3, 9);
	Date d2(2024, 3, 8);

	cout << (d1 < d2) << endl;

	return 0;
}