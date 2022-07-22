#define _CRT_SECURE_NO_WARNINGS 1


////                  猜字游戏
//#include<stdio.h>
//int main()
//{
//	int i[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int p = sizeof(i) / sizeof(i[0]);//计算数组元素个数
//	int z = 0;//数组最左边下标
//	int g = 0;//中间值
//	int m = 2;//查找值
//	while (z <= p)//左下标小于等于右下标
//	{
//		g = (p + z) / 2;//求中间值
//		if (i[g] > m)
//			p = g - 1;//右值等于中间值加一
//		else if (i[g] < m)
//			z = g + 1;
//		else if (i[g] = m)
//		{
//			printf("找到了下标是:%d",g);
//			break;
//		}	
//	}
//	if (z > p)
//		printf("没找到");
//	return 0;
//	}
//                           字符交换刷新
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
//int main()
//{
//	char y[] = { "hello bit" };
//	char h[] = { "*********" };
//	int c = 0;//最左下标
//	int e = strlen(y) - 1;//最右下标
//	while (c <= e)
//	{
//		printf("%s", h);
//		h[c] = y[c];//调换
//		h[e] = y[e];
//		c++;
//		e--;
//		Sleep(1000); //头文件#include<windows.h>//延时
//		system("cls");//清理屏幕
//	}
//	printf("%s", h);
//	    return 0;
//	}
//
//                                猜数字游戏
//                               猜大猜小有提示
void zhu()
{
	printf("****************大冰箱***************\n");
	printf("*****************冰棒****************\n");
	printf("**************旺仔游戏厅*************\n");
}
//rand函数可以生产随机数
//返回一个0-RAND_MAX(32767)
#include<stdlib.h>
#include<time.h>
void game()
{
	//生产一个随机数
	int b = rand()%100+1;
	///////printf("随机数=%d\n", b);
	printf("请猜数字1-100\n");
	while (1)
	{
		int s = 0;
		scanf("%d", &s);
		if (s < b)
		{
			printf("猜小了");
		}
		else if (s > b)
		{
			printf("猜大了");
		}
		else
		{
			printf("恭喜你猜对了");
			break;
		}
	}
	}
int main()
{
	int i = 0;
	//随机数生成器
	srand((unsigned int)time(NULL));
	zhu();
	do
	{
		printf("请选择（玩/不玩）0/1\n");
		scanf("%d", &i);
		switch (i)
		{
			case 1:
				game();
				break;
			case 0:
				printf("游戏结束\n");
				break;
			default:
				printf("输入错误\n");
					break;
		}
		

	}
	while (i);

		return 0;
}


