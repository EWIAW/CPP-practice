#pragma once
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
						}
						//�����ߵ������һ�����������
						RotateR(grandparent);
						cur->_col = BLACK;
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
						}
						RotateL(grandparent);
						cur->_col = BLACK;
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

		//�������3
		bool Judge3()
		{
			Node* cur = _root;
			_Judge3(cur);
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

		//�ж�����3���Ӻ���
		bool _Judge3(Node* cur)
		{
			if (cur == nullptr)
			{
				return true;
			}

			if (cur->_col == BLACK)
			{
				return _Judge3(cur->_left) && _Judge3(cur->_right);
			}

			if (cur->_col == RED)
			{
				if (cur->_left->_col == RED && cur->_right->_col == RED)
				{
					return true;
				}
			}
		}

	private:
		Node* _root;
	};

	void Test1()
	{
		RBTree<int> root;
		const int n = 10000;
		for (int i = 0; i < n; i++)
		{
			root.insert(rand());
		}
	}
}
