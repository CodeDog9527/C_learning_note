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


//if���֧���
//int main()
//{
//	int age = 100;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else if (age >= 90 && age < 100)
//		printf("����\n");
//	else if (age >= 100)
//		printf("��ϲ�������ս��\n");
//	else
//		;
//	return 0;
//}

//ע������ı��
//int main()
//{
//	int age = 10;
//	if (18 <= age < 28)//���ж�18<=age���ٽ�������˴�Ϊ�٣���0����<28�Ƚϣ��˴�Ϊ�棨��0������ִ��������䡣�˴�����𲻵�(age >= 18 && age < 28)�����á�
//		printf("����\n");
//	return 0;
//}


//����else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//���ʽΪ��
//		if (b == 2)//��ִ��
//			printf("HeHe\n");//��ִ��
//	else//��ִ��
//		printf("HaHa\n");//��ִ�С�ע��else��ƥ����򣬲�Ҫ������˭���������˭ƥ�������
//	return 0;
//}
//���ô��������ı�if-else��ƥ�䡣�磺
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("HeHe\n");
//	}
//	else//��if (a == 1)ƥ��
//		printf("HaHa\n");
//	return 0;
//}

//if���ʽ�ĸ���д��
//int main()
//{
//	int num = 9;
//	if (10 == num)//������ǰ����������
//	{
//		printf("HeHe\n");
//	}
//	return 0;
//}


//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//scanf��������ֵ����
//	if (1 == a%2)
//		printf("%d��һ������\n", a);
//	return 0;
//}

//��ϰ��1���ж�һ�����Ƿ�Ϊ������2�����1-100֮�������
// ����һ
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
//������
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
//����һ�ͷ�������˼�벻ͬ


//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//// default���ڴ���û��caseֵƥ�����������п���
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//��m,n��ֵ��
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


//whileѭ��
//����Ļ�ϴ�ӡ1-10
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

//whileѭ����break��ʹ��
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

//whileѭ����continue��ʹ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//��ִ�б���ѭ���еĺ������䣬ֱ���������ʽ�����жϣ�����������ѭ��
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//getchar��putchar��ʹ��
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//ctrl + z����
	{
		putchar(ch);
	}
	return 0;
}