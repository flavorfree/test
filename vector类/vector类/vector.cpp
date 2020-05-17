#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<assert.h>
using namespace std;

namespace zd
{
	template <class T>
	class vector
	{
	public:
		typedef T* iterator;	//vector��������һ��ԭ��ָ��

		vector()	//����
			:_start(nullptr)
			,_finish(nullptr)
			,_end_of_storage(nullptr)
		{}

		vector(const vector<T>& v)	//��������
		{
			_start = new T[v.size()];
			memcpy(_start, v._start, sizeof(T)*v.size());
			_finish = _start + v.size();
			_end_of_storage = _start + v.size();
		}

		vector<T>& operator = (const vector<T> v)	//��ֵ����
		{
			//swap(_start, v._start);
			//swap(_finish, v._finish);
			//swap(_end_of_storage, v._end_of_storage);

			swap(v);
			return *this;
		}

		~vector()	//����
		{
			delete[] _start;
			_start = _finish = _end_of_storage = nullptr;
		}

		void swap(vector<T>& v)	//v1.swap(v2;
		{
			swap(_start, v._start);
			swap(_finish, v._finish);
			swap(_end_of_storage, v._end_of_storage);
		}

		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

		void resize(size_t n, const T& val = T())
		{
			if (n < size())
			{
				_finish = _start + n;
			}
			if (n > capacity())
			{
				reserve(n);	//���ݣ����ݺ������Ϊ��size() > n > capacity()
			}
			while(_finish != _start + n)	//size() > n > capacity()
			{
				_finish = val;
				++_finish;
			}
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t sz = size();
				T* tmp = new T[n];
				if (_start)	//�ж������Ƿ�Ϊ��
				{
					memcpy(tmp, _start, sizeof(T)*sz);
					delete[] _start;
				}

				_start = tmp;
				_finish = _start + sz;
				_end_of_storage = _start + n;
			}
		}

		void push_back(const T& x)	//β��
		{
			if (_finish == _end_of_storage)
			{
				size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
				reserve(newcapacity);
			}

			*_finish = x;
			++_finish;

			//insert(end(), x) ���ô���
		}

		void pop_back()	//ͷ��
		{
			assert(_finish > _start);
			--_finish;
		}

		void insert(iterator pos, const T& x)	//����
		{
			assert(pos < _finish && pos >= _start);
			if (_finish = _end_of_storage)
			{
				size_t n = pos - _start;
				size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
				reserve(newcapacity);
				pos = _start + n;	//���ݺ�,_startλ�ÿ��ܸı��ˣ�����Ҫ�ҵ���ȷ��posλ��
			}

			iterator end = _finish-1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				end--;
			}

			*pos = x;
			++_finish;
		}

		void erase(iterator pos)	//ɾ��
		{
			assert(pos < _finish && pos >= _start);
			iterator start = pos;
			while (start != _finish)
			{
				*start = *(start + 1);
				start++;
			}
			--_finish;
		}

		size_t size() const
		{
			return _finish - _start;
		}

		size_t capacity() const
		{
			return _end_of_storage - _start;
		}

		T& operator[] (size_t pos)	//[]����
		{
			return _start[pos];
		}

		const T& operator[] (size_t pos) const
		{
			return _start[pos];
		}

	private:
		iterator _start;			//ָ�����ݿ�Ŀ�ʼ
		iterator _finish;			//ָ����Ч���ݵ�β
		iterator _end_of_storage;	//ָ��洢������β
	};

	void test1()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);

		v.pop_back();

		v.insert(v.begin(), 30);

		v.erase(v.begin());

		for (size_t i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << endl;

		vector<int>::iterator it = v.begin();
		while (it != v.end())
			cout << *it++ << " ";
		cout << endl;

		for (auto i : v)
			cout << i << " ";
		cout << endl;
	}

	void test2()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);

		//vector<int> copy(v);
		vector<int> copy = v;

		for (auto i : v)
			cout << i << " ";
		cout << endl;
	}
}

int main()
{
	zd::test2();

	system("pause");
	return 0;
}