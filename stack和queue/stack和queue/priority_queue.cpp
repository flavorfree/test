#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
//#include<queue>
#include<vector>
#include<functional>
using namespace std;

//返回函数不是函数，是一个类，行为像函数一样，函数对象

namespace zd
{
	template<class T>
	class my_less
	{
	public:
		bool operator()(const T& l, const T& r)
		{
			return l < r;
		}
	};

	template<class T>
	class my_greater
	{
	public:
		bool operator()(const T& l, const T& r)
		{
			return l > r;
		}
	};

	template<class T, class Container = vector<T>,class compare = my_less<T>>
	class priority_queue	//默认是大堆
	{
	public:
		void adjust_up(int child)
		{
			compare com;

			int parent = (child - 1) / 2;
			while (child > 0)
			{
				//if (_con[parent] < _con[child])
				if (com(_con[parent], _con[child]))
				{
					swap(_con[child], _con[parent]);
					child = parent;
					parent = (child - 1) / 2;
				}
				else
					break; 
			}
		}

		void push(const T& x)	//时间复杂度：O(logN)
		{
			_con.push_back(x);
			adjust_up(_con.size() - 1);
		}

		void adjust_down(int root)
		{
			compare com;

			int parent = root;
			int child = parent * 2 + 1;
			while (child < (int)_con.size())
			{
				//if (child + 1 < (int)_con.size() && _con[child] < _con[child + 1])
				if (child + 1 < (int)_con.size() && com(_con[child], _con[child + 1]))
				{
					++child;
				}
				//if (_con[parent] < _con[child])
				if (com(_con[parent], _con[child]))
				{
					swap(_con[parent], _con[child]);
					parent = child;
					child = parent * 2 + 1;
				}
				else
					break;
			}
		}

		void pop()	//时间复杂度：O(logN)
		{
			swap(_con[0], _con[_con.size() - 1]);
			_con.pop_back();

			adjust_down(0);
		}

		T& top()
		{
			return _con[0];
		}

		size_t size()
		{
			return _con.size();
		}

		bool empty()
		{
			return _con.empty();
		}

	private:
		Container _con;
	};

	void test()
	{
		priority_queue<int> maxq;
		maxq.push(5);
		maxq.push(3);
		maxq.push(1);
		maxq.push(4);
		maxq.push(2);
		while (!maxq.empty())
		{
			cout << maxq.top() << " ";
			maxq.pop();
		}
		cout << endl;


		priority_queue<int, vector<int>, my_greater<int>> minq;
		minq.push(5);
		minq.push(3);
		minq.push(1);
		minq.push(4);
		minq.push(2);
		while (!minq.empty())
		{
			cout << minq.top() << " ";
			minq.pop();
		}
		cout << endl;
	}
}


//void test_priority_queue()
//{
//	//1.排序(辅助)
//	//topk问题
//	//默认大的优先级高
//	//priority_queue底层是一个堆
//	priority_queue<int> maxq;
//	maxq.push(5);
//	maxq.push(3);
//	maxq.push(1);
//	maxq.push(4);
//	maxq.push(2);
//	while (!maxq.empty())
//	{
//		cout << maxq.top() << " ";
//		maxq.pop();
//	}
//	cout << endl;
//
//
//	priority_queue<int, vector<int>, greater<int>> minq;	//仿函数、函数对象
//	minq.push(5);
//	minq.push(3);
//	minq.push(1);
//	minq.push(4);
//	minq.push(2);
//
//	while (!minq.empty())
//	{
//		cout << minq.top() << " ";
//		minq.pop();
//	}
//	cout << endl;
//}

int main()
{
	//test_priority_queue();

	zd::test();

	system("pause");
	return 0;
}