#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
////��ͳд��
//
////��ǳ��������
//namespace zd
//{
//
//	class string
//	{
//	public:
//		string(const char* str = " ")	//����
//			:_str(new char[strlen(str)+1])
//		{
//			strcpy(_str, str);
//		}
//
//		~string()	//����
//		{
//			delete[] _str;
//			_str = nullptr;
//		}
//
//		string(const string& s)		//��������
//			:_str(new char[strlen(s._str) + 1])
//		{
//			strcpy(_str, s._str);
//		}
//
//		string& operator = (const string& s)	//��ֵ����
//		{
//			if (this != &s)
//			{
//				delete[] _str;
//				_str = new char[strlen(s._str) + 1];
//				strcpy(_str, s._str);
//			}
//			return *this;
//		}
//
//		const char* c_str()
//		{
//			return _str;
//		}
//
//		char& operator[](size_t pos)	//[]����
//		{
//			return _str[pos];
//		}
//
//	private:
//		char* _str;
//	};
//}
//
//int main()
//{
//	zd::string s1("hello");
//	cout << s1.c_str() << endl;
//
//	s1[1] = 'x';
//	cout << s1.c_str() << endl;
//
//	zd::string s2(s1);
//	cout << s2.c_str() << endl;
//
//	zd::string s3 = s1;
//	cout << s3.c_str() << endl;
//
//	system("pause");
//	return 0;
//}