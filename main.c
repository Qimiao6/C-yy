#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//	default:
//		printf("mmmm");
//		break;
//	case 1:
//		printf("hhh");
//	
//	}
//		
//	return 0;
//}
//写一个代码打印1 - 100之间所有3的倍数的数字
//#include <stdio.h>
//	int main()
//{
//		for (int i = 1; i < +100; i++)
//		{
//			if (i % 3 == 0)
//				printf("%d\n", i);
//	  }
//}
//写代码将三个整数数按从大到小输出。
//
//例如：
//
//输入：2 3 1
//
//输出：3 2 1
//#include<stdio.h>
//int main()
//{
//	int a,b,c,t;
//scanf("%d%d%d", &a, & b, &c);
//if(a<b)
//{
//	t=a;a=b;b=t;
//}
//if(a<c) 
//{
//	t=a;a=c;c=t;
//}
//if(b<c) 
//{
//	t=b;b=c;c=t;
//}
//printf("%d%d%d",a,b,c);
//return 0;
//}





//写一个代码：打印100~200之间的素数
//#include <stdio.h>
//int main()
//{
//	for (int i = 100; i >= 100 && i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >= i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//打印1000年到2000年之间的闰年
//#include<stdio.h>
//
//int main() 
//{
//    for (int year = 1000; year <= 2000; year++)
//    {
//        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//        {
//            printf("%d ", year);
//        }
//    }
//    return 0;
//}
// 
//                     最大公约数
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	scanf("%d %d", &m, &n);
//	if (m > n)
//	{
//		max = m;
//	}
//	else
//	{
//		max = n;
//	}
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("%d", max);
//			break;
//		}
//		max--;
//	}
//}

                     //屏幕上打印九九乘法表
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ", j, i, j * i);
//			if (i == j)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}
///                 求最大值
//////////#include <stdio.h>
//////////int main()
//////////{
//////////	char yy[10] = { 0 };
//////////	scanf("%s", yy);
//////////	char a = 2;
//////////	for (int i = 0; i < 10; i++)
//////////	{
//////////		if (yy[i] < yy[a])
//////////			yy[a] = a;
//////////		else
//////////		yy[i] = a;
//////////	}
//////////	printf("%c", a);
//////////	return 0;
//////////}
// #include <stdio.h>
//int main() 
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 9; i++) 
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max_num = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		if (max_num < arr[i])
//		{
//			max_num = arr[i];
//		}
//	}
//	printf("%d", max_num);
//}


//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    int m = 0;
//    int h = 1;
//    for (m = 1; m <= i; m++)
//    {
//        h = h * m;
//    }
//    printf("%d", h);
//    return 0;
//   }

//数字查找

//#include <stdio.h>
//int main()
//{
//	int i[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	int m = sizeof(i) / sizeof(i[0]);//数组元素个数
//	int w = m - 1;//尾标
//	int y = 0;//默认初始下标
//	int k = 8;//需要查找的数字
//	int e = 0;//2/1数
//	while
//	{
//		e=()
//	}
//	return 0;
//}

//                      do while
//输出1-10
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		if (5 == i)
//			//break;//直接跳出循环，结束
//			continue;//结束本次循环重新判断
//		printf("%d\n", i);
//	}
//		while (i <=10);
//	return 0;
//}
//                           求阶乘

//#include<stdio.h>
//int main()
//{
//    int n = 0;//需要求阶的数
//    scanf("%d", &n);//输入
//    int i = 0;//辅助数
//    int tt = 1;//输出
//    for (i = 1; i <= n; i++)
//    {
//        tt = tt * i;
//    }
//    printf("%d", tt);
//    return 0;
//}
//                       1-3的阶乘
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    //scanf("%d", &n);//输入
//    int i = 0;//辅助数
//    int tt = 1;//输出
//    int b = 0;//1-10
//   for(b = 1;b<=3;b++)//输出1-3
//    {
//       tt = 1;
//        for (i = 1; i <= b; i++)//算阶乘
//        {
//            tt = tt * i;
//        }
//        n = n + tt;
//      
//    }
//   printf("%d\n", n);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int d = 1;
//    d =3%3;
//    printf("%d",d);
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//#include <stdio.h>
//int main()
//{
//	int i = 0;//循环次数
//	int k = 1;//分母
//	int y = 1;//分字
//	int d = 0;//储存
//	while (i < 100)
//	{
//		if(i%2==0||i==1)
//		d = d -(k / y);
//		else
//			d = d+ (k / y);
//		i++;
//		y++;
//	}
//	printf("%d", d);
//	return 0;
//}
