#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//函数
//用函数得到两个数中的最大值
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a,b);
//	printf("max = %d\n", max);
//	return 0;
//}


//用函数交换两个数的值
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//用函数的方法打印100-200之间的素数
//是素数返回1，不是素数返回0
//int is_pirme(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	//if (n == j)
//			return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_pirme(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//用函数的方法在屏幕上打印1000-2023之间的闰年。是闰年返回1，不是返回0
//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2023; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	printf("\n");
//	return 0;
//}


//用函数的方法实现二分查找有序数组中是否有某个数,找不到返回-1
//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//			left = mid+1;
//		else if (k < arr[mid])
//			right = mid-1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


//写一个函数，当调用该函数时num加一
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}


//链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//函数声明和函数定义
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d", sum);
	return 0;
}