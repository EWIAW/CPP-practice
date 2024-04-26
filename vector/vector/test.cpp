#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//���캯��	��ֵ=����
void Test_Vector1()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	vector<int> v2(v1);

	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] += 2;
		cout << v1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	vector<int> v3;
	v3 = v1;

	for (int i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;
}

//����
void Test_Vector2()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] *= 2;
		cout << v1[i] << " ";
	}
	cout << endl;

	vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	//��Χfor	���������滻�ɵ�����
	for (auto arr : v1)
	{
		cout << arr << " ";
	}
	cout << endl;
}

//������
void Test_Vector3()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	//���������
	vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	//���������
	vector<int>::reverse_iterator rit = v1.rbegin();
	while (rit != v1.rend())
	{
		cout << *rit << " ";
		rit++;
	}
	cout << endl;

	//����const������
	vector<int>::const_iterator cit = v1.begin();
	while (cit != v1.end())
	{
		cout << *cit << " ";
		cit++;
	}
	cout << endl;

	//����const������
	vector<int>::const_reverse_iterator rcit = v1.rbegin();
	while (rcit != v1.rend())
	{
		cout << *rcit << " ";
		rcit++;
	}
	cout << endl;
}

//capacity
void Test_Vector4()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	v1.resize(10);

	cout << v1.size() << endl;
	cout << v1.max_size() << endl;
	cout << v1.capacity() << endl;

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
}

//�㷨find	sort
void Test_Vector5()
{
	vector<int> v1;
	v1.push_back(50);
	v1.push_back(27);
	v1.push_back(21);
	v1.push_back(10);

	vector<int>::iterator it = find(v1.begin(), v1.end(), 20);

	//v1.erase(it);

	sort(v1.begin(), v1.end());

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
}

//��ȡĳ��λ�õ�ֵ
void Test_Vector6()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	cout << v1.front() << endl;
	cout << v1[1] << endl;
	cout << v1.at(2) << endl;
	cout << v1.back() << endl;

}

//��һ�ֵ�����ʧЧ
void Test_Vector7()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	vector<int>::iterator it = v1.begin();

	v1.push_back(5);//����󣬵�����ʧЧ	ԭ�򣺲���5ʱ����Ҫ���ݣ��Ὺһ���¿ռ䣬��it��������ָ��ԭ���ľɿռ�


	while (it != v1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

}

//�ڶ��ֵ�����ʧЧ erase����
void Test_Vector8()
{
	//ɾ��vector�е�����ż��

	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);

	vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		if ((*it) % 2 == 0)
		{
			//v1.erase(it);               //����д����ɾ��������λ�õ�Ԫ�غ󣬵�����ʧЧ�ˣ�
			it = v1.erase(it);		   //��ȷд����ɾ��������λ�ú���Ҫ��it���������¸�ֵ
		}
		else
		{
			it++;
		}
	}

}

void Test_Vector9()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.insert(v1.begin() + 2, 10);

}

void Test_Vector10()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.reserve(10);

	vector<int>::iterator it = v1.begin();
	it = v1.insert(it, 10);
	it = v1.insert(it, 20);
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
}

void Test_Vector11()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	vector<int>::iterator it = v1.begin();

	v1.push_back(5);

	cout << *it << endl;
}

void Test_Vector12()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	vector<int>::iterator it = v1.begin();
	it = v1.erase(it);
	cout << *it << endl;
}

int main()
{
	//Test_Vector1();
	//Test_Vector2();
	//Test_Vector3();
	//Test_Vector4();
	//Test_Vector5();
	//Test_Vector6();
	//Test_Vector7();
	//Test_Vector8();
	//Test_Vector9();
	//Test_Vector10();
	//Test_Vector11();
	Test_Vector12();
	return 0;
}

