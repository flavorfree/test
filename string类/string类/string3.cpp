#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<assert.h>
using namespace std;

namespace zd
{
	class string
	{
	public:
		string(const char* str = "")
			:_str(new char[strlen(str) + 1])
		{
			strcpy(_str, str);
			_size = strlen(str);
			_capacity = _size;
		}

		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}

		string(const string& s)
			:_str(new char[s._size+1])
			, _size(s._size)
			, _capacity(s._size)
		{
			strcpy(_str, s._str);
		}

		string& operator = (const string& s)
		{
			if (this != &s)
			{
				delete[] _str;
				_str = new char[s._size + 1];
				strcpy(_str, s._str);
				_size = s._size;
				_capacity = s._capacity;
			}
			return *this;
		}

		typedef const char* const_iterator;	//const迭代器
		typedef char* iterator;	//迭代器

		const_iterator begin() const
		{
			return _str;
		}
		const_iterator end() const
		{
			return _str + _size;
		}

		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}


		const char* c_str()
		{
			return _str;
		}

		char& operator [] (size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}

		const char& operator [] (size_t pos) const
		{
			assert(pos < _size);
			return _str[pos];
		}

		size_t size() const
		{
			return _size;
		}

		size_t capacity() const
		{
			return _capacity;
		}

		void reserve(size_t n)
		{
			if (n > _capacity)
			{
				char* tmp = new char[n + 1];
				strcpy(tmp, _str);
				delete[] _str;
				_str = tmp;
				_capacity = n;
			}
		}

		void push_back(char ch)	//尾插(一个字符)
		{
			if (_size == _capacity)
			{
				//开心的空间，拷贝数据，进行扩容
				reserve(_capacity * 2);
			}

			_str[_size] = ch;
			++_size;
			_str[_size] = '\0';
		}

		void append(const char* str)	//尾插（字符串）
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				//扩容
				reserve(_size + len);
			}
			strcpy(_str + _size, str);
			_size += len;
		}

		string& operator += (char ch)
		{
			push_back(ch);
			return *this;
		}

		string& operator += (char* ch)
		{
			append(ch);
			return *this;
		}

		string& operator += (const string& s)
		{
			append(s._str);
			return *this;
		}

		string operator+(char* ch)
		{
			string tmp(*this);
			tmp.append(ch);
			return tmp;
		}

		void insert(size_t pos, char ch)
		{
			assert(pos <= _size);
			if (_size == _capacity)
			{
				if (_capacity == 0)
					reserve(8);
				else
					reserve(_capacity * 2);
			}
			size_t end = _size + 1;
			while (end > pos)
			{
				_str[end] = _str[end - 1];
				--end;
			}
			_str[pos] = ch;
			++_size;
		}

		void insert(size_t pos, const char* str)
		{
			assert(pos <= _size);

			//如果空间不够先进行增容
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}

			//挪动数据
			int end = _size;
			while (end >= (int)pos)
			{
				_str[end + len] = _str[end];
				--end;
			}
			while (*str)
			{
				_str[pos++] = *str++;
			}
			_size += len;
		}

		void erase(size_t pos, size_t len = npos)
		{
			assert(pos < _size);

			if (len >= _size - pos)
			{
				_str[pos] = '/0';
				_size = pos;
			}
			else
			{
				size_t i = pos + len;
				while (i <= _size)
				{
					_str[i - len] = _str[i];
					++i;
				}
				_size -= len;
			}
		}

		size_t find(const char* str, size_t pos = 0)
		{
			char* p = strstr(_str, str);
			if (p == nullptr)
				return npos;
			else
				return p - _str;
		}

		size_t find(char ch, size_t pos = 0)
		{
			for (size_t i = pos; i < _size; ++i)
			{
				if (_str[i] == ch)
				{
					return i;
				}
			}
			return npos;
		}

		bool operator < (const string& s)
		{
			int ret = strcmp(_str, s._str);
			return ret == 0;
		}

		bool operator == (const string& s)
		{
			int ret = strcmp(_str, s._str);
			return ret == 0;
		}

		bool operator <= (const string& s)
		{
			return *this < s || *this == s;
		}

		bool operator > (const string& s)
		{
			return !(*this <= s);
		}

		bool operator != (const string& s)
		{
			return !(*this == s);
		}

	private:
		char* _str;
		size_t _size;
		size_t _capacity;

		static size_t npos;
	};

	size_t string::npos = -1;

	string operator + (const string& s1, const string& s2)
	{
		string ret = s1;
		ret += s2;
		return ret;
	}

	ostream& operator << (ostream& out, const string& s)
	{
		for (size_t i = 0; i < s.size(); ++i)
		{
			out << s[i];
		}
		return out;
	}

	istream& operator >> (istream& in, string& s)
	{
		char ch = in.get();
		while (ch != ' ' && ch != '\n')
		{
			s += ch;
			ch = in.get();
		}
		return in;

	}
}

int main()
{
	zd::string s1("hello");
	cout << s1.c_str() << endl;

	zd::string s2 = "world";

	zd::string s3(s2);
	cout << s3.c_str() << endl;

	s2 = s1;
	s2 += ' ';
	s2 += s3;
	zd::string::iterator it = s2.begin();
	while (it != s2.end())
	{
		cout << *it;
		*it++;
	}
	cout << endl;
	for (auto e : s2)
	{
		cout << e << " ";
	}
	cout << endl;

	s3.insert(0, "zd");
	cout << s3.c_str() << endl;

	system("pause");
	return 0;
}