//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int search(int arr[], int size, int a)
//{
//	int left, right;
//	left = 0;
//	right = size - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (right + left) / 2;
//		if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}

	//int i;
	//for (i = 0; i < size; i++)
	//{
	//	if (arr[i] == a)
	//	{
	//		return i;
	//	}
	//}
	//return 0;


//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	
//	printf("%d\n", search(arr, 10, 5));
//
//	system("pause");
//	return 0;
//}