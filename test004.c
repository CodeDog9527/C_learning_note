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


//if多分支语句
//int main()
//{
//	int age = 100;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else if (age >= 90 && age < 100)
//		printf("长寿\n");
//	else if (age >= 100)
//		printf("恭喜你完成挑战！\n");
//	else
//		;
//	return 0;
//}

//注意下面的表达
//int main()
//{
//	int age = 10;
//	if (18 <= age < 28)//先判断18<=age，再将结果（此处为假，即0）与<28比较，此处为真（非0），故执行下面语句。此处语句起不到(age >= 18 && age < 28)的作用。
//		printf("青年\n");
//	return 0;
//}


//悬空else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//表达式为假
//		if (b == 2)//不执行
//			printf("HeHe\n");//不执行
//	else//不执行
//		printf("HaHa\n");//不执行。注意else的匹配规则，不要落入与谁对齐就是与谁匹配的误区
//	return 0;
//}
//可用大括号来改变if-else的匹配。如：
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("HeHe\n");
//	}
//	else//与if (a == 1)匹配
//		printf("HaHa\n");
//	return 0;
//}

//if表达式的更优写法
//int main()
//{
//	int num = 9;
//	if (10 == num)//常量在前，变量在右
//	{
//		printf("HeHe\n");
//	}
//	return 0;
//}


//判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//scanf函数返回值警告
//	if (1 == a%2)
//		printf("%d是一个奇数\n", a);
//	return 0;
//}

//练习：1、判断一个数是否为奇数，2、输出1-100之间的奇数
// 方案一
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//方案二
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}
//方案一和方案二的思想不同


//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//// default用于处理没有case值匹配的情况，可有可无
//	default:
//		printf("输入错误！\n");
//		break;
//	}
//	return 0;
//}


//求m,n的值？
//int main()
//{
//	int m = 2;
//	int n = 1;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);//m=5,n=3
//	return 0;
//}


//while循环
//在屏幕上打印1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//while循环中break的使用
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if(i == 5)
//			break;
//		printf("%d ", i);//1 2 3 4
//		i++;
//	}
//	return 0;
//}

//while循环中continue的使用
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//不执行本次循环中的后面的语句，直接跳到表达式进行判断，这里陷入死循环
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//getchar与putchar的使用
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//ctrl + z结束
	{
		putchar(ch);
	}
	return 0;
}