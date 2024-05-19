#include<iostream>
#include<set>
#include<map>
#include<string>
using namespace std;

void set_test1()
{
	set<int> s;
	s.insert(10);
	s.insert(2);
	s.insert(87);
	s.insert(56);
	s.insert(2);

	s.erase(2);
	set<int>::iterator a = s.find(56);
	if (a != s.end())
	{
		s.erase(a);
	}

	set<int>::iterator it = s.begin();
	while (it != s.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	for (auto& e : s)
	{
		cout << e << " ";
	}
	cout << endl;
}

void map_test1()
{
	map<int, int> m;
	m.insert(make_pair(1, 1));
	m.insert(pair<int, int>(2, 2));
	m.insert(pair<int, int>(3, 3));

	map<int, int>::iterator it = m.begin();
	while (it != m.end())
	{
		cout << it->first << ":" << it->second << endl;;
		it++;
	}
	cout << endl;

	for (auto& e : m)
	{
		cout << e.first << ":" << e.second << endl;
	}
}

void map_test2()
{
	map<string, string> m;
	m.insert(make_pair("sort", "����"));
	m.insert(make_pair("first", "��һ��"));
	m.insert(make_pair("rjk", "���"));

	for (auto& e : m)
	{
		cout << e.first << ":" << e.second << endl;
	}
}

void map_test3()
{
	map<string, int> Count;
	string str[] = { "����","ƻ��","�㽶","����", "����", "����", "����","ƻ��","ƻ��","ƻ��" };
	for (auto& e : str)
	{
		map<string, int>::iterator it = Count.find(e);
		if (it == Count.end())
		{
			Count.insert(make_pair(e, 1));
		}
		else
		{
			it->second++;
		}
	}

	for (auto& e : Count)
	{
		cout << e.first << ":" << e.second << endl;
	}
}

void map_test4()
{
	string str[] = { "����","ƻ��","�㽶","����", "����", "����", "����","ƻ��","ƻ��","ƻ��" };
	map<string, int> m;
	for (auto& e : str)
	{
		m[e]++;
	}

	for (auto& e : m)
	{
		cout << e.first << ":" << e.second << endl;
	}
}

void map_test5()
{
	//oprerator[]
	//ͨ��keyֵ���Ҷ�Ӧ��val��
	//���û�У�����룬�����ض�Ӧval������
	//����У���ֱ�ӷ��ض�Ӧval������
	//��ײ�ʵ����ͨ��insert����ɵ�
	//(*((this->insert(make_pair(k,mapped_type()))).first)).second	��ײ�ʵ��
	//����operator[]��һ�µĹ���
	//1.���Բ��루�����Ӧ��key���ڣ�������¿��ԣ�
	//2.�����޸ģ������޸Ķ�Ӧkeyӳ���val��
	//3.���Բ���+�޸�
	//4.���Բ��ң����Ƽ�������Ϊ��������ڣ��ͻ���в��룩

	//insert
	//insert��ͨ����һ��pair�����в�������
	//����ֵҲ��һ��pair����pair������Ϊiterator��bool
	//���map��û�У�����в��룬���ص�pair�У�iteratorָ���²���Ľ�㣬boolΪtrue
	//���map���У��򲻲��룬���ص�pair�У�iteratorָ���Ѵ��ڵĽ�㣬boolΪfalse
	string str[] = { "����","ƻ��","�㽶","����", "����", "����", "����","ƻ��","ƻ��","ƻ��" };
	map<string, int> m;
	for (auto& e : str)
	{
		m[e]++;
	}
}

int main()
{
	//set_test1();
	//map_test1();
	//map_test2();
	map_test3();
	return 0;
}