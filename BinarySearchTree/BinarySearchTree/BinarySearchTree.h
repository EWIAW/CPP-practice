#pragma once
#include<iostream>
using namespace std;

//�����
template<class T>
struct BinarySearchTreeNode
{
	//��Ա����
	BinarySearchTreeNode(const T& val)
		:_data(val)
		,_left(nullptr)
		,_right(nullptr)
	{}

	//��Ա����
	T _data;
	BinarySearchTreeNode<T>* _left;
	BinarySearchTreeNode<T>* _right;
};

//������������
template<class T>
class BinarySearchTree
{
	typedef BinarySearchTreeNode<T> Node;
public:
	//���캯��
	BinarySearchTree()
		:_root(nullptr)
	{}

	//������
	bool insert(const T& val)
	{
		//�����Ϊ��
		if (_root == nullptr)
		{
			_root = new Node(val);
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;
		//��ʼ��Ҫ�����λ�ã���֮ǰ��Ҫ����parent��λ��
		while (cur != nullptr)
		{
			if (val > cur->_data)//���Ҫ�����ֵ���ڵ�ǰ���
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (val < cur->_data)//���Ҫ�����ֵС�ڵ�ǰ���
			{
				parent = cur;
				cur = cur->_left;
			}
			else//���Ҫ����Ľ���Ѵ��ڣ��򲻽��в��룬���ز���ʧ��
			{
				return false;
			}
		}

		Node* newnode = new Node(val);
		if (parent->_data > val)
		{
			parent->_left = newnode;
		}
		else
		{
			parent->_right = newnode;
		}

		return true;
	}

	//���ҽ��
	Node* Find(const T& val)
	{
		if (_root == nullptr)
			return nullptr;

		Node* cur = _root;
		while (cur != nullptr)
		{
			if (val > cur->_data)
			{
				cur = cur->_right;
			}
			else if (val < cur->_data)
			{
				cur = cur->_left;
			}
			else
			{
				return cur;
			}
		}

		return nullptr;
	}

	//ɾ�����
	bool Erase(const T& val)
	{
		//�����Ϊ�գ���ֱ�ӷ���false
		if (_root == nullptr)
			return false;

		Node* parent = nullptr;
		Node* cur = _root;
		while (cur != nullptr)
		{
			if (val > cur->_data)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (val < cur->_data)
			{
				parent = cur;
				cur = cur->_left;
			}
			else//���cur==val�����ҵ���Ҫɾ���Ľ�㣬��ʼ����ɾ������
			{
				//1.cur��leftΪnull��right��Ϊnull
				//2.cur��rightΪnull��left��Ϊnull
				//3.cur��left��right����Ϊnull
				if (cur->_left == nullptr)//1.cur��leftΪnull��right��Ϊnull
				{
					//���Ҫɾ���Ľ��cur�����
					if (parent == nullptr)
					{
						_root = cur->_right;
					}
					else
					{
						//���Ҫɾ���Ľ��cur�������
						if (parent->_data > cur->_data)
							parent->_left = cur->_right;
						else
							parent->_right = cur->_right;
					}

					delete cur;
				}			
				else if (cur->_right == nullptr)//2.cur��rightΪnull��left��Ϊnull
				{
					//���Ҫɾ���Ľ��cur�����
					if (parent == nullptr)
					{
						_root = cur->_left;
					}
					else
					{
						//���Ҫɾ���Ľ��cur�������
						if (parent->_data > cur->_data)
							parent->_left = cur->_left;
						else
							parent->_right = cur->_left;
					}

					delete cur;
				}
				else//3.cur��left��right����Ϊnull
				{
					//������������С���ڵ�
					Node* rightMinParent = cur;
					Node* rightMin = cur->_right;
					while (rightMin->_left != nullptr)
					{
						rightMinParent = rightMin;
						rightMin = rightMin->_left;
					}

					cur->_data = rightMin->_data;
					//swap(cur->_data, rightMin->_data);

					if(rightMinParent->_data > rightMin->_data)
						rightMinParent->_left = rightMin->_right;
					else
						rightMinParent->_right = rightMin->_right;

					delete rightMin;
				}

				return true;
			}
		}

		//���û���ҵ�����򷵻�false
		return false;
	}

	//�������
	void _InOrder(Node* cur)
	{
		if (cur == nullptr)
			return;

		_InOrder(cur->_left);
		cout << cur->_data << " ";
		_InOrder(cur->_right);
	}

	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}

private:
	Node* _root;//һ��ָ��ָ����ڵ�
};

void Test1()
{
	BinarySearchTree<int> root;
	int arr[] = { 5,3,7,1,4,6,8,0,2,9 };
	for (auto& e : arr)
	{
		root.insert(e);
	}

	root.InOrder();

	//root.Erase(7);
	//root.InOrder();

	//root.Erase(0);
	//root.InOrder();

	//root.Erase(1);
	//root.InOrder();

	for (auto& e : arr)
	{
		root.Erase(e);
		root.InOrder();
	}
}

//����ɾ��
void Test2()
{
	BinarySearchTree<int> root;
	int arr[] = { 5,3,4,1,7,8,2,6,0,9 };

	for (auto& e : arr)
	{
		root.insert(e);
	}

	root.Erase(7);
	root.InOrder();
}

