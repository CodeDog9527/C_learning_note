#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//函数递归
//输入一个数，按顺序打印出数中的各个数字,用空格隔开
//void print(int  n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}


//编写函数不允许创建临时变量，求字符串的长度
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "hello world";
	//int len = strlen(arr);
	//printf("%d\n", len);
	int len = my_strlen(arr);//数组传参，传过去的不是整个数组，而是数组第一个元素的地址
	printf("len=%d\n", len);
	return 0;
}