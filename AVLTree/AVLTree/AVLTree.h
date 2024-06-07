#pragma once
#include<iostream>
#include<vector>
#include<time.h>
using namespace std;


	template<class K, class V>
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
		AVLTreeNode(pair<K, V> p)
			:_key(p.first)
			, _val(p.second)
			, _left(nullptr)
			, _right(nullptr)
			, _parent(nullptr)
			, _bf(0)
		{}
	};

template<class K, class V>
class AVLTree
{
public:
	typedef AVLTreeNode<K, V> Node;
public:
		//���캯��
	AVLTree()
		:_root(nullptr)
	{}

		//������
	bool insert(const pair<K, V>& p)
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
				else if (p.first < cur->_key)
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
					else if (curparent->_bf == -2)
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

		//ɾ�����
	void erase(const K& key)
		{
			Node* cur = find(key);
			if (cur == nullptr)
			{
				return;
			}

			//1.curû�����ҽ��
			//2.curû�����㣬���ҽ��
			//3.curû���ҽ�㣬������
			//4.cur�����ҽ��

			//ȷ��cur��λ�ã���Ϊ�����������ʵ���Ա�Ϊ1��2��3�����

			if (cur->_left != nullptr && cur->_right != nullptr)
			{
				Node* cur_right_min = cur->_right;
				while (cur_right_min->_left != nullptr)
				{
					cur_right_min = cur_right_min->_left;
				}
				cur->_key = cur_right_min->_key;
				cur->_val = cur_right_min->_val;

				cur = cur_right_min;
			}

			Node* cur_parent = cur->_parent;
			Node* del = cur;

			//���������ƽ������
			while (cur_parent != nullptr)
			{
				if (cur_parent->_left == cur)
				{
					cur_parent->_bf++;
				}
				else if (cur_parent->_right == cur)
				{
					cur_parent->_bf--;
				}

				//�����길����ƽ�����Ӻ�Ҫ�����ж��Ƿ����ϼ����������ǽ�����ת�����ǽ�������

				//1.���cur_parent��ƽ������Ϊ1��-1������������������ɾ��
				//2.���ƽ������Ϊ0����������ϵ���
				//3.���ƽ������Ϊ2���������ת����
				if (cur_parent->_bf == 1 || cur_parent->_bf == -1)
				{
					break;
				}
				else if (cur_parent->_bf == 0)
				{
					cur = cur_parent;
					cur_parent = cur->_parent;
				}
				else if (cur_parent->_bf == 2 || cur_parent->_bf == -2)
				{
					if (cur_parent->_bf == 2)
					{
						if (cur_parent->_right->_bf == 1)
						{
							RotateL(cur_parent);//����
						}
						else
						{
							RotateRL(cur_parent);
						}
					}
					else if (cur_parent->_bf == -2)
					{
						if (cur_parent->_left->_bf == -1)
						{
							RotateR(cur_parent);//�ҵ���
						}
						else
						{
							RotateLR(cur_parent);
						}
					}
					break;
				}
			}

			//����������������ɺ���ɾ�����
			//ɾ������Ϊ������� delΪҪɾ���Ľ��
			//1.del��������Ϊnull����������Ϊnull
			//2.del��������Ϊnull����������Ϊnull
			Node* del_parent = del->_parent;
			//���del��parentΪ�գ�˵��del��Ψһ�ĸ����
			if (del_parent == nullptr)
			{
				_root = nullptr;
			}
			else if (del->_left == nullptr && del->_right != nullptr)
			{
				if (del_parent->_left == del)
				{
					del_parent->_left = del->_right;
				}
				else
				{
					del_parent->_right = del->_right;
				}
			}
			else
			{
				if (del_parent->_left == del)
				{
					del_parent->_left = del->_left;
				}
				else
				{
					del_parent->_right = del->_left;
				}
			}
			delete del;

			return;
		}

