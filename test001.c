#define _CRT_SECURE_NO_WARNINGS//�������ȫ��������

#include <stdio.h>

////int main()/*������--�������ڣ����ҽ���һ��
//			mainǰ���int��ʾmain�������÷���һ������ֵ*/
//{
	//��ӡ���hello  world
	//printf("hello  world\n");
	

	//��ӡ����ַ�
	//char ch = 'A';//����һ���ڴ�ռ�ch������ֵ�ַ�A
	//printf("%c\n", ch);//��ʾ���ַ��ĸ�ʽ��ӡch��%c--��ӡ�ַ���ʽ������

	//��ӡ�����������
	//int age = 24;
	//printf("%d\n", age);

	//��ӡ�����ȸ�����
	//float f = 5.0;
	//printf("%f\n", f);

	//��ӡ˫���ȸ�����
	//double d = 3.14;
	//printf("%lf\n", d);//%lf��ʾ��ӡ˫���ȸ�����

	//���㲻ͬ�������͵Ĵ�С
	//printf("%d\n", sizeof(char));//1
	//printf("%d\n", sizeof(short));//2
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(long));//4��8,c���Թ涨sizeof(long)>=sizeof(int),����ֵ��ƽ̨�й�
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8

	//����ʵ������ѡ����ʵ��������������ڴ�ռ�
	//����
//	short age = 20;//���ڴ�����2���ֽ������20
//	float weight = 98.6f;//���ڴ�����4���ֽڣ����С����98.6f�е�fָ�������Ϊ����������
//	printf("%d\n", age);
//	printf("%f\n", weight);
//
//	return 0;//����0
//}

//int num2 = 20;//ȫ�ֱ���--�����ڴ���飨{}��֮��ı���
//int main()
//{
//	int num1 = 10;//�ֲ�����--�����ڴ���飨{}���ڲ��ı���
//	return 0;
//}

//int a = 20;
//int main()
//{
//	//int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ--������ᣬ����bug
//	//��ȫ�ֱ����;ֲ�������������ͬʱ���ֲ���������
//	printf("%d\n", a);//���10
//	return 0;
//}

//int main()
//{
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������--ʹ�����뺯��
//	scanf("%d%d", &num1, &num2);//&--ȡ��ַ����
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

int main()
{
	//δ�����ı�ʶ��
	//����extern�ⲿ���ŵ�
	extern int val_g;
	printf("val_g = %d\n", val_g);
	return 0;
}