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

template<class K>
struct Blog_TreeNode
{
	//��Ա����
	K _key;
	Blog_TreeNode<K>* _left;
	Blog_TreeNode<K>* _right;

	//���캯��
	Blog_TreeNode(const K& key)
		:_key(key)
		,_left(nullptr)
		,_right(nullptr)
	{}

};

template<class K>
class Blog_Tree
{
	typedef Blog_TreeNode<K> Node;
public:
	//���캯��
	Blog_Tree()
		:_root(nullptr)
	{}

	//��������
	~Blog_Tree()
	{
		destory(_root);
	}

	//������
	bool insert(const K& data)
	{
		//�����Ϊ�գ���ֱ�ӽ��½�����_root
		if (_root == nullptr)
		{
			_root = new Node(data);
		}

		//�������Ϊ�գ��⿪ʼ�ҿ�λ�����½�����
		Node* cur = _root;
		Node* cur_parent = nullptr;//����Ҫ��ǰ����cur��parent����Ϊ�������ʱҪ�õ�
		while (cur != nullptr)
		{
			if (data > cur->_key)//���Ҫ��������ݴ���cur����cur������
			{
				cur_parent = cur;//����cur��parent
				cur = cur->_right;
			}
			else if (data < cur->_key)//���Ҫ���������С��cur����cur������
			{
				cur_parent = cur;//����cur��parent
				cur = cur->_left;
			}
			else//�����ȣ�˵���������У��򲻲��룬����ʧ��
			{
				return false;
			}
		}

		//�ҵ���λ�󣬽��½����в���
		Node* newnode = new Node(data);
		if (cur_parent->_key > newnode->_key)
		{
			cur_parent->_left = newnode;
		}
		else
		{
			cur_parent->_right = newnode;
		}

		return true;
	}

	//ɾ�����
	bool erase(const K& data)
	{
		if (_root == nullptr)
		{
			return false;
		}

		//���ҵ�Ҫɾ���Ľ��
		Node* cur = _root;
		Node* cur_parent = nullptr;
		while (cur != nullptr)
		{
			//���ҵ�Ҫɾ���Ľ��
			if (data > cur->_key)
			{
				cur_parent = cur;
				cur = cur->_right;
			}
			else if (data < cur->_key)
			{
				cur_parent = cur;
				cur = cur->_left;
			}
			else//�ҵ���curҪɾ���Ľ��
			{
				//�ж�������ɾ�����
				if (cur->_left == nullptr && cur->_right == nullptr)
				{
					if (cur_parent == nullptr)//���cur_parentΪ�գ�˵��ɾ����curΪ_root
					{
						_root = nullptr;
					}
					else
					{
						if (cur_parent->_left == cur)
						{
							cur_parent->_left = nullptr;
						}
						else
						{
							cur_parent->_right = nullptr;
						}
					}
					delete cur;
				}
				else if (cur->_left == nullptr && cur->_right != nullptr)
				{
					if (cur_parent == nullptr)//���cur_parentΪ�գ�˵��ɾ����curΪ_root
					{
						_root = cur->_right;
					}
					else
					{
						if (cur_parent->_left == cur)
						{
							cur_parent->_left = cur->_right;
						}
						else
						{
							cur_parent->_right = cur->_right;
						}
					}
					delete cur;
				}
				else if (cur->_left != nullptr && cur->_right == nullptr)
				{
					if (cur_parent == nullptr)
					{
						_root = cur->_left;
					}
					else
					{
						if (cur_parent->_left == cur)
						{
							cur_parent->_left = cur->_left;
						}
						else
						{
							cur_parent->_right = cur->_left;
						}
						delete cur;
					}
				}
				else
				{
					Node* cur_right_min = cur->_right;//cur����������С����
					Node* cur_right_min_parent = cur;
					while (cur_right_min->_left != nullptr)//ȥ��cur����������С����
					{
						cur_right_min_parent = cur_right_min;
						cur_right_min = cur_right_min->_left;
					}
					cur->_key = cur_right_min->_key;//�ҵ����丳ֵ��cur����ת��Ϊɾ��cur_right_min

					if (cur_right_min_parent->_key > cur_right_min->_key)
					{
						cur_right_min_parent->_left = cur_right_min->_right;
					}
					else
					{
						cur_right_min_parent->_right = cur_right_min->_right;
					}
					delete cur_right_min;
				}
				return true;
			}
		}
		return false;
	}

	Node* find(const K& data)
	{
		Node* cur = _root;
		while (cur != nullptr)
		{
			if (data > cur->_key)
			{
				cur = cur->_right;
			}
			else if (data < cur->_key)
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

	//�������
	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}

private:
	void _InOrder(Node* root)
	{
		if (root == nullptr)
			return;

		_InOrder(root->_left);
		cout << root->_key << " ";
		_InOrder(root->_right);
	}

	void destory(Node* root)
	{
		if (root == nullptr)
			return;

		destory(root->_left);
		destory(root->_right);
		delete root;
	}
private:
	Node* _root;
};

void Blog_test1()
{
	Blog_Tree<int> root;
	int arr1[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16,14 };
	int arr2[] = { 1,5,4,6,1,2,6,816,41,14 };
	for (auto& e : arr1)
	{
		root.insert(e);
	}
	root.InOrder();

	for (auto& e : arr2)
	{
		root.erase(e);
		root.InOrder();
	}
	
	root.InOrder();
}

void Blog_test2()
{
	Blog_Tree<int>* root = new Blog_Tree<int>;
	int arr1[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16,14 };
	for (auto& e : arr1)
	{
		root->insert(e);
	}
	root->InOrder();

	delete root;
}
