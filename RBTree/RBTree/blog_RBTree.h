#pragma once
#include<iostream>
#include<time.h>
using namespace std;
namespace blog_RBTree
{
	enum Color
	{
		BLACK,
		RED
	};

	template<class T>
	struct TreeNode
	{
		//��Ա����
		T _data;//����
		TreeNode<T>* _left;
		TreeNode<T>* _right;
		TreeNode<T>* _parent;
		Color _col;//���������ɫ

		//���캯��
		TreeNode(const T& data)
			:_data(data)
			,_left(nullptr)
			,_right(nullptr)
			,_parent(nullptr)
			,_col(RED)//ÿ����һ���½�㣬����������ɫĬ�ϸ���ɫ������Ϊʲô����������
		{}
	};

	template<class T>
	class RBTree
	{
		typedef TreeNode<T> Node;
	public:
		//���캯��
		RBTree()
			:_root(nullptr)//�������һ��nullptr
		{}

		//������
		bool insert(const T& data)
		{
			//�����ΪNULL����ֱ�ӽ��½�����_root
			if (_root == nullptr)
			{
				_root = new Node(data);
				_root->_col = BLACK;//���½���_root��Ҫ�ǵð���ɫ��λBLACK
				return true;
			}

			Node* cur = _root;
			Node* cur_parent = nullptr;
			while (cur != nullptr)
			{
				if (data > cur->_data)
				{
					cur_parent = cur;
					cur = cur->_right;
				}
				else if (data < cur->_data)
				{
					cur_parent = cur;
					cur = cur->_left;
				}
				else//˵����ֵ�Ѿ����ڣ������в���
				{
					return false;	
				}
			}

			//���½�����
			cur = new Node(data);
			if (cur_parent->_data > data)
			{
				cur_parent->_left = cur;
				cur->_parent = cur_parent;
			}
			else
			{
				cur_parent->_right = cur;
				cur->_parent = cur_parent;
			}

			//����������
			while (cur_parent != nullptr && cur_parent->_col == RED)
			{
				Node* grandparent = cur_parent->_parent;
				if (grandparent->_left == cur_parent)//������
				{
					Node* uncle = grandparent->_right;
					if (uncle != nullptr && uncle->_col == RED)//���һ,uncle������Ϊ��
					{
						cur_parent->_col = uncle->_col = BLACK;
						grandparent->_col = RED;
						//�������ϴ���
						cur = grandparent;
						cur_parent = cur->_parent;
					}
					else//������������
					{
						//���������������һ����ת����Ա������������Կ������ж��Ƿ��������
						if (cur_parent->_right == cur)//����������������
						{
							//�Ƚ���һ������
							RotateL(cur_parent);
							swap(cur, cur_parent);
						}
						//�����ߵ������һ�����������
						RotateR(grandparent);
						cur_parent->_col = BLACK;
						grandparent->_col = RED;
						break;
					}
				}
				else if (grandparent->_right == cur_parent)//������
				{
					Node* uncle = grandparent->_left;
					if (uncle != nullptr && uncle->_col == RED)//����������һ
					{
						cur_parent->_col = uncle->_col = BLACK;
						grandparent->_col = RED;

						cur = grandparent;
						cur_parent = cur->_parent;
					}
					else//�������������������
					{
						if (cur_parent->_left == cur)
						{
							RotateR(cur_parent);
							swap(cur, cur_parent);
						}
						RotateL(grandparent);
						cur_parent->_col = BLACK;
						grandparent->_col = RED;
						break;
					}
				}
			}
			_root->_col = BLACK;
		}

		//���ҽ��
		Node* find(const T& data)
		{
			Node* cur = _root;
			if (data > cur->_data)
			{
				cur = cur->_right;
			}
			else if (data < cur->_data)
			{
				cur = cur->_left;
			}
			else
			{
				return cur;
			}
			return nullptr;
		}

