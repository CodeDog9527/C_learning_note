#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�����ṹ��
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//};
//int main()
//{
//
//	struct Book b1 = { "C���Գ������", 55 };
//	printf("��������%s��\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
//	return 0;
//}


//��ָ����ʽṹ���г�Ա
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������", 55 };
//	struct Book* pb = &b1;
//	//strcpy(b1.name, "C++");//�ÿ⺯��strcpy�����ַ�����name�е�����
//	printf("������%s\n", (*pb).name);
//	printf("�۸�%d\n", (*pb).price);
//	printf("������%s\n", pb->name);
//	printf("�۸�%d\n", pb->price);//ע�����ֲ�ͬ��д��
//}