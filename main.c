#define _CRT_SECURE_NO_WARNINGS 1
//                      三目操作符
//#include<stdio.h>
//int main()
//{
//	int i = 7;
//	int b = 77;
//	int m = i > b ?i:b;
//	printf("%d\n", m);
//	printf("%d\n",i < b ? i : b);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int d = 0;
//	scanf("%d%d", &i, &d);
//	printf("%d\n", (i > d) ? i : d);
//	return 0;
//	}
//
//               逻辑与
//#include<stdio.h>
//int main()
//{
//	int i = 18;
//	int c = 1;
//	if (i && c)
//	{
//		printf("hehe");
//		
//	}
//	return 0;
//	}

//#include<stdio.h>
//int main()
//{
//	int i = 18;
//	int c = 1;
//	if (i >= 18 && c < 15)//逻辑与，只有两边都为真才执行
//	{
//		printf("姐姐");
//
//	}
//	return 0;
//}
//                          逻辑或
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int c = 0;
//	if (i || c)//逻辑或，只要有一个为真就会执行
//	{
//		printf("hehe");
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	auto int a = 3;//auto是自动的意思，局部变量都是自动创建自动销毁的
//	//现在可以不用加了，一前需要罢了
//	int b = 4;
//	int c = 1;
//	int d =(c=a + b, a=c + b, a=c + a);//由左往右计算，输出最右值
//	//      c=7;   a=7+4=11   a=7+11=18
//	printf("%d\n", d);
//	return 0;
//
//	
//}
//                   类型重定义
//
//#include<stdio.h>
//typedef unsigned int cco;//把unsigned int的名字改为cco，本质没变还是无符号整形
//int main()
//{
//	unsigned int i = 9;//无符号整数类型i=9，定义比较繁琐
//	cco i1 = 10;//与上一行类型一样
//	printf("%d\n", i1);//输出10，i1为整数类型
//	return  0;
//
//	}

//						寄存器关键字
//#include <stdio.h>
//int main()
//{
//	register int o = 10;//register是寄存器关键字，加在类型前面
//	//加了register后，表示建议把 o 变量放到寄存器当中，只是建议
//	//寄存器中运行速度比较快
//	return 0;
//}
//                                 调用函数
// 
// 
// //                          static的使用

//修饰局部变量

//#include<stdio.h>
//void bibi()
//{
//	static int a = 1;//加了static之后，变量只有main结束之后才会初始化
//	//int a = 1;
//	a++;
//	printf("%d\n", a);
//	}
//int main()
//{
//	int j = 0;
//	while (j < 10)
//	{
//		bibi();//调用bibi函数
//		j++;
//	}
//	return 0;
//}

//修饰全局变量
//#include<stdio.h>
//int main()
//{
//	extern int bb;
//	//extern int kk;//kk（全局变量）被static修饰后将失去外部链接属性
//
//	printf("%d\n", bb);
//	//printf("%d\n", kk);
//
//	return 0;
//	}


//修饰函数
//#include<stdio.h>
//int main()
//{
//	int dd = 3;
//	int ss = 7;
//	extern int Add();//Add被加static后，将失去外部链接属性；
//	int v = Add(dd, ss);
//	printf("%d\n", v);
//	return 0;
//}
// 
// 
//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。
//电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）
//。请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
//#include <stdio.h>
//int main()
//{
//    int n = 0;//人数
//    int i = 12;//运载量
//    int m = 0;//次数
//    int j = 0;//时间
//    scanf("%d", &n);
//    m = n / i;
//    printf("%d\n", m * 4 + 2);
//    return 0;
//}
//KiKi写了一个输出“Hello world!”的程序，BoBo老师告诉他printf函数有返回值，
//你能帮他写个程序输出printf(“Hello world!”)的返回值吗？
//#include<stdio.h>
//int main()
//{
//    int mm = printf("Hello world!");//注意此处不能加\n，
//    //因为这样会导致Printf的返回值中加一，应该单独换行
//    printf("\n");
//    printf("%d\n", mm);
//    return 0;
//}

//      从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
//输入描述：
//输入包括一个字符。
//输出描述：
//输出该字符是字母（YES）或不是（NO）。
//#include <stdio.h>
//int main()
//{
//	char mm = 0;
//	scanf("%c", &mm);
//	if (mm >= 'a' && mm <= 'z' || mm >= 'A' && mm <= 'Z')
//		printf("Yes");
//	else
//		printf("No");
//		return 0;
//}