		//�ж��Ƿ���Ϻ����������
		bool JudgeTree()
		{
			//����Ҳ�Ǻ����
			if (_root == nullptr)
			{
				return true;
			}
			//����1������㲻�Ǻ�ľ��Ǻڵ�
			//�������ʾ�û��Ҫ������

			//����2�������һ���Ǻ�ɫ��
			if (_root->_col != BLACK)
			{
				cout << "Υ������2�������һ���Ǻ�ɫ��" << endl;
				return false;
			}

			//����5:����Ҷ�ӽ�㶼�Ǻ�ɫ��
			//�������Ҳû��Ҫ���

			size_t blackcount = 0;
			Node* cur = _root;
			while (cur != nullptr)//�����һ��·���еĺ�ɫ���ĸ���
			{
				if (cur->_col == BLACK)
				{
					blackcount++;
				}
				cur = cur->_left;
			}
			size_t k = 0;//�����洢��ɫ���ĸ���
			return _JudgeTree(_root, k, blackcount);//�ж�����3������4

			//����3�����һ������Ǻ�ɫ�ģ���ô���ĺ���һ���Ǻ�ɫ��
			//����4��ÿ��·���ϵĺ�ɫ���ĸ�������ͬ
		}

	private:
		//����	
		void RotateL(Node* cur_parent)
		{
			Node* cur = cur_parent->_right;
			Node* cur_left = cur->_left;

			//�ı�ָ������ӹ�ϵ
			cur_parent->_right = cur_left;
			if (cur_left != nullptr)
			{
				cur_left->_parent = cur_parent;
			}

			cur->_left = cur_parent;
			Node* cur_parent_parent = cur_parent->_parent;
			cur_parent->_parent = cur;

			//��ת��ɺ�Ҫ�ж�cur_parent�Ƿ�Ϊ��
			if (cur_parent_parent != nullptr)//˵��cur_parent���Ǹ�
			{
				if (cur_parent_parent->_data < cur_parent->_data)
				{
					cur_parent_parent->_right = cur;
					cur->_parent = cur_parent_parent;
				}
				else
				{
					cur_parent_parent->_left = cur;
					cur->_parent = cur_parent_parent;
				}
			}
			else//˵��cur_parent�Ǹ�
			{
				_root = cur;
				cur->_parent = nullptr;
			}

		}

		//�ҵ���
		void RotateR(Node* cur_parent)
		{
			Node* cur = cur_parent->_left;
			Node* cur_right = cur->_right;

			cur_parent->_left = cur_right;
			if (cur_right != nullptr)
			{
				cur_right->_parent = cur_parent;
			}

			cur->_right = cur_parent;
			Node* cur_parent_parent = cur_parent->_parent;
			cur_parent->_parent = cur;

			if (cur_parent_parent != nullptr)
			{
				if (cur_parent_parent->_data > cur_parent->_data)
				{
					cur_parent_parent->_left = cur;
					cur->_parent = cur_parent_parent;
				}
				else
				{
					cur_parent_parent->_right = cur;
					cur->_parent = cur_parent_parent;
				}
			}
			else
			{
				_root = cur;
				cur->_parent = nullptr;
			}

		}

		//��ȡ���ڵ�
		Node* GetRoot()
		{
			return _root;
		}

		//�ж��Ƿ��������Ӻ���
		bool _JudgeTree(Node* root, size_t k, size_t blackcount)
		{
			//��root�ߵ�NULL��ʱ���ж�����·���ĺ�ɫ�������Ƿ�==blackcount
			if (root == nullptr)
			{
				if (k == blackcount)
				{
					return true;
				}
				else
				{
					cout << "Υ������4��ÿ��·���ϵĺڽ�������ͬ" << endl;
					return false;
				}
					

			}

			//�������Ǻ�ɫ�ģ��ж����ĸ�����Ƿ�ҲΪ��ɫ
			Node* root_parent = root->_parent;
			if (root_parent != nullptr && root->_col == RED)
			{
				if (root_parent->_col == RED)
				{
					cout << "Υ������3�����һ������Ǻ�ɫ�ģ���ô���ĺ���һ���Ǻ�ɫ��" << endl;
					return false;
				}
			}

			//�������Ǻ�ɫ�ģ���k++
			if (root->_col == BLACK)
			{
				k++;
			}

			return _JudgeTree(root->_left, k, blackcount) && _JudgeTree(root->_right, k, blackcount);
		}

	private:
		Node* _root;
	};

	void Test1()
	{
		srand(time(0));
		RBTree<int> root;
		const int n = 10000;
		for (int i = 0; i < n; i++)
		{
			int input = rand();
			root.insert(input);
		}
		cout << root.JudgeTree() << endl;
	}
}
