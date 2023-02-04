#define _CRT_SECURE_NO_WARNINGS//解决不安全函数问题

#include <stdio.h>

////int main()/*主函数--程序的入口，有且仅有一个
//			main前面的int表示main函数调用返回一个整数值*/
//{
	//打印输出hello  world
	//printf("hello  world\n");
	

	//打印输出字符
	//char ch = 'A';//定义一块内存空间ch，并赋值字符A
	//printf("%c\n", ch);//表示以字符的格式打印ch。%c--打印字符格式的数据

	//打印输出整型数据
	//int age = 24;
	//printf("%d\n", age);

	//打印单精度浮点数
	//float f = 5.0;
	//printf("%f\n", f);

	//打印双精度浮点数
	//double d = 3.14;
	//printf("%lf\n", d);//%lf表示打印双精度浮点数

	//计算不同数据类型的大小
	//printf("%d\n", sizeof(char));//1
	//printf("%d\n", sizeof(short));//2
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(long));//4或8,c语言规定sizeof(long)>=sizeof(int),具体值与平台有关
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8

	//根据实际问题选择合适的数据类型申请内存空间
	//年龄
//	short age = 20;//向内存申请2个字节来存放20
//	float weight = 98.6f;//向内存申请4个字节，存放小数。98.6f中的f指定这个数为单精度类型
//	printf("%d\n", age);
//	printf("%f\n", weight);
//
//	return 0;//返回0
//}

//int num2 = 20;//全局变量--定义在代码块（{}）之外的变量
//int main()
//{
//	int num1 = 10;//局部变量--定义在代码块（{}）内部的变量
//	return 0;
//}

//int a = 20;
//int main()
//{
//	//int a = 10;
//	//局部变量和全局变量的名字建议不要相同--容易误会，产生bug
//	//当全局变量和局部变量的名字相同时，局部变量优先
//	printf("%d\n", a);//输出10
//	return 0;
//}

//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据--使用输入函数
//	scanf("%d%d", &num1, &num2);//&--取地址符号
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

int main()
{
	//未声明的标识符
	//声明extern外部符号的
	extern int val_g;
	printf("val_g = %d\n", val_g);
	return 0;
}