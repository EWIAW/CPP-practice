#pragma once
#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

//AVLTree��ʵ�֣�����map��ʵ�ֵ�key��valueģ��
template<class K,class V>
struct AVLTreeNode
{
	//��Ա����
	K _key;
	V _val;
	AVLTreeNode<K, V>* _left;
	AVLTreeNode<K, V>* _right;
	AVLTreeNode<K, V>* _parent;
	int _bf;//ƽ�����ӣ���������Ƿ�ƽ�⣬ƽ��������   ����-����

	//��Ա����
	AVLTreeNode(pair<K,V> p)
		:_key(p.first)
		,_val(p.second)
		,_left(nullptr)
		,_right(nullptr)
		,_parent(nullptr)
		,_bf(0)
	{}
};

template<class K,class V>
class AVLTree
{
public:
	typedef AVLTreeNode<K,V> Node;
public:
	//���캯��
	AVLTree()
		:_root(nullptr)
	{}

	bool insert(const pair<K,V>& p)
	{
		//�����ʱtreeΪ�գ���ֱ�Ӱѽ���_root
		if (_root == nullptr)
		{
			_root = new Node(p);
			return true;
		}

		//���tree��Ϊ�գ�����ҿ�λ���������в���
		Node* cur = _root;
		Node* curparent = nullptr;
		while (cur != nullptr)
		{
			curparent = cur;
			if (p.first > cur->_key)
			{
				cur = cur->_right;
			}
			else if(p.first < cur->_key)
			{
				cur = cur->_left;
			}
			else
			{
				return false;
			}
		}

		cur = new Node(p);//����һ��������λ��
		if (curparent->_key > cur->_key)//���½�����ӵ�����
		{
			curparent->_left = cur;
		}
		else
		{
			curparent->_right = cur;
		}
		cur->_parent = curparent;

		//�����½��󣬸��¸�����_bfƽ������
		while (curparent != nullptr)
		{
			if (curparent->_right == cur)
			{
				curparent->_bf++;
			}
			else
			{
				curparent->_bf--;
			}

			if (curparent->_bf == 0)
			{
				break;
			}
			else if (curparent->_bf == 1 || curparent->_bf == -1)
			{
				cur = curparent;
				curparent = cur->_parent;
			}
			else if (curparent->_bf == 2 || curparent->_bf == -2)
			{
				//������ת����
				//1.����
				//2.������
				//3.�ҵ���
				//4.���ҵ���
				if (curparent->_bf == 2)
				{
					if (curparent->_right->_bf == 1)
					{
						RotateL(curparent);//����
					}
					else
					{
						RotateRL(curparent);
					}
				}
				else if(curparent->_bf == -2)
				{
					if (curparent->_left->_bf == -1)
					{
						RotateR(curparent);//�ҵ���
					}
					else
					{
						RotateLR(curparent);
					}
				}

				break;
			}
		}

		return true;
	}

	//����
	void RotateL(Node* first)
	{
		//1.first��right ָ�� second��left
		//2.second��left ָ�� first

		//������ע�⣬��Ϊ����������������parentָ�룬���Ե�ĳ������left����right�ı䣬��ý��ĺ��ӵ�parentָ��ҲҪ��
		Node* second = first->_right;
		Node* secondLeft = second->_left;

		first->_right = secondLeft;
		if (secondLeft != nullptr)
		{
			secondLeft->_parent = first;
		}

		second->_left = first;
		Node* ppNode = first->_parent;//����first�ĸ���㣬��Ϊfirst�п��������е�����һ��������Ҫͨ��first�ĸ�������������������
		first->_parent = second;


		if (first == _root)//���first��_root
		{
			_root = second;
			second->_parent = nullptr;
		}
		else//���first����_root
		{
			if (ppNode->_left == first)
			{
				ppNode->_left = second;  
			}
			else
			{
				ppNode->_right = second;
			}
			second->_parent = ppNode;
		}

		//����ƽ������
		first->_bf = second->_bf = 0;
	}

	//�ҵ���
	void RotateR(Node* first)
	{
		//1.first��left  ָ��  second��right
		//2.second��right  ָ��  first
		Node* second = first->_left;
		Node* secondRight = second->_right;

		first->_left = secondRight;
		if (secondRight != nullptr)
		{
			secondRight->_parent = first;
		}

		second->_right = first;
		Node* ppNode = first->_parent;
		first->_parent = second;

		if (first == _root)
		{
			_root = second;
			second->_parent = nullptr;	
		}
		else
		{
			if (ppNode->_left == first)
			{
				ppNode->_left = second;
			}
			else
			{
				ppNode->_right = second;
			}
			second->_parent = ppNode;
		}

		first->_bf = second->_bf = 0;

	}

	//����˫��
	void RotateRL(Node* first)
	{
		Node* second = first->_right;
		Node* third = second->_left;

		int bf = third->_bf;

		RotateR(second);//���ҵ���
		RotateL(first);//������

		//��ת��ɺ󣬸���ƽ������
		if (bf == 1)
		{
			first->_bf = -1;
			second->_bf = 0;
			third->_bf = 0;
		}
		else if (bf == -1)
		{
			first->_bf = 0;
			second->_bf = 1;
			third->_bf = 0;
		}
		else if (bf == 0)
		{
			first->_bf = 0;
			second->_bf = 0;
			third->_bf = 0;
		}
	}

	//����˫��
	void RotateLR(Node* first)
	{
		Node* second = first->_left;
		Node* third = second->_right;

		int bf = third->_bf;

		RotateL(second);
		RotateR(first);

		if (bf == 1)
		{
			first->_bf = 0;
			second->_bf = -1;
			third->_bf = 0;
		}
		else if (bf == -1)
		{
			first->_bf = 1;
			second->_bf = 0;
			third->_bf = 0;
		}
		else if (bf == 0)
		{
			first->_bf = 0;
			second->_bf = 0;
			third->_bf = 0;
		}
	}

	void _InOrder(Node* root)
	{
		if (root == nullptr)
		{
			return;
		}

		_InOrder(root->_left);

		cout << root->_key << ":" << root->_val << endl;

		_InOrder(root->_right);
	}

	//�������
	void InOrder()
	{
		_InOrder(_root);
	}

	//��������ĸ߶�
	int Height(Node* root)
	{
		if (root == nullptr)
		{
			return 0;
		}

		return fmax(Height(root->_left), Height(root->_right)) + 1;
	}

	bool _JudgeBalance(Node* root)
	{
		if (root == nullptr)
		{
			return true;
		}

		int heightleft = Height(root->_left);
		int heightright = Height(root->_right);

		return abs(heightleft - heightright) < 2
			&& _JudgeBalance(root->_left)
			&& _JudgeBalance(root->_right);
	}

	//�ж��Ƿ�ƽ��
	bool JudgeBalance()
	{
		Node* root = _root;
		return _JudgeBalance(root);
	}

private:
	Node* _root;
};