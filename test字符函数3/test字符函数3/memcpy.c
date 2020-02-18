#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void* my_memcpy(void* dest,const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

int main()
{
	char dest[] = "helloworld!";
	char src[] = "**6";
	//printf("%s\n", memcpy(dest, src, 3));// **6loworld!
	//printf("%s\n", memcpy(dest+4, src+1, 1));// *world!

	printf("%s\n", my_memcpy(dest, src, 3));// **6loworld!
	printf("%s\n", my_memcpy(dest + 4, src + 1, 1));// *world!
	system("pause");
	return 0;
}