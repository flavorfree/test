#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//�ִ�stringд��

//namespace zd
//{
//	class string
//	{
//	public:
//		string(const char* str = "")	//���캯��
//			:_str(new char[strlen(str) + 1])
//		{
//			strcpy(_str, str);
//		}
//
//		~string()	//��������
//		{
//			delete[] _str;
//			_str = nullptr;
//		}
//
//		string(const string& s)	//�������죬���
//			:_str(nullptr)
//		{
//			string tmp(s._str);	//���ù��캯��
//			swap(_str, tmp._str);
//		}
//
//		string& operator = (string s)	//��ֵ����
//		{
//			swap(_str, s._str);
//			return *this;
//		}
//
//		const char* c_str()
//		{
//			return _str;
//		}
//
//		char& operator [] (size_t pos)
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
//	zd::string s2 = "world";
//	cout << s2.c_str() << endl;
//
//	s1 = s2;
//	cout << s1.c_str() << endl;
//
//	s1[0] = 'p';
//	cout << s1.c_str() << endl;
//
//	zd::string s3(s1);
//	cout << s3.c_str() << endl;
//
//	system("pause");
//	return 0;
//}