		//���ҽ��
	Node* find(const K& key)
		{
			if (_root == nullptr)
			{
				return nullptr;
			}

			Node* cur = _root;
			while (cur != nullptr)
			{
				if (key > cur->_key)
				{
					cur = cur->_right;
				}
				else if (key < cur->_key)
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

		//��������ĸ߶�
	int Height(Node* root)
		{
			if (root == nullptr)
			{
				return 0;
			}

			return fmax(Height(root->_left), Height(root->_right)) + 1;
		}

		//�ж��Ƿ�ƽ��
	bool JudgeBalance()
		{
			Node* root = _root;
			return _JudgeBalance(root);
		}

		//private:
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

	void _InOrder(Node* root)
		{
			if (root == nullptr)
			{
				return;
			}

			_InOrder(root->_left);

			cout << root->_key << ":" << root->_val << "	";

			_InOrder(root->_right);
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

	void Print()
		{
			cout << _root->_key << endl;
		}

		//private:
	Node* _root;
};



//�ٴθ�ϰAVLTree������дһƪ����
namespace blog_AVLTree
{
	template<class T>
	struct TreeNode
	{
		//��Ա����
		T _data;//�����洢����������
		TreeNode<T>* _left;//����ָ��
		TreeNode<T>* _right;//�Һ���ָ��
		TreeNode<T>* _parent;//�����ָ��
		int _bf;//ƽ������

		//��Ա����
		TreeNode(const T& tmp)//���캯��
			:_data(tmp)
			, _left(nullptr)
			, _right(nullptr)
			, _parent(nullptr)
			, _bf(0)
		{}
	};

	template<class T>
	class AVLTree
	{
		typedef TreeNode<T> Node;
	public:
		AVLTree()
			:_root(nullptr)
		{}

		//����
		bool insert(const T& tmp)
		{
			//������ڵ�Ϊ�գ���ֱ�Ӳ���
			if (_root == nullptr)
			{
				_root = new Node(tmp);
				return true;
			}

			//������ڵ㲻Ϊ�գ����Ȱ������������Ĺ�����в���
			Node* cur = _root;
			Node* cur_parent = nullptr;
			while (cur != nullptr)//�����ҿ�λ
			{
				if (tmp > cur->_data)
				{
					cur_parent = cur;
					cur = cur->_right;
				}
				else if (tmp < cur->_data)
				{
					cur_parent = cur;
					cur = cur->_left;
				}
				else
				{
					return false;
				}
			}

			//�ҵ���λ�󣬸���λһ���½��
			cur = new Node(tmp);
			if (cur->_data > cur_parent->_data)
			{
				cur_parent->_right = cur;
				cur->_parent = cur_parent;
			}
			else
			{
				cur_parent->_left = cur;
				cur->_parent = cur_parent;
			}

			//���������Ҫ����ƽ������
			while (cur_parent != nullptr)
			{
				if (cur_parent->_right == cur)
				{
					cur_parent->_bf++;
				}
				else
				{
					cur_parent->_bf--;
				}

				if (cur_parent->_bf == 0)
				{
					break;
				}
				else if (cur_parent->_bf == 1 || cur_parent->_bf == -1)
				{
					cur = cur_parent;
					cur_parent = cur_parent->_parent;
				}
				else if (cur_parent->_bf == 2 || cur_parent->_bf == -2)
				{
					//������ת����
					if (cur_parent->_bf == 2)
					{
						if (cur->_bf == 1)//����
						{
							RotateL(cur_parent);
						}
						else if(cur->_bf == -1)//����˫��
						{
							RotateRL(cur_parent);
						}
					}
					else if (cur_parent->_bf == -2)
					{
						if (cur->_bf == 1)//���ҵ���
						{
							RotateLR(cur_parent);
						}
						else if (cur->_bf == -1)//�ҵ���
						{
							RotateR(cur_parent);
						}
					}
					break;
				}
			}
			return true;
		}

		//���ҽ��
		Node* find(const T& tmp)
		{
			Node* cur = _root;
			while (cur != nullptr)
			{
				if (tmp > cur->_data)
				{
					cur = cur->_right;
				}
				else if (tmp < cur->_data)
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
			Node* cur = _root;
			_InOrder(cur);
		}

		//�����ĸ߶�
		int height(Node* cur)
		{
			if (cur == nullptr)
				return 0;

			return fmax(height(cur->_left), height(cur->_right)) + 1;
		}

		//�ж��Ƿ�ƽ��
		bool JudgeBanlance()
		{
			Node* cur = _root;
			return _JudgeBanlance(cur);
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

				//��ת��ɺ�ƽ�����ӵ���Ϊ0
				cur_parent->_bf = cur->_bf = 0;
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

				cur_parent->_bf = cur->_bf = 0;
			}

			//����˫��
			void RotateLR(Node* cur_parent)
			{
				Node* cur = cur_parent->_left;
				Node* cur_right = cur->_right;

				int bf = cur_right->_bf;

				//�ȶ�cur����һ������
				RotateL(cur);

				//�ٶ�cur_parent����һ���ҵ���
				RotateR(cur_parent);

				//��ת��ɺ�Ҫ����ƽ������
				if (bf == -1)
				{
					cur->_bf = 0;
					cur_parent->_bf = 1;
					cur_right->_bf = 0;
				}
				else if (bf == 1)
				{
					cur->_bf = -1;
					cur_parent->_bf = 0;
					cur_right->_bf = 0;
				}
				else if (bf == 0)//�������
				{
					cur->_bf = 0;
					cur_parent->_bf = 0;
					cur_right->_bf = 0;
				}
			}

			//����˫��
			void RotateRL(Node* cur_parent)
			{
				Node* cur = cur_parent->_right;
				Node* cur_left = cur->_left;

				int bf = cur_left->_bf;

				//�ȶ�cur����һ���ҵ���
				RotateR(cur);

				//�ٶ�cur_parent����һ������
				RotateL(cur_parent);

				//����ƽ������
				if (bf == -1)
				{
					cur->_bf = 1;
					cur_parent->_bf = 0;
					cur_left->_bf = 0;
				}
				else if (bf == 1)
				{
					cur->_bf = 0;
					cur_parent->_bf = -1;
					cur_left->_bf = 0;
				}
				else if (bf == 0)
				{
					cur->_bf = 0;
					cur_parent->_bf = 0;
					cur_left->_bf = 0;
				}
			}

			//����������Ӻ���
			void _InOrder(Node* cur)
			{
				if (cur == nullptr)
					return;

				_InOrder(cur->_left);
				cout << cur->_data << " ";
				_InOrder(cur->_right);
			}

			//�ж��Ƿ�ƽ����Ӻ���
			bool _JudgeBanlance(Node* cur)
			{
				if (cur == nullptr)
					return true;

				int left_height = height(cur->_left);//��cur�������ĸ߶�
				int right_height = height(cur->_right);//��cur�������ĸ߶�

				return abs(left_height - right_height) < 2
					&& _JudgeBanlance(cur->_left)
					&& _JudgeBanlance(cur->_right);
			}

	private:
		Node* _root;
	};

	void Test1()
	{
		AVLTree<int> root;
		//int arr[] = { 16, 3, 7, 11, 9, 26, 18, 14, 15 };
		int arr[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };

		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		{
			root.insert(arr[i]);
		}
		root.InOrder();
		cout << root.JudgeBanlance() << endl;
	}

	void Test2()
	{
		srand(time(0));
		AVLTree<int> root;
		const int n = 100;
		for (int i = 0; i < n; i++)
		{
			root.insert(rand());
		}
		root.InOrder();
		cout << root.JudgeBanlance() << endl;
	}
}


