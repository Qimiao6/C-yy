#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//ssk:					//只能在本函数跳
//	printf("HeHe");
//	goto ssk;//goto跳回到ssk+
//	return;
//	}

//						一个简单的关机程序

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char ii[20] = { 0 };
//	system("shutdown -s -t 120");
//haha:
//	printf("您的电脑将在1分钟后关机，需关机请输入”我是猪“\n");
//	scanf("%s", ii);
//	if(strcmp(ii, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("关机取消\n");
//
//		}
//	else
//	{
//		goto haha;
//		printf("输入错误\n");
//	}	
//	return 0;
//   }
//                        读取printf("hallo bin bang")的返回值

//#include<stdio.h>
//int main()
//{
//	int kk = printf("hall bin bang");
//	printf("\n%d\n", kk);//输出13
//	return 0 ;
//	}

//                      输出1-100中3的倍数

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
//               数入任意3个整数输出由大到小排列
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int s = 0;//存储值
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
////                            判断100-200之间的素数
////                            素数只能被1或自身整除
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;//输出100-200
//	int j = 0;
//	int n = 0;//合计素数
//	int k = 1;//判断是否为素数
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
//	printf("\n素数：%d个", n);
//	return 0;
//	}
// 
//						求最大公约数
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
//                              打印99乘法表
//#include<stdio.h>
//int main()
//{
//	int i = 1;//第一行
//	int k = 1;//第二行
//	int y = 0;//商
//	for (i = 1; i <= 9; i++)
//	{
//		for (k = 1; k <=i; k++)
//		{
//			printf("%d*%d=%-2d  ", i, k, i * k);//%-2d表是打印两位不够两位的用空格
//		}
//		printf("\n");//换行
//	}
//	return 0;
//	}

//                     输入10个数，输出最大值
//#include<stdio.h>
//int main()
//{
//	int ss[10] = { 22,33,55,11,55,77,33,11,40,77 };
//	//scanf("%d", ss);
//	int max = ss[0];//最大值
//	int i = 0;//下标
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

////						复制字符串
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

//                            函数练习
//定义一个加函数
//#include <stdio.h>
//int Add(int x, int y)//这边要用整型变量接收
//{
//	int f = x + y;
//	return f;
//}
//int main()
//{
//	int i = 33;
//	int hh = 72;
//	int jj = Add(i, hh);//括号中输入两个整型变量
// 属于传值调用
//	printf("%d\n", jj);
//	return 0;
//}

//                   用函数调换数字位置

//void ddd(int* x, int* y)//地址传过来需要用指针变量接收
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
//	printf("交换前：%d %d", e, d);
//	ddd(&e, &d);//传地址，传参数改变不了
//	//属于传址调用
//	printf("交换后：%d %d", e, d);
//	return 0;
//	}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//#include <stdio.h>
//int main()
//{
//	int i = 0;//第一列
//	int ii = 0;//第二列
//	int i3 = 0;//商
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
//           实现一个函数来交换两个整数的内容
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
//                   实现函数判断year是不是润年
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("今年为润年");
//	}
//	else
//	{
//		printf("今年不是闰年");
//	}
//	return 0;
//	}
				//实现一个函数，判断一个数是不是素数。
				
				//利用上面实现的函数打印100到200之间的素数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int d = 0;//累计素数
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
//	printf("\n素数有：%d个", d);
//	return 0;
//}