#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//�������������Լ��
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

//��1000��2000֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//�ܱ�4���������Ҳ��ܱ�100������������
//		//�ܱ�400������������
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

//��ӡ���100��200֮�������
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

//�Ż���һ������
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n < sqrt(i); n++)//sqrt�ǿ�ƽ����ѧ������ͷ�ļ�#include <math.h>
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

//����1--100���ж��ٸ�����9
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

//����1/1-1/2+1/3+...+1/99-1/100��ֵ
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

//��ʮ�������е����ֵ
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

//����Ļ�ϴ�ӡ9*9�˷���
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


//��������Ϸ
//void menu()
//{
//	printf("********************\n");
//	printf("**1.play    0.exit**\n");
//	printf("********************\n");
//}
//void game()
//{
//	int guess = 0;//���ղµ�����
//	//1.����һ�������	
//	int ret = 0;
//	ret = rand()%100+1;//����1-100֮��������
//	//printf("%d\n", ret);
//	//2.������	
//	while (1)
//	{
//		printf("�������>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//int main()
//{		
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t *timer)
//	//time_t
//	srand((unsigned int)time(NULL));//NULL�ǿ�ָ�룬û��ʲôʵ�ʵ�Ч��
//	int input = 0;
//	do
//	{
//		menu();//menu()����
//		printf("��ѡ��->:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//game()����,��������Ϸ�Ĺ���
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto����ʹ��
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//60���ػ�
	again:
	printf("��ĵ��Խ���һ����֮�ڹػ�.���룺������ȡ���ػ���\n������>:");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//strcmp--�Ƚ������ַ��������Ƿ����
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}