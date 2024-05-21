#pragma once
#include<iostream>
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
				break;
			}
		}

		return true;
	}

	//����
	void RotateL()
	{
		//1.parent��right ָ�� mid��left
		//2.mid��left ָ�� parent
	}

private:
	Node* _root;
};