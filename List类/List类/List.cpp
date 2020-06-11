#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
#include<assert.h>
using namespace std;

namespace zd
{
	template<class T>
	struct __list_node
	{
		__list_node<T>* _next;
		__list_node<T>* _prev;
		T _data;

		__list_node(const T& x = T())	//���캯��
			: _data(x)
			, _next(nullptr)
			, _prev(nullptr)
		{}
	};

	template<class T, class Ref, class Ptr>
	struct __list_iterator
	{
		typedef __list_node<T> node;
		typedef __list_iterator<T, Ref, Ptr> Self;

		node* _node;

		__list_iterator(node* node)
			:_node(node)
		{}

		Ref operator*()		//��������ʹ��
		{
			return _node->_data;
		}

		Ptr operator->()	//�Զ�������ʹ��
		{
			return &_node->_data;	//������--_data��ַ,�൱��Date*
		}

		Self& operator++()	//ǰ��++
		{
			_node = _node->_next;
			return *this;
		}

		Self operator++(int)	//����++
		{
			Self tmp = *this;
			_node = _node->_next;

			return tmp;
		}

		Self& operator--()	//ǰ��--
		{
			_node = _node->_prev;
			return *this;
		}

		Self operator--(int)	//����--
		{
			Self tmp = *this;
			_node = _node->_prev;

			return tmp;
		}

		bool operator !=(const Self& it)
		{
			return _node != it._node;
		}

		bool operator ==(const Self& it)
		{
			return _node == it._node;
		}
	};

	template <class T>
	class list
	{
		typedef __list_node<T> node;
	public:
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;

		list()
		{
			_head = new node(T());
			_head->_next = _head;
			_head->_prev = _head;
		}

		list(const list<T>& l)	//��������
		{
			_head = new node;
			_head->_prev = _head;
			_head->_next = _head;

			//const_iterator it = l.begin();
			auto it = l.begin();
			while (it != l.end())
			{
				push_back(*it);
				++it;
			}
		}

		//ist<T>& operator=(const list<T>& l)	//��ͳд��
		//
		//	clear();
		//	 
		//	auto it = l.begin();
		//	while (it != l.end())
		//	{
		//		push_back(*it);
		//		++it;
		//	}
		//	return *this;
		//

		list<T>& operator=(list<T> l)	//�ִ�д��
		{
			swap(_head, l._head);
			return *this;
		}

		~list()
		{
			clear();

			delete _head;
			_head = nullptr;
		}

		void clear()
		{
			iterator it = begin();
			while (it != end())
			{
				it = erase(it);
			}
		}

		iterator begin()	//ͷ������һ���ڵ�
		{
			return iterator(_head->_next);
		}

		iterator end()	//headͷ�����end
		{
			return iterator(_head);
		}

		const_iterator begin()const	//ͷ������һ���ڵ�
		{
			return const_iterator(_head->_next);
		}

		const_iterator end()const	//headͷ�����end
		{
			return const_iterator(_head);
		}

		//void push_back(const T& x)
		//{
		//	node* tail = _head->_prev;	//��β���
		//	node* newnode = new node(x);

		//	tail->_next = newnode;
		//	newnode->_prev = tail;
		//	newnode->_next = _head;
		//	_head->_prev = newnode;
		//}
		void push_back(const T& x)
		{
			insert(end(), x);
		}

		void push_front(const T& x)
		{
			insert(begin(), x);
		}

		void pop_back()
		{
			erase(--end());
		}

		void pop_front()
		{
			erase(begin());
		}

		void insert(iterator pos, const T& x)
		{
			node* cur = pos._node;
			node* prev = cur->_prev;
			node* newnode = new node(x);

			prev->_next = newnode;
			newnode->_prev = prev;
			newnode->_next = cur;
			cur->_prev = newnode;
		}

		iterator erase(iterator pos)	//erase������һ��λ�õĵ�����
		{
			node* cur = pos._node;
			assert(cur != _head);

			node* prev = cur->_prev;
			node* next = cur->_next;

			prev->_next = next;
			next->_prev = prev;

			delete cur;

			return iterator(next);
		}

	private:
		node* _head;
	};

	void print_list(const list<int>& l)
	{
		list<int>::const_iterator it = l.begin();
		while (it != l.end())
		{
			cout << *it << " ";
			it++;
		}
		cout << endl;
	}

	void test1()
	{
		list<int> l;
		l.push_back(1);
		l.push_back(2);
		l.push_back(3);
		l.push_back(4);
		print_list(l);

		list<int>::iterator it = l.begin();
		while (it != l.end())
		{
			//*it *= 2;		//it.operator*() *= 2;

			if (*it % 2 == 0)
				it = l.erase(it);
			else
				it++;
		}
		cout << endl;
		print_list(l);
	}

	struct Date
	{
		int _year = 1900;
		int _month = 1;
		int _day = 1;
	};

	void test2()
	{
		list<Date> l;
		l.push_back(Date());
		l.push_back(Date());

		//list<Date>::iterator it = l.begin();
		auto it = l.begin();
		while (it != l.end())
		{
			//cout << *it << " ";
			cout << it->_year << "_" << it->_month << "_" << it->_day << endl;
			it++; 
		}
	}

	void test3()
	{
		list<int> l;
		l.push_back(1);
		l.push_back(2);
		l.push_back(3);
		l.push_back(4);
		print_list(l);

		list<int> copy;
		copy = l;
		print_list(copy);
	}
}

int main()
{
	zd::test3();

	system("pause");
	return 0;
}