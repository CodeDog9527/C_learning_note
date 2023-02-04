#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//创建结构体
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
//int main()
//{
//
//	struct Book b1 = { "C语言程序设计", 55 };
//	printf("书名：《%s》\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格：%d元\n", b1.price);
//	return 0;
//}


//用指针访问结构体中成员
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计", 55 };
//	struct Book* pb = &b1;
//	//strcpy(b1.name, "C++");//用库函数strcpy更改字符数组name中的内容
//	printf("书名：%s\n", (*pb).name);
//	printf("价格：%d\n", (*pb).price);
//	printf("书名：%s\n", pb->name);
//	printf("价格：%d\n", pb->price);//注意两种不同的写法
//}