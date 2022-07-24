#define _CRT_SECURE_NO_WARNINGS 1
//           用函数判断素数
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
//	int b = 0;//统计素数
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
//                           用函数判断润年
//#include<stdio.h>
//int ss(int x)
//{
//	return ((x % 4 == 0) &&( x % 100 != 0)) || (x % 400 == 0);
//}
//int main()
//{
//	int i = 0;
//	int b = 0;//统计润年
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (ss(i) == 1)
//		{
//			printf("%d ", i);
//			b++;
//		}
//	}
//	printf("\n闰年有：%d个 ", b);
//	return 0;
//}

//               用函数找有序数字

//#include<stdio.h>
////int rr(int* p,int m,int f)//上下两种方式皆可
//int rr(int gg[], int m, int f)//上下两种方式皆可
//{
//	int i = 0;//数组左下标
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
//	int b = sizeof(yy)/ sizeof(yy[1]) - 1;//右下标
//	int m = 1;
//	int pp =rr(yy, m,b);
//	if (pp == -1)
//	{
//		printf("找不到");
//	}
//	else
//	printf("找到了下标是：%d", pp);
//	return 0;
//}

//#include<stdio.h>
//void kk(int* x)//接收传过来的地址
//{
//	*x = *x + 1;
//}
//int main()
//{
//	int i = 0;
//	kk(&i);
//	printf("%d\n", i);
//	kk(&i);//调用函数
//	printf("%d\n", i);
//	return 0;
//	}
///                 打印strlen(字符长度)返回值
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
//	//printf("%d\n", strlen("1234556"));//把strlen的返回值给printf.
//	printf("%d ", printf("%d ", printf("%d ", 43)));//打印两个字符就返回2，打印1个字符就返回1
//	//空格也算一个字符
//	return 0;
//}

//              函数的声明
//#include<stdio.h>
////void Add(int, int);//Add函数的声明
//void Add(int x, int y);//也可以直接复制上来
//int main()
//{
//	int d = 4;
//	int m = 9;
//	Add(d, m);
//	return 0 ;
//	}
//void Add(int x, int y)//写在main下面会出现未定义，需要在上方加头文件
//{
//	printf("%d",(x + y));
//}

//#include"Add.h"//等于int Add(int x, int y)，声明
//#include<stdio.h>
////#pragma comment(lib, "ceshi.lib")//加密文件声明
//int main()
//{
//	int d = 4;
//	int m = 9;
//	scanf("%d %d", &d,&m);
//	int g =Add(d, m);
//	printf("%d", g);
//	return 0 ;
//	}

////           最简单的递归
//#include<stdio.h>
//int main()
//{
//	printf("haha\n");
//	main();
//	return 0;
//	}

//                     递归练习
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
//	//先调用，调用程序执行完才会往下运行
//	if (x >= 10)
//	{
//		sum(x / 10); //调用程序执行完才会往下运行      //递归就是自己调用自己                
//		int u = x % 10;           //自己创建自己销毁
//		printf("%d ", u);
//	}
//	else
//	{
//		printf("%d ", x);
//		return 0;
//	}
//	         
//}

///                        测 试
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

//                        普通方式求y的阶乘
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int b = 1;//商
//    scanf("%d", &i);
//    for (int y = 1; y <= i; y++)
//    {
//        b = b * y;
//    }
//    printf("%d", b);
//    return 0;
//}
//                递归方式求y的阶乘
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
//  注释

    //    4*（3阶乘）*   3*（2阶乘）* 2*（1阶乘）* return 1；