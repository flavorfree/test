#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstring>
using namespace std;

struct student{
	char name[32];
	int age;
	int classid;
	bool sex;
};

bool cmpEql(student a, student b)
{
	return a.age == b.age;
}

int countS(student *st, int n,student value, bool(*cmp)(student, student) = cmpEql)
{
	int i;
	int count = 0;

	for (i = 0; i < n; i++)
	{
		if (cmp(st[i], value))
		{
			count++;
		}
	}
	return count;
}

bool cmpEqlname(student a, student b)
{
	return strcmp(a.name,b.name) ? false : true;
}

bool cmpEqlSex(student a, student b)
{
	return a.sex == b.sex;
}

int main()
{
	student st[ ] = { { "xiao", 21, 1, true },
					 {"lao", 20, 1, false},
					 { "gao", 21, 1, false },
					 {"mei", 18, 2, true}, 
					 {"shuai", 22, 2, true},
					 {"gao", 21, 1, false}
	};

	student test = { "gao", 21, 1, false};

	cout << countS(st, 6, test) << endl;

	system("pause");
	return 0;
}