#define _CRT_SECURE_NO_WARNINGS 1//��scanf����ʧЧ

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
	//1�����泣��
	//3;
	//2000;
	//3.14;

	//2��const--������
	//const���εĳ������������ٴθ�ֵ�仯
	//const int num = 4;
	//printf("%d\n", num);
	//num = 8;
	//printf("%d\n", num);
	//const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
	//int arr[n] = {0};//��������

//	return 0;
//}

//#define ����ı�ʶ������
//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//
//	return 0;
//}

//ö�ٹؼ���--enum
//enum SEX
//{
//	MALE,
//	FEMALE,
//	SECRET
//};//MALE,FEMALE,SECRET--ö�ٳ���
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
//	blue//�����������ֵ���ܸı�
//};
//
//int main()
//{
//	enum Color color = blue;//ö�ٳ�������һ������color��ö�ٳ�����ֵ�����Ը��ģ�������ı�����ֵ���Ը���
//	//color = yellow;
//	printf("%d\n", color);
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0'};//Ҳ����д��{ 'a', 'b', 'c',0 }
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
//	//printf("%d\n", strlen(arr2));//���ֵ
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0'};
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//3
//
//	return 0;
//}


//ת���ַ����ı��ַ�ԭ������˼
//int main()
//{
//	printf("%c\n", '\'');//��ӡ���'
//	printf("%s\n", "\"");//��ӡ���"
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//�����ַ���"c:\test\32\test.c"�ĳ���
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\x61');//ʮ�����ƶ�Ӧ��ASCII������
//}


//int main()
//{
//	int input;
//	printf("��Ҫ�ú�ѧϰ��\n");
//	scanf("%d", &input);
//
//	if(input == 1)
//	{
//		printf("�㽫��һ���õ����\n");
//	}
//	else
//	{
//		printf("�ֵ�ȥ��\n");
//	}
//
//	return 0;
//}


////int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("��һ�д���:��%d��\n", line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("study harder\n");
//	return 0;
//}


//����
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


//�����ʹ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ��ӵ��ʮ�����ݵ����͵�����
//	printf("%d\n,", arr[4]);//������±��0��ʼ�������ӡ�������5
//	return 0;
//}


//������Ԫ��ȫ�����
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ��ӵ��ʮ�����ݵ����͵�����
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);//��ӡ�±�i��Ӧ��ֵ
//		i++;//�ı�ѭ������ֵ
//	}
//}


//��λ�����
//int main()
//{
//	int a = 1;
//	int b = a << 2;//a����2λ
//	printf("%d\n", b);
//	return 0;
//}


//λ������
//�����
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);//��ӡ���1
//	return 0;
//}

//�����
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);//��ӡ���7
//	return 0;
//}

//������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);//��ӡ���6
//	return 0;
//}


//sizeof������Ԫ�ظ���
//int main()
//{
//	int arr[10] = {0};
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}


//static���÷�
// static���ξֲ�����
//void test()
//{
//	static int a = 1;//static���ξֲ��������ӳ��ֲ���������������
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();//����ִ��test������
//		i++;
//	}
//	return 0;
//}

//static����ȫ�ֱ���
//�ı���ȫ�ֱ�����������ʹ��̬��ȫ�ֱ���ֻ�����Լ�����Դ�ļ���ʹ�ã�����Դ�ļ���û����ʹ����
//int main()
//{
//	//extern--�����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}


//static�����ں���
//static���κ��������������ⲿ�������Ա���ڲ���������
//extern int Add(int, int);//�����ⲿ����
//int main()
//{
//	int sum = Add(10, 20);
//	printf("sum = %d\n", sum);
//	return 0;
//


//#define����ĳ����ͺ�
//#define����ĳ���
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("a = %d\n", a);
//	return 0;
//}

//#define����ĺ�
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);//max = (a>b?a:b)
//	printf("max = %d\n", max);
//	return 0;
//}


//��ӡ��ַ
//int main()
//{
//	int a = 10;
//	int* p = &a;//ָ�������int*Ϊp�����ͣ�p����ָ�����--��������ŵ�ַ��
//	printf("%p\n", p);// 000000458090F864
//	printf("%p\n", &a);//000000458090F864
//	*p = 20;//*���������ò��������������ҵ�pָ��Ķ��󣨴˴�Ϊa������������в������˴�Ϊ���丳ֵΪ20��
//	printf("a = %d\n", a);//20
//	return 0;
//}


int main()
{
	char ch = 'w';
	char* pc = &ch;//ָ���С��ϵͳ�йء�64λϵͳΪ8���ֽڣ�32λϵͳΪ4���ֽ�
	printf("%d\n", sizeof(pc));
	*pc = 'w';
	printf("%c\n", ch);
	return 0;
}