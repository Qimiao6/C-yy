#define _CRT_SECURE_NO_WARNINGS 1
//                     回调
#include"huid.h"
//int main()
//{
//	int i = 0;//方式
//	do
//	{
//		printf("**************************************\n");
//		printf("***********  1:加    2:减  ***********\n");
//		printf("***********  1:乘    2:除  ***********\n");
//		printf("请选择要计算的方式1/2/3/4\n");
//		scanf("%d",&i);
//		switch (i)
//		{
//		case 1:
//			crc(add);
//			break;
//		case 2:
//			crc(sub);
//			break;
//		case 3:
//			crc(rid);
//			break;
//		case 4:
//			crc(div);
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (i);
//	return 0;
//}
//void crc(int(*pp)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入要计算的两个值\n");
//	scanf("%d%d", &a, &b);
//	int y = pp(a, b);
//	printf("%d\n", y);
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int rid(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}

//                   冒泡
//int main()
//{
//	int i[] = { 2,5,8,4,3,6,1,9,7,0 };
//	int sz = sizeof(i) / sizeof(i[0]);
//	maop(i, sz);
//	print(i, sz);
//	return 0;
//}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
//void maop(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1- i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int k = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = k;
//			}
//		}
//	}
//}

//                 qsort的使用(本质是用快排的原理)
//int cmp_int(const void* q1, const void* q2)
//{
//	return(*(int*)q1 - *(int*)q2);
//}
//void test()
//{
//	int arr[] = { 2,3,5,1,6,7,9,8,4,0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	qsort(arr,sz, sizeof(arr[1]),cmp_int);
//	print(arr, sz);
//}
//int main()
//{
//	//test();
//	return 0;
//}

//             用冒泡排序原理实现qsort
//void swip(char* a1, char* a2, int i)
//{
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		char p = *a1;
//		*a1 = *a2;
//		*a2 = p;
//		a1++;
//		a2++;
//	}
//}
//void maopao(void* dd, int sz, int kuan, int (*pp)(const void*, const void*))
//{
//	int i = 0;
//		for (i = 0; i < sz - 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < sz - 1 - i; j++)
//			{
//				if (pp((char*)dd + j * kuan, (char*)dd + (j + 1) * kuan)>0)
//				{
//					swip((char*)dd + j * kuan, (char*)dd + (j + 1) * kuan, kuan);
//
//				}
//			}
//
//	    }
//}
//void test1()
//{
//	int arr[] = { 6,7,8,9,1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//             用冒泡排序原理实现qsort  2


struct my
{
	char name[30];
	int siz;
};
int may_name(const void* d1, const void* d2)
{
	return (strcmp(((struct my*)d1)->name, ((struct my*)d2)->name));
}
int may_age(const void* d1, const void* d2)
{
	return(((struct my*)d1)->siz, ((struct my*)d2)->siz);
}
void huan(char* d1, char* d2, int kuan)
{
	int i = 0;
	for (i = 0; i < kuan; i++)
	{ 
		char y = *d1;
		*d1 = *d2;
		*d2 = y;
		d1++;
		d2++;
	}
}
void may(void* gg, int sz, int kuan, int (*ff)(void*, void*))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (ff((char*)gg + j * kuan, (char*)gg + (j + 1) * kuan) < 0)
			{
				huan((char*)gg + j * kuan, (char*)gg + (j + 1) * kuan, kuan);
			}
		}
	}
 }
void test4()
{
	struct my book[] = { {"wangwu",15},{"zhangsan",8},{"lisi",20} };
	int sz = sizeof(book) / sizeof(book[0]);//元素个数
	may(book, sz, sizeof(book[0]), may_name);
	may(book, sz, sizeof(book[0]), may_age);
}
int main()
{
	test4();
	return 0;
}
