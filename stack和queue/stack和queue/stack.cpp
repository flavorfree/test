#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<vector>
//#include<list>
//#include<deque>
//using namespace std;
//
//namespace zd
//{
//	//适配器模式	转换
//	template<class T,class Container = deque<T>>	//线性表容器(含有缺省参数)
//	class stack
//	{
//	public:
//		void push(const T& x)
//		{
//			_con.push_back(x);
//		}
//
//		void pop()
//		{
//			_con.pop_back();
//		}
//
//		T& top()
//		{
//			return _con.back();
//		}
//
//		size_t size()
//		{
//			return _con.size();
//		}
//
//		bool empty()
//		{
//			return _con.empty();
//		}
//
//	private:
//		Container _con;
//	};
//
//	void test1()
//	{
//		//zd::stack<int, std::vector<int>> s;
//		zd::stack<int, std::list<int>> s;
//		//stack<int> s;
//		s.push(1);
//		s.push(2);
//		s.push(3);
//		s.push(4);
//
//		while (!s.empty())
//		{
//			cout << s.top() << " ";
//			s.pop();
//		}
//	}
//}
//
//int main()
//{
//	zd::test1();
//
//	system("pause");
//	return 0;
//}