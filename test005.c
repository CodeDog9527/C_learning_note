#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);//输入密码并存放在password数组中
//	//输入缓冲区中还剩一个'\n'
//	//用getchar把'\n'读走
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):");//Y/N
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功！");
//	}
//	else
//	{
//		printf("确认失败！");
//	}
//	return 0;
//}


//for循环
//打印输出1-10的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if(i==5)
//		break;
//		printf("%d ", i);
//	}
//}

//不可在for循环体内修改循环变量，防止for循环失去控制
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i = 5)//修改了循环变量i的值
//			printf("%d ", i);
//	}
//	return 0;
//}

//建议for语句的循环控制变量的取值采用“前闭后开区间”的写法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//for循环的变种
//变种1
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;;)//省略判断条件，恒为真
//	{
//		for (;;)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//j到10不再执行该循环
//		{
//			printf("hehe\n");//打印十个hehe
//		}
//	}
//	return 0;
//}

//注意
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)//j到10跳回外层循环，下次再进入时重新初始化为0
//		{
//			printf("hehe\n");//打印100次
//		}
//	}
//	return 0;
//}

//变种2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//可以使用逗号表达式
//	{
//		printf("hehe\n");//打印两次
//	}
//	return 0;
//}

//一道笔试题
//请问循环多少次？
//int main()
//{
//	int j = 0;
//	int k = 0;
//	for (j = 0, k = 0; k = 0; j++, k++)//判断条件处将0赋值给k，0为假，不进循环，故循环0次
//	{
//		k++;
//	}
//	return 0;
//}

//do...while循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//break的使用
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//continue的使用
//int main()
//{
//	int i = 1;
//	do
//	{//死循环
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//练习
//1、计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int f = 1;
//	scanf("%d", &n);	
//	for (i = 1; i <= n; i++)
//	{
//		f*=i;
//	}
//	printf("%d\n", f);
//	return 0;
//}

//计算1！+2！+3！+...+10！
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 0;
//	int f = 1;
//	for (n = 1; n <= 3; n++)
//	{
//		f = 1;
//		for (i = 1; i <= n; i++)
//		{	
//			f *= i;
//		}//n的阶乘	
//		sum += f;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//优化上一个代码
//int main()
//{
//	int n = 0;
//	int f = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		f *= n;
//		sum += f;
//	}
//	printf("%d", sum);
//	return 0;
//}

//在一个有序数组中查找具体的某个数字n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//写一个代码，在arr数组中（有序的）找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是%d\n", i);
//			break; 
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//二分查找法优化上一个代码
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,17 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//4、编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to here !!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(700);//延时700ms
//		system("cls");//清屏
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//5、编程实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，
//如果密码正确，则提示登录成功；如果三次均输入错误，则退出程序）
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);
		if (strcmp(password, "123456")==0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均错误，退出程序\n");
	}
	return 0;
}