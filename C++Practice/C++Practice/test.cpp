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

#include<iostream>
using namespace std;


int Count1()
{
	static int a = 0;
	a++;
	return a;
}

//int& Count2()
//{
//	a++;
//	return a;
//}

int main()
{
	int tmp = Count1();	

	return 0;
}

