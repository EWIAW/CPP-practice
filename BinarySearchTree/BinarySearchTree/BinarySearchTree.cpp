#include"BinarySearchTree.h"

////���Բ����ɾ��
//void Blog_test1()
//{
//	Blog_Tree<int> root;
//	int arr1[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16,14 };
//	for (auto& e : arr1)
//	{
//		root.insert(e);
//	}
//	root.InOrder();
//
//	for (auto& e : arr1)
//	{
//		root.erase(e);
//		root.InOrder();
//	}
//}
//
////���Բ���
//void Blog_test2()
//{
//	Blog_Tree<int> root;
//	int arr1[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16,14 };
//	for (auto& e : arr1)
//	{
//		root.insert(e);
//	}
//	Blog_TreeNode<int>* tmp = root.find(20);
//	if (tmp != nullptr)
//	{
//		cout << tmp->_key << endl;
//	}
//	else
//	{
//		cout << "�����ڸ�ֵ" << endl;
//	}
//}

//�ֵ���
void Blog_test1()
{
	Blog_Tree<string, string> root;
	root.insert("��", "tree");
	root.insert("����", "sort");
	root.insert("ˮ", "water");

	Blog_TreeNode<string, string>* tmp = root.find("����");
	if (tmp == nullptr)
	{
		cout << "�޸õ���" << endl;
	}
	else
	{
		cout << tmp->_val << endl;
	}
}

//ͳ�ƴ���
void Blog_test2()
{
	string str[] = { "�·�","Ь��","�·�","����","�·�","�·�","����","Ь��","ñ��","ñ��","����" };
	Blog_Tree<string, int> root;
	for (auto& e : str)
	{
		Blog_TreeNode<string, int>* tmp = root.find(e);
		if (tmp == nullptr)
		{
			root.insert(e, 1);
		}
		else
		{
			tmp->_val++;
		}
	}
	root.InOrder();
}

int main()
{
	//Blog_test1();
	Blog_test2();
	return 0;
}