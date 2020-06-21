#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

//template<class K, class V>
//struct BSTreeNode
//{
//	BSTreeNode<K, V>* _left;
//	BSTreeNode<K, V>* _right;
//
//	K _key;
//	V _value;
//
//	BSTreeNode(const K& key, const V& value)
//		:_left(nullptr)
//		, _right(nullptr)
//		, _key(key)
//		, _value(value)
//	{}
//};
//
//template<class K, class V>
//class BSTree
//{
//	typedef BSTreeNode<K, V> Node;
//public:
//	bool Insert(const K& key, const V& value)
//	{
//		if (_root == nullptr)
//		{
//			_root = new Node(key,value);
//			return true;
//		}
//
//		Node* parent = nullptr;
//		Node* cur = _root;
//		while (cur)
//		{
//			if (cur->_key < key)
//			{
//				parent = cur;
//				cur = cur->_right;
//			}
//			else if (cur->_key > key)
//			{
//				parent = cur;
//				cur = cur->_left;
//			}
//			else
//			{
//				return false;
//			}
//		}
//
//		cur = new Node(key,value);
//		if (parent->_key < key)
//		{
//			parent->_right = cur;
//		}
//		else
//		{
//			parent->_left = cur;
//		}
//		return true;
//	}
//
//	Node* Find(const K& key)
//	{
//		Node* cur = _root;
//		while (cur)
//		{
//			if (cur->_key < key)
//				cur = cur->_right;
//			else if (cur->_key > key)
//				cur = cur->_left;
//			else
//				return cur;
//		}
//		return nullptr;
//	}
//
//	bool Erase(const K& key)
//	{
//		Node* parent = nullptr;
//		Node* cur = _root;
//
//		while (cur)
//		{
//			if (cur->_key < key)
//			{
//				parent = cur;
//				cur = cur->_right;
//			}
//			else if (cur->_key > key)
//			{
//				parent = cur;
//				cur = cur->_left;
//			}
//			else
//			{
//				//找到了，开始删除
//				//1，左为空
//				//2，右为空
//				//3，左右都不为空
//				if (cur->_left == nullptr)
//				{
//					if (cur == _root)
//					{
//						_root = cur->_right;
//					}
//					else
//					{
//						if (parent->_right == cur)
//							parent->_right = cur->_right;
//						else
//							parent->_left = cur->_right;
//					}
//					
//					delete cur;
//				}
//				else if (cur->_right == nullptr)
//				{
//					if (cur == _root)
//					{
//						_root = cur->_left;
//					}
//					else
//					{
//						if (parent->_left == cur)
//							parent->_left = cur->_left;
//						else
//							parent->_right = cur->_left;
//					}
//					
//					delete cur;
//				}
//				else
//				{
//					Node* rightMinParent = cur;
//					Node* rightMin = cur->_right; 
//					while (rightMin->_left)
//					{
//						rightMinParent = rightMin;
//						rightMin = rightMin->_left;
//					}
//
//					cur->_key = rightMin->_key;
//
//					if (rightMin == rightMinParent->_left)
//						rightMinParent->_left = rightMin->_right;
//					else
//						rightMinParent->_right = rightMin->_left;
//
//					delete rightMin;
//				}
//
//				return true;
//			}
//		}
//
//		return false;
//	}
//
//	void _InOrder(Node* root)
//	{
//		if (root == nullptr)
//			return;
//
//		_InOrder(root->_left);
//		cout << root->_key << ":"<< root->_value << endl;
//		_InOrder(root->_right);
//	}
//	void InOrder()
//	{
//		_InOrder(_root);
//		cout << endl;
//	}
//
//private:
//	Node* _root = nullptr;
//};
//
//void Test()
//{
//	BSTree<string, string>dict;
//	dict.Insert("sort", "排序");
//	dict.Insert("string", "字符串");
//	dict.Insert("tree", "树");
//	dict.Insert("insert", "插入");
//
//	string str;
//	while (cin >> str)
//	{
//		BSTreeNode<string, string>* ret = dict.Find(str);
//		if (ret)
//			cout << ret->_value << endl;
//		else
//			cout << "没有此单词" << endl;
//	}
//}
//
//void Test2()
//{
//	string strs[] = { "西瓜", "苹果", "香蕉", "西瓜", "哈密瓜", "苹果", "西瓜", "香蕉", "西瓜", "西瓜", "西瓜" };
//	BSTree<string, int> countTree;
//	for (auto str : strs)
//	{
//		BSTreeNode<string, int>*ret = countTree.Find(str);
//		if (ret == nullptr)
//			countTree.Insert(str, 1);
//		else
//			ret->_value++;
//	}
//
//	countTree.InOrder();
//}
//
//int main()
//{
//	Test2();
//
//	system("pause");
//	return 0;
//}