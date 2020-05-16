#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<list>
//#include<deque>
//using namespace std;
//
//namespace zd
//{
//	template<class T,class Container = deque<int>>
//	class queue
//	{
//	public: 
//		void push(const T& x)
//		{
//			_con.push_back(x);
//		}
//
//		void pop()
//		{
//			_con.pop_front();
//		}
//
//		T& front()
//		{
//			return _con.front();
//		}
//
//		T& back()
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
//		//queue<int, list<int>> q;
//		queue<int> q;
//		q.push(1);
//		q.push(2);
//		q.push(3);
//		q.push(4);
//
//		while (!q.empty())
//		{
//			cout << q.front() << " ";
//			q.pop();
//		}
//		cout << endl;
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