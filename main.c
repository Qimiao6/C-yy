#define _CRT_SECURE_NO_WARNINGS 1
//           �ú����ж�����
//#include<stdio.h>
//#include<math.h>
//int su(int x)
//{
//	int k = 0;
//	for (k = 2; k <= sqrt(x); k++)
//	{
//		if (x % k == 0)
//		{
//					return 0;
//		}
//	}
//				return 1;
//	}
//int main()
//{
//	int i = 100;
//	int b = 0;//ͳ������
//	for (i = 100; i <= 200; i++)
//	{
//		if (su(i) == 1)
//		{
//			printf("%d ", i);
//			b++;
//		}
//	}
//	printf("\n%d", b);
//	}
//                           �ú����ж�����
//#include<stdio.h>
//int ss(int x)
//{
//	return ((x % 4 == 0) &&( x % 100 != 0)) || (x % 400 == 0);
//}
//int main()
//{
//	int i = 0;
//	int b = 0;//ͳ������
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (ss(i) == 1)
//		{
//			printf("%d ", i);
//			b++;
//		}
//	}
//	printf("\n�����У�%d�� ", b);
//	return 0;
//}

//               �ú�������������

//#include<stdio.h>
////int rr(int* p,int m,int f)//�������ַ�ʽ�Կ�
//int rr(int gg[], int m, int f)//�������ַ�ʽ�Կ�
//{
//	int i = 0;//�������±�
//
//	while(i<=f)
//	{
//		int mim = i + (f - i) / 2;
//		if (gg[mim] > m)
//			f = mim - 1;
//		else if (gg[mim] < m)
//			i = mim + 1;
//		else
//			return mim;
//	}
//	return -1;
//}
//int main()
//{
//	int yy[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int b = sizeof(yy)/ sizeof(yy[1]) - 1;//���±�
//	int m = 1;
//	int pp =rr(yy, m,b);
//	if (pp == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	printf("�ҵ����±��ǣ�%d", pp);
//	return 0;
//}

//#include<stdio.h>
//void kk(int* x)//���մ������ĵ�ַ
//{
//	*x = *x + 1;
//}
//int main()
//{
//	int i = 0;
//	kk(&i);
//	printf("%d\n", i);
//	kk(&i);//���ú���
//	printf("%d\n", i);
//	return 0;
//	}
///                 ��ӡstrlen(�ַ�����)����ֵ
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int i = strlen("1234556");
//	printf("%d\n", i);
//	return 0;
//
//	}
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	//printf("%d\n", strlen("1234556"));//��strlen�ķ���ֵ��printf.
//	printf("%d ", printf("%d ", printf("%d ", 43)));//��ӡ�����ַ��ͷ���2����ӡ1���ַ��ͷ���1
//	//�ո�Ҳ��һ���ַ�
//	return 0;
//}

//              ����������
//#include<stdio.h>
////void Add(int, int);//Add����������
//void Add(int x, int y);//Ҳ����ֱ�Ӹ�������
//int main()
//{
//	int d = 4;
//	int m = 9;
//	Add(d, m);
//	return 0 ;
//	}
//void Add(int x, int y)//д��main��������δ���壬��Ҫ���Ϸ���ͷ�ļ�
//{
//	printf("%d",(x + y));
//}

//#include"Add.h"//����int Add(int x, int y)������
//#include<stdio.h>
////#pragma comment(lib, "ceshi.lib")//�����ļ�����
//int main()
//{
//	int d = 4;
//	int m = 9;
//	scanf("%d %d", &d,&m);
//	int g =Add(d, m);
//	printf("%d", g);
//	return 0 ;
//	}

////           ��򵥵ĵݹ�
//#include<stdio.h>
//int main()
//{
//	printf("haha\n");
//	main();
//	return 0;
//	}

//                     �ݹ���ϰ
//#include<stdio.h>
//int sum(int);
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	sum(i);
//	return 0;
//}
//int sum(int x)
//{
//	//�ȵ��ã����ó���ִ����Ż���������
//	if (x >= 10)
//	{
//		sum(x / 10); //���ó���ִ����Ż���������      //�ݹ�����Լ������Լ�                
//		int u = x % 10;           //�Լ������Լ�����
//		printf("%d ", u);
//	}
//	else
//	{
//		printf("%d ", x);
//		return 0;
//	}
//	         
//}

///                        �� ��
//int And(int x, int y)
//{
//    return(x + y);
//}
//
//
//#include<stdio.h>
//int i = 9;
//int y = 4;
//int main()
//{
//    
//    printf("%d",And(i, y));
//
//    }

//                        ��ͨ��ʽ��y�Ľ׳�
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int b = 1;//��
//    scanf("%d", &i);
//    for (int y = 1; y <= i; y++)
//    {
//        b = b * y;
//    }
//    printf("%d", b);
//    return 0;
//}
//                �ݹ鷽ʽ��y�Ľ׳�
#include<stdio.h>
int main()
{
    int i = 0;
    scanf("%d", &i);
    int b = ss(i);
    printf("%d", b);
    return 0;
}
int ss(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * ss(x - 1);
    }
}
//  ע��

    //    4*��3�׳ˣ�*   3*��2�׳ˣ�* 2*��1�׳ˣ�* return 1��