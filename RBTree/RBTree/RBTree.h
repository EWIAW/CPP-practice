#pragma once
#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

enum Color
{
	RED,
	BLACK
};

template<class K,class V>
struct RBTreeNode
{
	RBTreeNode(const pair<K,V>& tmp)
		:_kv(tmp)
		,_left(nullptr)
		,_right(nullptr)
		,_parent(nullptr)
		,_col(BLACK)
	{}

	pair<K,V> _kv;
	RBTreeNode<K, V>* _left;
	RBTreeNode<K, V>* _right;
	RBTreeNode<K, V>* _parent;
	Color _col;
};

template<class K,class V>
class RBTree
{
public:
	typedef RBTreeNode<K,V> Node;
public:
	bool insert(const pair<K, V>& tmp)
	{
		//������ڵ�Ϊ�գ���ֱ�ӽ��½�����_root
		if (_root == nullptr)
		{
			_root = new Node(tmp);
			return true;
		}

		//�ȸ��ݶ����������Ĳ�������ҵ����Բ����λ����
		Node* curParent = nullptr;
		Node* cur = _root;
		while (cur != nullptr)
		{
			if (tmp.first > cur->_kv.first)
			{
				curParent = cur;
				cur = cur->_right;
			}
			else if (tmp.first < cur->_kv.first)
			{
				curParent = cur;
				cur = cur->_left;
			}
			else
			{
				return false;
			}
		}
		//�ҵ���λ�󣬽��½����в���
		cur = new Node(tmp);
		if (cur->_kv.first < curParent->_kv.first)
		{
			curParent->_left = cur;
			cur->_parent = curParent;
		}
		else
		{
			curParent->_right = cur;
			cur->_parent = curParent;
		}

		//ÿ����һ���½�㣬�����ý�����ɫĬ��λRED
		cur->_col = RED;

		//�����½���Ҫ���м�飬�Ƿ�Ҫ����

		//һ.���cur�ĸ����ΪBLACK������Ҫ����

		//��.���cur�ĸ����ΪRED����uncle��������Ϊ�죬����Ҫ����

		//��.�����cur�ĸ����ΪRED����uncle��㲻���ڣ�����Ҫ����(����) 
		//  .�����cur�ĸ����ΪRED����uncle��������ΪBLACK������Ҫ������������

		//��.�����cur�ĸ����ΪRED����uncle��㲻���ڣ�����Ҫ����(˫��) 
		//  .�����cur�ĸ����ΪRED����uncle��������ΪBLACK������Ҫ������˫����

		
		//���ǿ��԰�������������� ��Ϊ ����������ֱ��� curparent��grangparent��_left �� curparent��grangparent��_right
		while (curParent != nullptr && curParent->_col == RED)
		{
			Node* grandparent = curParent->_parent;
			if (grandparent->_left == curParent)
			{
				Node* uncle = grandparent->_right;
				if (uncle != nullptr && uncle->_col == RED)//�����
				{
					curParent->_col = uncle->_col = BLACK;
					grandparent->_col = RED;

					//�������ϴ���
					cur = grandparent;
					curParent = cur->_parent;
				}
				else
				{
					//�����
					if (curParent->_right == cur)//˵����ʱ��һ�����ߣ�Ҳ��������ģ��ȴ�������ĵ�ԭ���ǣ�����ľ���һ����������������
					{
						RotateL(curParent);
						swap(cur, curParent);
					}
					//�����
					RotateR(grandparent);
					curParent->_col = BLACK;
					grandparent->_col = RED;
					break;
				}
			}
			else
			{
				Node* uncle = grandparent->_left;
				if (uncle != nullptr && uncle->_col == RED)
				{
					curParent->_col = uncle->_col = BLACK;
					grandparent->_col = RED;

					cur = grandparent;
					curParent = cur->_parent;
				}
				else
				{
					if (curParent->_left == cur)
					{
						RotateR(curParent);
						swap(cur, curParent);
					}
					RotateL(grandparent);
					curParent->_col = BLACK;
					grandparent->_col = RED;
					break;
				}
			}
		}
		_root->_col = BLACK;

	}

	void RotateR(Node* first)
	{
		Node* second = first->_left;
		Node* secondright = second->_right;

		first->_left = secondright;
		if (secondright != nullptr)
		{
			secondright->_parent = first;
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
				second->_parent = ppNode;
			}
			else
			{
				ppNode->_right = second;
				second->_parent = ppNode;
			}
		}

	}

	void RotateL(Node* first)
	{
		Node* second = first->_right;
		Node* secondleft = second->_left;

		first->_right = secondleft;
		if (secondleft != nullptr)
		{
			secondleft->_parent = first;
		}

		second->_left = first;
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
				second->_parent = ppNode;
			}
			else
			{
				ppNode->_right = second;
				second->_parent = ppNode;
			}
		}
	}

	void _InOrder(Node* root)
	{
		if (root == nullptr)
		{
			return;
		}

		_InOrder(root->_left);
		cout << root->_kv.first << ":" << root->_kv.second << endl;
		_InOrder(root->_right);
	}

	void InOrder()
	{
		_InOrder(_root);
	}

	Node* GetRoot()
	{
		return _root;
	}

	bool IsValidRBTree()
	{
		Node* pRoot = GetRoot();
		// ����Ҳ�Ǻ����
		if (nullptr == pRoot)
			return true;
		// �����ڵ��Ƿ��������
		if (BLACK != pRoot->_col)
		{
			cout << "Υ����������ʶ������ڵ����Ϊ��ɫ" << endl;
			return false;
		}
		// ��ȡ����һ��·���к�ɫ�ڵ�ĸ���
		size_t blackCount = 0;
		Node* pCur = pRoot;
		while (pCur)
		{
			if (BLACK == pCur->_col)
				blackCount++;
			pCur = pCur->_left;
		}
		// ����Ƿ��������������ʣ�k������¼·���к�ɫ�ڵ�ĸ���
		size_t k = 0;
		return _IsValidRBTree(pRoot, k, blackCount);
	}

	bool _IsValidRBTree(Node* pRoot, size_t k, const size_t blackCount)
	{
		//�ߵ�null֮���ж�k��black�Ƿ����
		if (nullptr == pRoot)
		{
			if (k != blackCount)
			{
				cout << "Υ�������ģ�ÿ��·���к�ɫ�ڵ�ĸ���������ͬ" << endl;
				return false;
			}
			return true;
		}
		// ͳ�ƺ�ɫ�ڵ�ĸ���
		if (BLACK == pRoot->_col)
			k++;
		// ��⵱ǰ�ڵ�����˫���Ƿ�Ϊ��ɫ
		Node* pParent = pRoot->_parent;
		if (pParent && RED == pParent->_col && RED == pRoot->_col)
		{
			cout << "Υ����������û������һ��ĺ�ɫ�ڵ�" << endl;
			return false;
		}
		return _IsValidRBTree(pRoot->_left, k, blackCount) &&
			_IsValidRBTree(pRoot->_right, k, blackCount);
	}

	private:
		Node* _root = nullptr;
};