#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//ssk:					//ֻ���ڱ�������
//	printf("HeHe");
//	goto ssk;//goto���ص�ssk+
//	return;
//	}

//						һ���򵥵Ĺػ�����

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char ii[20] = { 0 };
//	system("shutdown -s -t 120");
//haha:
//	printf("���ĵ��Խ���1���Ӻ�ػ�����ػ������롱������\n");
//	scanf("%s", ii);
//	if(strcmp(ii, "������") == 0)
//		{
//			system("shutdown -a");
//			printf("�ػ�ȡ��\n");
//
//		}
//	else
//	{
//		goto haha;
//		printf("�������\n");
//	}	
//	return 0;
//   }
//                        ��ȡprintf("hallo bin bang")�ķ���ֵ

//#include<stdio.h>
//int main()
//{
//	int kk = printf("hall bin bang");
//	printf("\n%d\n", kk);//���13
//	return 0 ;
//	}

//                      ���1-100��3�ı���

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//	}
//               ��������3����������ɴ�С����
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int s = 0;//�洢ֵ
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		s = b;
//		b = a;
//		a = s;
//	}
//	if (a < c)
//	{
//		s = c;
//		c = a;
//		a = s;
//	}
//	if(b < c)
//	{
//		s = c;
//		c = b;
//		b = s;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//	}
////                            �ж�100-200֮�������
////                            ����ֻ�ܱ�1����������
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;//���100-200
//	int j = 0;
//	int n = 0;//�ϼ�����
//	int k = 1;//�ж��Ƿ�Ϊ����
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			k = 1;
//			if (i % j == 0)
//			{
//				k = 0;
//				break;
//			}
//
//		}
//		if (k == 1)
//		{
//			printf("%d  ", i);
//			n++;
//		}
//	}
//	printf("\n������%d��", n);
//	return 0;
//	}
// 
//						�����Լ��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			printf("%d", min);
//			break;
//		}
//		else
//			min--;
//	}
//	return 0;
//	}
//                              ��ӡ99�˷���
//#include<stdio.h>
//int main()
//{
//	int i = 1;//��һ��
//	int k = 1;//�ڶ���
//	int y = 0;//��
//	for (i = 1; i <= 9; i++)
//	{
//		for (k = 1; k <=i; k++)
//		{
//			printf("%d*%d=%-2d  ", i, k, i * k);//%-2d���Ǵ�ӡ��λ������λ���ÿո�
//		}
//		printf("\n");//����
//	}
//	return 0;
//	}

//                     ����10������������ֵ
//#include<stdio.h>
//int main()
//{
//	int ss[10] = { 22,33,55,11,55,77,33,11,40,77 };
//	//scanf("%d", ss);
//	int max = ss[0];//���ֵ
//	int i = 0;//�±�
//	for (i = 0; i <= 9; i++)
//	{
//		if (max < ss[i])
//		{
//			max = ss[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//	}

////						�����ַ���
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char kk[] = { "hello bitbit" };
//	char jj[] = { 0 };
//	strcpy(jj, kk);
//	printf("%s", jj);
//	return 0;
//	}

//                            ������ϰ
//����һ���Ӻ���
//#include <stdio.h>
//int Add(int x, int y)//���Ҫ�����ͱ�������
//{
//	int f = x + y;
//	return f;
//}
//int main()
//{
//	int i = 33;
//	int hh = 72;
//	int jj = Add(i, hh);//�����������������ͱ���
// ���ڴ�ֵ����
//	printf("%d\n", jj);
//	return 0;
//}

//                   �ú�����������λ��

//void ddd(int* x, int* y)//��ַ��������Ҫ��ָ���������
//{
//	
//	int r = 0;
//	r = *x;
//	*x = *y;
//	*y = r;
//}
//#include<stdio.h>
//int	main()
//{
//	int e = 0;
//	int d = 0;
//	scanf("%d %d", &e, &d);
//	printf("����ǰ��%d %d", e, d);
//	ddd(&e, &d);//����ַ���������ı䲻��
//	//���ڴ�ַ����
//	printf("������%d %d", e, d);
//	return 0;
//	}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

//#include <stdio.h>
//int main()
//{
//	int i = 0;//��һ��
//	int ii = 0;//�ڶ���
//	int i3 = 0;//��
//	int jj = 0;
//	scanf("%d",&jj);
//	for (i = 1; i <= jj; i++)
//	{
//		for (ii = 1; ii <= i; ii++)
//		{
//			printf("%2d*%-2d=%-3d  ", i, ii, i * ii);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
//           ʵ��һ��������������������������
//#include<stdio.h>
//void huan(int* x, int* y)
//{
//	int f = *x;
//	*x = *y;
//	*y = f;
//}
//int main()
//{
//	int i = 0;
//	int ii = 0;
//	scanf("%d %d",&i, &ii);
//	huan(&i, &ii);
//	printf("%d %d", i, ii);
//	return 0;
//	}
//                   ʵ�ֺ����ж�year�ǲ�������
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("����Ϊ����");
//	}
//	else
//	{
//		printf("���겻������");
//	}
//	return 0;
//	}
				//ʵ��һ���������ж�һ�����ǲ���������
				
				//��������ʵ�ֵĺ�����ӡ100��200֮�������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int d = 0;//�ۼ�����
//	for (i = 101; i <= 200;i=i+2)
//	{
//		int r = 1;
//		int j = 0;
//		for (j = 2;j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				r = 0;
//				break;
//			}
//		}
//		if (r == 1)
//		{
//			printf("%d ", i);
//			d++;
//		}
//	}
//	printf("\n�����У�%d��", d);
//	return 0;
//}