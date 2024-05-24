#pragma once
#include<iostream>
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
	bool insert(const pair<K,V>& tmp)
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

		//1.���cur�ĸ����ΪBLACK������Ҫ����
		//2.���cur�ĸ����ΪRED����uncle��������Ϊ�죬����Ҫ����
		//3.���cur�ĸ����ΪRED����uncle��㲻���ڣ�����Ҫ����
		//4.���cur�ĸ����ΪRED����uncle��������ΪBLACK������Ҫ����

		Node* grandParent = curParent->_parent;

		if (curParent->_col == BLACK)
		{
			return true;
		}
		
	}
private:
	Node* _root = nullptr;
};