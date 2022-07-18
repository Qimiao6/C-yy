#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;//c+1=1
//    b += 2;//b+2=5
//    return (a + b + c);//8
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int a, b, c, d;
//    scanf("%d%1d%1d%1d", &a, &b, &c, &d);
//    printf("%d%d%d%d", d, c, b, a);
//    return 0;
//}
// 
// 
// 
//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。
//
//输入描述：
//一行，连续输入5个整数（范围0~100），用空格分隔。
//输出描述：
//一行，输出5个数的平均数（保留一位小数）。
//#include<stdio.h>
//int main()
//{
//    int a, b, c, d, e;
//    float i = 0;
//    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//    if (a < 100, b < 100, c < 100, d < 100, e < 100)
//        i = (a + b + c + d + e) / 5.0;
//    printf("%.1f", i);
//    return 0;
//}
// 
//KiKi想知道从键盘输入的两个数的大小关系，请编程实现。
//输入描述：
//题目有多组输入数据，每一行输入两个整数（范围 - 231~231 - 1），用空格分隔。
//输出描述：
//针对每行输入，输出两个整数及其大小关系，数字和关系运算符之间没有空格，详见输入输出样例。
//
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    while(scanf("%d",&a,&b)!= EOF)
//    {
//        //scanf("%d%d", &a, &b);
//        if (a == b)
//            printf("%d=%d\n", a, b);
//        else if (a > b)
//            printf("%d>%d\n", a, b);
//        else
//            printf("%d<%d\n", a, b);
//    }
//    return 0;
//}
//输入秒数，计算小时，分，秒
//#include<stdio.h>
//int main()
//{
//	int a, b, c,d;
//	scanf("%d", &a);
//	b = a / 3600;
//	c = a % 3600 / 60;
//	d = a % 60;
//	printf("%d %d %d", b, c, d);
//	return 0;
//	}
//
//算数操作符
//
//除法运算
//
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 7 / 2);//打印出3，整数/整数只会等于整数。
//	printf("%d\n", 7 / 2);//打印不出3.5需要用float变量打印符
//	printf("%.1f\n", 7.0 / 2);//用float变量打印符，再加.1.表示小数点后留一位
//	return 0;
//	}

//取模运算
//
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 7 % 2);//模运算，取余
//	return 0;
//}

//赋值操作符
//#include<stdio.h>
//int main()
//{
//	int i = 10;// 一个等号是赋值
//	int j = 10;
//	if (10 == i)//两个等号是判断
//	{;}
//	i += 5;//与下面的式子功能一样，但更简短；
//	j = j + 5;
//	printf("%d\n%d\n", i, j);
//
//	i *= 5;//与下面的式子功能一样，但更简短；
//	j = j * 5;
//
//	printf("%d\n%d\n", i, j);
//	return 0;
//}
//
//逻辑取反
//
//#include <stdio.h>
//int main()
//	{
//	int a = 5;
//	a=!a;//!在前面表示逻辑取反
//	printf("%d\n", a);//真变假，假变真
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	a = !a;//!在前面表示逻辑取反
//	printf("%d\n", a);//真变假，假变真
//	return 0;
//}

//！逻辑反的应用

#include<stdio.h>
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m)//if语句只要括号中为真就运行
//		printf("真");
//	if(!m)
//		printf("假");
//	return 0;
//
//}

//sizeof的使用
//#include<stdio.h>
//int main()
//{
//	int o = 0;
//	printf("%d",sizeof(o));//sizeof计算的是所在内存大小，单位是字节
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int o[10] = {0};
//	printf("%d\n",sizeof(o));//计算的是数组总大小
//	printf("%d\n",sizeof(o[1]));//计算数组中单个数的大小
//	return 0;
//}


							//计算数组元素个数
//#include <stdio.h>
//int main()
//{
//	int bb[10] = { 0 };
//	int mm = sizeof(bb) / sizeof(bb[1]);
//	printf("bb含有:%d个元素",mm);
//	return 0;
//}
							
//							//sizeof和strlen的区别
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char i[] = "123" ;
//	char b[] = { '1','2','3'};
//	char c[] = { '1','2','3','\0' };
//	printf("%d\n", strlen(i));//3
//	printf("%d\n", strlen(b));//15//strlen计算的是所含字符（元素）个数，\0是结束表示符不算元素
//	printf("%d\n", sizeof(i));//4
//	printf("%d\n", sizeof(b));//3//sizeof计算的是所占内存多少
//	int mm = sizeof(c) / sizeof(c[1]);//注意\0是占内存的，只是不算元素
//	printf("c含有:%d个元素",mm);
//	int hh = sizeof(i) / sizeof(b[i]);//数组中字符串\0是strlen自动加的
//	printf("i含有:%d个元素",hh);
//	return 0;
//}

//								前置加加，后置加加
//								前置减减，后置减减
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 0;
//	b = ++a;//可以拆成a=a++然后b=a;先加加后计算
//	printf("%d  %d", a, b);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 0;
	b = a--;//可以拆成b=a然后a=a--;先计算后减减
	printf("%d  %d", a, b);
	return 0;
}