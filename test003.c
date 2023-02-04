#define _CRT_SECURE_NO_WARNINGS 1//让scanf错误失效

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{	
	//1、字面常量
	//3;
	//2000;
	//3.14;

	//2、const--常属性
	//const修饰的常变量，不能再次赋值变化
	//const int num = 4;
	//printf("%d\n", num);
	//num = 8;
	//printf("%d\n", num);
	//const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
	//int arr[n] = {0};//创建数组

//	return 0;
//}

//#define 定义的标识符常量
//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//
//	return 0;
//}

//枚举关键字--enum
//enum SEX
//{
//	MALE,
//	FEMALE,
//	SECRET
//};//MALE,FEMALE,SECRET--枚举常量
//
//int main()
//{
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}

//enum Color
//{
//	red,
//	yellow,
//	blue//本身所代表的值不能改变
//};
//
//int main()
//{
//	enum Color color = blue;//枚举常量定义一个变量color，枚举常量的值不可以更改，但定义的变量的值可以更改
//	//color = yellow;
//	printf("%d\n", color);
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0'};//也可以写成{ 'a', 'b', 'c',0 }
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	//char arr1[] = "abc";
//	//char arr2[] = { 'a', 'b', 'c'};
//	//printf("%d\n", strlen(arr1));//3
//	//printf("%d\n", strlen(arr2));//随机值
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0'};
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//3
//
//	return 0;
//}


//转义字符：改变字符原来的意思
//int main()
//{
//	printf("%c\n", '\'');//打印输出'
//	printf("%s\n", "\"");//打印输出"
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//计算字符串"c:\test\32\test.c"的长度
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\x61');//十六进制对应的ASCII的字码
//}


//int main()
//{
//	int input;
//	printf("你要好好学习吗？\n");
//	scanf("%d", &input);
//
//	if(input == 1)
//	{
//		printf("你将有一个好的生活！\n");
//	}
//	else
//	{
//		printf("种地去！\n");
//	}
//
//	return 0;
//}


////int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("敲一行代码:第%d行\n", line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("study harder\n");
//	return 0;
//}


//函数
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//int main()
//{
//	int sum;
//	sum = Add(100, 200);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//数组的使用
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个拥有十个数据的整型的数组
//	printf("%d\n,", arr[4]);//数组的下标从0开始，这里打印输出的是5
//	return 0;
//}


//将数组元素全部输出
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个拥有十个数据的整型的数组
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);//打印下标i对应的值
//		i++;//改变循环变量值
//	}
//}


//移位运算符
//int main()
//{
//	int a = 1;
//	int b = a << 2;//a左移2位
//	printf("%d\n", b);
//	return 0;
//}


//位操作：
//与操作
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);//打印输出1
//	return 0;
//}

//或操作
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);//打印输出7
//	return 0;
//}

//异或操作
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);//打印输出6
//	return 0;
//}


//sizeof求数组元素个数
//int main()
//{
//	int arr[10] = {0};
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}


//static的用法
// static修饰局部变量
//void test()
//{
//	static int a = 1;//static修饰局部变量，延长局部变量的生命周期
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();//跳到执行test里的语句
//		i++;
//	}
//	return 0;
//}

//static修饰全局变量
//改变了全局变量的作用域，使静态的全局变量只能在自己所在源文件中使用，出了源文件就没法再使用了
//int main()
//{
//	//extern--声明外部符号的
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}


//static作用于函数
//static修饰函数，将函数的外部链接属性变成内部链接属性
//extern int Add(int, int);//声明外部函数
//int main()
//{
//	int sum = Add(10, 20);
//	printf("sum = %d\n", sum);
//	return 0;
//


//#define定义的常量和宏
//#define定义的常量
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("a = %d\n", a);
//	return 0;
//}

//#define定义的宏
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);//max = (a>b?a:b)
//	printf("max = %d\n", max);
//	return 0;
//}


//打印地址
//int main()
//{
//	int a = 10;
//	int* p = &a;//指针变量。int*为p的类型；p叫做指针变量--是用来存放地址的
//	printf("%p\n", p);// 000000458090F864
//	printf("%p\n", &a);//000000458090F864
//	*p = 20;//*叫作解引用操作符，作用是找到p指向的对象（此处为a），并对其进行操作（此处为对其赋值为20）
//	printf("a = %d\n", a);//20
//	return 0;
//}


int main()
{
	char ch = 'w';
	char* pc = &ch;//指针大小与系统有关。64位系统为8个字节，32位系统为4个字节
	printf("%d\n", sizeof(pc));
	*pc = 'w';
	printf("%c\n", ch);
	return 0;
}