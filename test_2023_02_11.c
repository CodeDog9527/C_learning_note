#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//求两个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//求1000到2000之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//能被4整除，并且不能被100整除的是闰年
//		//能被400整除的是闰年
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//打印输出100到200之间的素数
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n <i; n++)
//		{
//			if (i % n==0)
//			{
//				break;
//			}
//		}
//		if (n == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//优化上一个代码
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n < sqrt(i); n++)//sqrt是开平方数学函数，头文件#include <math.h>
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		if (n > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//计算1--100中有多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//计算1/1-1/2+1/3+...+1/99-1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//求十个整数中的最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//在屏幕上打印9*9乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜数字游戏
//void menu()
//{
//	printf("********************\n");
//	printf("**1.play    0.exit**\n");
//	printf("********************\n");
//}
//void game()
//{
//	int guess = 0;//接收猜的数字
//	//1.生成一个随机数	
//	int ret = 0;
//	ret = rand()%100+1;//生成1-100之间的随机数
//	//printf("%d\n", ret);
//	//2.猜数字	
//	while (1)
//	{
//		printf("请猜数字>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{		
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	//time_t
//	srand((unsigned int)time(NULL));//NULL是空指针，没有什么实际的效果
//	int input = 0;
//	do
//	{
//		menu();//menu()函数
//		printf("请选择->:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//game()函数,猜数字游戏的过程
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto语句的使用
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//60秒后关机
	again:
	printf("你的电脑将在一分钟之内关机.输入：我是猪，取消关机。\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//strcmp--比较两个字符串长度是否相等
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}