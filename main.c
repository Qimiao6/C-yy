#define _CRT_SECURE_NO_WARNINGS 1


////                  ������Ϸ
//#include<stdio.h>
//int main()
//{
//	int i[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int p = sizeof(i) / sizeof(i[0]);//��������Ԫ�ظ���
//	int z = 0;//����������±�
//	int g = 0;//�м�ֵ
//	int m = 2;//����ֵ
//	while (z <= p)//���±�С�ڵ������±�
//	{
//		g = (p + z) / 2;//���м�ֵ
//		if (i[g] > m)
//			p = g - 1;//��ֵ�����м�ֵ��һ
//		else if (i[g] < m)
//			z = g + 1;
//		else if (i[g] = m)
//		{
//			printf("�ҵ����±���:%d",g);
//			break;
//		}	
//	}
//	if (z > p)
//		printf("û�ҵ�");
//	return 0;
//	}
//                           �ַ�����ˢ��
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
//int main()
//{
//	char y[] = { "hello bit" };
//	char h[] = { "*********" };
//	int c = 0;//�����±�
//	int e = strlen(y) - 1;//�����±�
//	while (c <= e)
//	{
//		printf("%s", h);
//		h[c] = y[c];//����
//		h[e] = y[e];
//		c++;
//		e--;
//		Sleep(1000); //ͷ�ļ�#include<windows.h>//��ʱ
//		system("cls");//������Ļ
//	}
//	printf("%s", h);
//	    return 0;
//	}
//
//                                ��������Ϸ
//                               �´��С����ʾ
void zhu()
{
	printf("****************�����***************\n");
	printf("*****************����****************\n");
	printf("**************������Ϸ��*************\n");
}
//rand�����������������
//����һ��0-RAND_MAX(32767)
#include<stdlib.h>
#include<time.h>
void game()
{
	//����һ�������
	int b = rand()%100+1;
	///////printf("�����=%d\n", b);
	printf("�������1-100\n");
	while (1)
	{
		int s = 0;
		scanf("%d", &s);
		if (s < b)
		{
			printf("��С��");
		}
		else if (s > b)
		{
			printf("�´���");
		}
		else
		{
			printf("��ϲ��¶���");
			break;
		}
	}
	}
int main()
{
	int i = 0;
	//�����������
	srand((unsigned int)time(NULL));
	zhu();
	do
	{
		printf("��ѡ����/���棩0/1\n");
		scanf("%d", &i);
		switch (i)
		{
			case 1:
				game();
				break;
			case 0:
				printf("��Ϸ����\n");
				break;
			default:
				printf("�������\n");
					break;
		}
		

	}
	while (i);

		return 0;
}


