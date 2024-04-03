#include<iostream>
#include<string>
using namespace std;

//���캯��
void TestString1()
{
	string s1;//�޲ι�����ַ���
	string s2("hello world");//�вι���
	string s3(s2);//��������
	string s4(10, 'a');//����10��a
	string s5(s2, 2, 7);//��s2�ĵ�2��λ�ÿ�ʼ��7���ַ�������
	string s6("hello world", 5);//�ø��ַ�����ǰ���������
	string s7(s2.begin(), s2.end());//����������

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	cout << s6 << endl;
	cout << s7 << endl;
}

//����
void TestString2()
{
	//����forѭ��
	string s1("hello world");
	for (int i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;

	//��Χfor
	for (auto& ch : s1)
	{
		cout << ch << " ";
	}
	cout << endl;

}

//������
void TestString3()
{
	//���ֵ�����
	//1.���򡢷���
	//2.const����const

	string s1("hello world");
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		(*it)++;
		cout << *it << " ";
		it++;
	}
	cout << endl;

	string::reverse_iterator rit = s1.rbegin();
	while (rit != s1.rend())
	{
		(*rit)--;
		cout << *rit << " ";
		rit++;
	}
	cout << endl;

	string::const_iterator cit = s1.begin();
	while (cit != s1.end())
	{
		cout << *cit << " ";
		cit++;
	}
	cout << endl;

	string::const_reverse_iterator rcit = s1.rbegin();
	while (rcit != s1.rend())
	{
		cout << *rcit << " ";
		rcit++;
	}
	cout << endl;
}

//Capacity
void TestString4()
{
	string s1("hello world");
	cout << s1.size() << endl;//�ַ�����Ч�ַ�����
	cout << s1.capacity() << endl;//�ַ�������
	//cout << s1.max_size() << endl;

	s1.resize(5);//�ı�size��ֵΪ5
	cout << s1 << endl;	
	
	s1.resize(20,'0');//�ı�size��ֵΪ20�����Ҳ�������0�������û�и��ڶ���������Ĭ�ϲ�\0��
	cout << s1 << endl;

	//s1.resize(5);
	//cout << s1 << endl;

	s1.reserve(100);//�ı��ַ�����������ָ����ֵ
	s1.reserve(5);//ֻ�����ݣ���������
	cout << s1 << endl;

	s1.clear();//����ַ����ڴ�
	cout << s1 << endl;

	cout << s1.empty() << endl;
}

//�м�ɾ�����м����
void TestString5()
{
	//insert���м�����ַ���
	//string s1("hello");
	//string s2(" world");

	//s1.insert(5,s2);//��ĳ��λ�ò���һ���ַ���
	//s1.insert(5, s2, 2, 2);�ӵ����λ�ò���һ���ַ�������������ַ����ĵڶ���λ�ÿ�ʼ����2��
	//s1.insert(5, "world");//��ĳ��λ�ò���һ���ַ���
	//s1.insert(5, " world", 3);//���� world��ǰ����

	//cout << s1 << endl;



	//erase���м�ɾ��
	
	string s1("hello world");
	s1.erase(3, 2);
	cout << s1 << endl;
}

//find  rfind
void TestString6()
{
	////find
	//string s1("hello world");
	//string s2("orld");
	//
	////int ret = s1.find(s2,0);//��s1�У���0λ�ÿ�ʼ��s2
	////cout << ret << endl;

	////int ret = s1.rfind("a");
	////cout << ret << endl;

	//int ret = s1.find("world", 0, 3);//s1����world�����Ҵ�0�±꿪ʼ�ң�������ƥ��world��ǰ�����ַ�
	//cout << ret << endl;

	//rfind
	string s1("hello world");

	int ret = s1.rfind("rld");
	cout << ret << endl;


}

//resize
void TestString7()
{
	string str("hello");
	str.resize(10);
	str += "world";
	cout << str << endl;

	printf("\0");
}

//����
void TestString8()
{
	string s1("hello");
	s1.insert(3, "world");

	cout << s1 << endl;
}

int main()
{
	//TestString1();
	//TestString2();
	//TestString3();
	//TestString4();
	//TestString5();
	//TestString6();
	//TestString7();
	TestString8();
	return 0;
}
