#define _CRT_SECURE_NO_WARNINGS 1
//用宏定义三目操作符
//
//#include<stdio.h>
//#define ADD(a,b) (a)+(b)//写代码潜规则 定义宏名字默认用大写
//#define MAX(a,b) (a)>(b)?(a):(b)
//int main()
//{
//	int a = 4;
//	int b = 5;
//	printf("较大值：%d\n", MAX(a + 3, b + 4));//如果宏定义括号没给到位会出错
//	printf("较大值：%d\n", MAX(a, b));//宏预编译时会直接替换代码
//	printf("a + b= %d\n", ADD(a*2, b*3));//增加难度
//	printf("a + b= %d\n", ADD(a , b ));//普通写法
//	return 0;
//}

//注意

// 括号一定要给够，不然会出错
//#include<stdio.h>
//#define MUL(a) a*a
//int main()
//{
//	printf("%d\n", MUL(3));//无事
//	printf("%d\n", MUL(3+2));//你以为是5+5=25，实际是3+2*3+2=11
//  //printf("%d\n", 3+2*3+2=11);实际就出问题了
//	return 0;
//}

//#include<stdio.h>
////#define MUL(a) (a)*(a)  //1式 
////#define ADD(a) (a)+(a)  //1式
////最好下面这样
//#define MUL(a) ((a)*(a))  //括号给够了成功解决上面的问题
//#define ADD(a) ((a)+(a))
//int main()
//{
//	printf("%d\n", MUL(3 + 2));//
////  printf("%d\n", (3 + 2)*(3 + 2));//替换完看似没问题实际看下面的加
//	printf("%d\n", 2 * ADD(3 + 2));//预想一式2*10 = 20  实际
////实际printf("%d\n", 2 * (3 + 2) + (3 + 2));// 实际只得15
//	
//	return 0;
// 
//}
//                   #的特殊使用
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	float f = 95.5f;
//	printf("the value of a is %d\n", a);
//	printf("the value of f is %f\n", f);//同一个打印得写两次太麻烦
//	return 0;
//
//}

//					  #的特殊使用
//#include<stdio.h>
//#define PRINTF(val , formet) printf("the value of "#val" is "formet"\n",val)
//int main()
//{
//	int a = 10;
//	PRINTF(a, "%d");
//替换完printf("the value of ""a"" is ""%d""\n",a);
//	等于printf("#a = %d\n", a);//变量名前面加#号能使变量名变字符串
//	float f = 95.5f;
//	PRINTF(f, "%f");
//	printf("the value of a is %d\n", a);
//	printf("the value of f is %f\n", f);//同一个打印得写两次太麻烦
//	return 0;
//}
//
//#include<stdio.h>
//#define ADD(a,b) a##b//能把两个字符串拼起来
//int main()
//{
//	int classbinbin = 178;
//	printf("%d", ADD(class,binbin));//好像也没见有在哪有用
//	//。。。。。。。。。。。。。。。。确实然并卵
//	return 0;
//}

//#define INT_PTR int*
//typedef int* int_ptr;
//INT_PTR a, b;
//int_ptr c, d;
//int* e, f;
//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	a = &num;
//	b = &num;//不是指针
//	c = &num;
//	d = &num;
//	e = &num;
//	f = &num;//不是指针
//	return 0;
//}
//#include<stdio.h>
//int Max(int x, int y)
//{
//	return x + y;
//}
//#define MAX(a,b) ((a)+(b))
//int main()
//{
//	int mm = 0;
//	int a = 10;
//	int b = 15;
//	printf("%d\n", Max(a, b));
//	printf("%d\n", MAX(a, b));
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	//int* pp = malloc(10 * sizeof(int));//不强制类型转换也不错
//	int* pp = (int*)malloc(10 * sizeof(int));//加上为妙
//	if (NULL == pp)
//	{
//		perror("malloc");
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(pp + i) = i;
//		printf("%d\n", *(pp + i));
//		printf("%d\n", (int)(pp + i));
//	}
//	free(pp);
//	pp = NULL;
//	return 0;
//} 

//  简单复习回调函数
//
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Mul(int x, int y)
//{
//	return x - y;
//}
//int Crc(int (*pp)(int,int))
//{
//	int a, b;
//	printf("请输入两个值\n");
//	scanf("%d%d", &a, &b);
//	return pp(a, b);
//}
//int main()
//{
//	int i = 0;
//	printf("****加 1***\n");
//	printf("****减 2***\n");
//	scanf("%d", &i);
//	switch (i)
//	{
//	case 1:
//		i = Crc(Add);
//		break;
//	case 2:
//		i = Crc(Mul);
//		break;
//	}
//	printf("%d\n", i);
//	return 0;
//}
//           offsetof(结构体成员偏移量)
//#include<stdio.h>
//#include<stddef.h>
//struct mm
//{
//	char i;
//	int bb;
//	short k;
//	int pp;
//}book;
//int main()
//{
//	printf("%d\n", sizeof(book));//结构体大小
//	//自己计算偏移量0，4，8，12
//	printf("%d\n", (int)offsetof(struct mm,pp));
//	return 0;
//}

//          模拟实现offsizeof
//#include<stdio.h>
//struct mm
//{
//	char i;
//	int bb;
//	short k;
//	int pp;
//}book;
//int my_ofsizeof(struct mm* pp, int x)
//{
//	;
//}
//int main()
//{
//	int si = 0;
//	si = my_ofsizeof(struct mm, book.pp);
//	printf("%d\n", si);
//	return 0;
//}
//
//#include<stdio.h>
//#define m 100
//int main()
//{
//	//int m = 0;//m已经是常量了，不能定义不能赋值
//	printf("%d\n", m);
//	#undef m//取消对m的定义，这段以下原来的m均不可用
//	//printf("%d\n", m);//m已经取消，会报错
//	return 0;
//}

