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
//	printf("����������:");
//	scanf("%s", password);//�������벢�����password������
//	//���뻺�����л�ʣһ��'\n'
//	//��getchar��'\n'����
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):");//Y/N
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ���");
//	}
//	else
//	{
//		printf("ȷ��ʧ�ܣ�");
//	}
//	return 0;
//}


//forѭ��
//��ӡ���1-10������
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

//������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i = 5)//�޸���ѭ������i��ֵ
//			printf("%d ", i);
//	}
//	return 0;
//}

//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱��д��
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

//forѭ���ı���
//����1
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;;)//ʡ���ж���������Ϊ��
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
//		for (; j < 10; j++)//j��10����ִ�и�ѭ��
//		{
//			printf("hehe\n");//��ӡʮ��hehe
//		}
//	}
//	return 0;
//}

//ע��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)//j��10�������ѭ�����´��ٽ���ʱ���³�ʼ��Ϊ0
//		{
//			printf("hehe\n");//��ӡ100��
//		}
//	}
//	return 0;
//}

//����2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//����ʹ�ö��ű��ʽ
//	{
//		printf("hehe\n");//��ӡ����
//	}
//	return 0;
//}

//һ��������
//����ѭ�����ٴΣ�
//int main()
//{
//	int j = 0;
//	int k = 0;
//	for (j = 0, k = 0; k = 0; j++, k++)//�ж���������0��ֵ��k��0Ϊ�٣�����ѭ������ѭ��0��
//	{
//		k++;
//	}
//	return 0;
//}

//do...whileѭ��
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

//break��ʹ��
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

//continue��ʹ��
//int main()
//{
//	int i = 1;
//	do
//	{//��ѭ��
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//��ϰ
//1������n�Ľ׳�
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

//����1��+2��+3��+...+10��
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
//		}//n�Ľ׳�	
//		sum += f;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//�Ż���һ������
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

//��һ�����������в��Ҿ����ĳ������n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬��arr�����У�����ģ��ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break; 
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//���ֲ��ҷ��Ż���һ������
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
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//4����д���룬��ʾ����ַ��������ƶ������м���
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
//		Sleep(700);//��ʱ700ms
//		system("cls");//����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//5�����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬
//���������ȷ������ʾ��¼�ɹ���������ξ�����������˳�����
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", password);
		if (strcmp(password, "123456")==0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("��������������˳�����\n");
	}
	return 0;
}