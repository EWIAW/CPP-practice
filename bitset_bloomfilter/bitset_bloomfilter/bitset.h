#pragma once
#include<vector>
#include<iostream>

//λͼ
namespace bitset
{
	class bitset
	{
	public:
		//���캯��	vector�Ĵ�С�� Ҫ�����ݵ����ֵ
		bitset(const size_t& sz)
		{
			//һ��int���͵����ݣ���32������λ������һ��int���͵����ݿ��Դ�32��ӳ���ϵ
			size_t length = sz / 32 + 1;//vector�ĳ���
			_vec.resize(length);
			_nums = 0;
		}

		//����
		void set(const size_t& num)
		{
			//����num�ڵ�vector�ĵڼ���λ�ã�����num�ٸ�λ�õĵڼ�������λ
			size_t index = num / 32;//�����vector�ĵڼ���λ��
			size_t bit = num % 32;//����ڸ�λ�õĵڼ���bitλ
			//����bitλ��Ϊ1
			_vec[index] = _vec[index] | (1 << bit);
			_nums++;
		}

		//ɾ��
		void reset(const size_t& num)
		{
			size_t index = num / 32;
			size_t bit = num % 32;
			_vec[index] = _vec[index] & ~(1 << bit);
			_nums--;
		}

		//�ж�num��λ���Ƿ����
		bool test(const size_t& num)
		{
			size_t index = num / 32;
			size_t bit = num % 32;
			return _vec[index] & (1 << bit);
		}

	private:
		std::vector<int> _vec;
		size_t _nums;//��¼λͼ�Ĵ�С
	};

	void Test1()
	{
		bitset bs(100);
		bs.set(97);
		bs.set(98);
		bs.set(99);

		bs.set(99);

		bs.reset(99);

		for (int i = 0; i < 100; i++)
		{
			std::cout << "bs[" << i << "]=" << bs.test(i) << std::endl;
		}
	}

	void Test2()
	{
		unsigned int n = -1;
		bitset bs(n);
	}
}