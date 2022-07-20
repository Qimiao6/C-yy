#define _CRT_SECURE_NO_WARNINGS 1
//#define mm 100  //#define定义的表示符常量
//#define xx 10     //注意不要用双引号
//#include<stdio.h>
//int main()
//{
//	
//	int vv[xx] = { 0 };
//	printf("%d", mm);
//
//	}
///                              if语句
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i <= 18)
//		printf("青年");
//	else if (i > 18 && i < 35)
//		printf("中年");
//	else
//
//		printf("老年");
//	return 0;
//	}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n",i);		
//		i++;
//	}
//	return 0;
//}

        ///                             循环分支
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int y = 2;
//	if (0 == i)//       2  if判断为假他的下段程序不执行，或者代码块不执行
//		if (2 == y)//   上面为假不执行
//			printf("hehe");
//		else//           不执行
//			printf("haha");
//	return 0;//  1   啥都不会输出
//}

//                          
//                          return
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int h = 0;
//	if (0 == i)
//	{
//		printf("hehe");
//		return 0;//函数中只要执行了return,将直接结束函数。
//		//         循环的话是直接跳到第一句判断
//	}
//	if (0 == h)
//		printf("haha");
//	return 0;
//}
//                    判断输入值的奇数偶数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i % 2 == 1)
//		printf("奇数");
//	else
//		printf("偶数");
//
//	return 0;
//}
//                            if语句
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (1 == i)
//		printf("星期一");
//	else if (2 == i)
//		printf("星期二");
//	else if (3 == i)
//		printf("星期三");
//	else if (4 == i)
//		printf("星期四");
//	else if (5 == i)
//		printf("星期五");
//	else if (6 == i)
//		printf("星期六");
//	else if (7 == i)
//		printf("星期天");
//	else 
//		printf("输入错误");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//	case 1:
//		printf("星期一");
//		break;//停止
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//	printf("星期三");
//	break;
//		case 4:
//	printf("星期四");
//	break;
//		case 5:
//	printf("星期五");
//	break;
//		case 6:
//	printf("星期六");
//	break;
//		case 7:
//	printf("星期天");
//	break;
//		default :
//	printf("输入错误");
//	break;
//		}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//			case 1:
//			case 2:
//			case 3:
//			case 4:
//			case 5:
//		printf("工作日");
//		break;
//			case 6:
//			case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d", i);
//		if (5 == i)
//			break;//直接结束循环
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		
//		i++;
//		if (5 == i)
//			continue;//终止本轮循环，重新回到判断，
//		//            下面程序将不执行
//		printf("%d", i);
//		
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char i = 0;
//	while ((i = getchar()) != EOF)//getchar是输入字符
//	{
//		putchar(i);//putchar是打印字符
//	}
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char i[20] = {0};
//	char b = 0;
//	char d = 0;
//
//	i = getchar();//getchar是输入字符
//		putchar(i);//putchar是打印字符
//		while (d = getchar() != '\n')
//		{
//			;
//		}
//	printf("打印是否正确a/b\n");
//	getchar("%c",&b);
//	if (b == 'a')
//		printf("正确");
//	else
//	printf("错误");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ii[20] = { 0 };
//	int d = 0;
//	printf("请输入密码:>");
//		scanf("%s", ii);
		/*printf("您输入的密码是:%s\n", ii);
		printf("确认密码输入a，取消输入a");*/
//		while ((d = getchar()) != '\n')
//		{
//			;
//		}
//		printf("确认密码输入(Y/N)");
//		int i = getchar();
//		if (i=='Y')
//		    printf("已确认");
//		else
//			printf("已取消");
//	return 0;
//}

//                               for  循环

//先用while做一个人列子
//#include <stdio.h>
//int main()
//{
//	int mm = 1;//循环初始化部分
//	while (mm < 10)//循环判断部分
//	{
//		printf("%d\n", mm);
//		mm++;//循环调整部分
//	}
//	return 0;
//}
//以上可以看出循环由三部分组成


//下面开始正式的for语句

//#include <stdio.h>
//int main()
//{
//
//	for (int i = 1; i <= 10; i++)//不建议把调整变量放下面
//	{
//		if (5 == i)
//			break;   //直接跳出循环执行下一个代码块
//			continue;//会使代码块结束本轮循环
//		printf("%d\n", i);
//	};
//
//	return 0;
//}
//         for输出0-10
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d",i);
//	}
//	return 0;
//}