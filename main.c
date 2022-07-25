#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 1;//循环次数
//	int k = 1;//分母
//	int y = 1;//分字
//	float d = 0.0;//储存
//	while (i <= 100)
//	{
//		
//		if (i % 2 == 0 || i == 1)
//			d = d - (k / y);
//		else
//			d = d + (k / y);
//		i++;
//		y++;
//	}
//	printf("%f", d);
//	return 0;
//}
//#include <stdio.h>
//
//
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//                                  递归实现n的k次方
//int stet(int n,int k)
//{
//	if (k > 1)
//	{
//		return (n* stet(n, k-1));
//	}
//	else
//	{
//		return n;
//	}
//
//}
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("输入n k:\n");
//	scanf("%d %d", &n,&k);
//	int y=stet(n,k);
//	printf("%d", y);
//	return 0;
//}

//                  例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
////                            输入：1729，输出：19
//#include <stdio.h>
//int DigitSum(int jj);
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int gg =DigitSum(n);
//	printf("%d", gg);
//	return 0;
//}
//int DigitSum(int jj)
//{
//	if (jj >= 10)
//	{
//		return jj % 10 + DigitSum(jj / 10);
//	}
//	else
//	{
//		return (jj % 10);
//	}
//}

////                   字符串逆序（递归实现）
//#include <stdio.h>
//char reverse_string(char* str)
//{
//	if (*str == '\0')
//	{
//		return;
//	}
//	reverse_string(str + 1);
//	printf("%c", *str);
//}
//
//int main()
//{
//	char str[] = "abcefg";
//	reverse_string(str);
//	printf("\n");
//	return 0;
//}
//                    递归和非递归分别实现strlen

////                        非递归
//#include <stdio.h>
//int main()
//{
//	char pp[] = { "abcdef" };
//	printf("%d", strlen(pp));
//	return 0;
//}

//   递归
//int i = 0;
//int rrh(char* kk)
//{
//	if (kk[i]!='\0')
//	{
//		return 1 + rrh(kk + 1);
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//#include<stdio.h>
//int main()
//{
//	
//	char pp[] = { "abcdef" };
//	int yy = rrh(pp);
//	printf("%d", yy);
//	return 0;
//}

