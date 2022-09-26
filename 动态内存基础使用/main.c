#define _CRT_SECURE_NO_WARNINGS 1



//				动 态 内 存 分 配

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//int main()
//{
//	int i = 0;
//	int* pp = (int*)malloc(sizeof(int) * 10);
//	assert(pp);
//	for (i = 0; i < 10; i++)
//	{
//		*(pp + i) = i;
//		printf("%d ", *(pp + i));
//	}
//	free(pp);//释放原来malloc开辟的内存空间；
//	pp = NULL;//释放不置空，那pp将是野指针，被人使用会造成非法访问
//	pp = &i;
//	printf("\n%d", *pp);
//	return 0;
//}
///                        内存测试

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* pp = NULL;
//	while (1)
//	{
//		malloc(10);//运行后计算机内存占用明显升高
//	}
//	return 0;
//}


///                        错误打印函数perror
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//int main()
//{
//	int i = 0;
//	int* pp = (int*)malloc(sizeof(int) * 10);
//	if (pp == NULL)
//	{
//		perror("malloc");
//	}
//	assert(pp);
//	for (i = 0; i < 10; i++)
//	{
//		*(pp + i) = i;
//		printf("%d ", *(pp + i));
//	}
//	free(pp);//释放原来malloc开辟的内存空间；
//	pp = NULL;//释放不置空，那pp将是野指针，被人使用会造成非法访问
//	pp = &i;
//	printf("\n%d", *pp);
//	return 0;
//}
//   

//                    calloc函数的使用

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int* pp = NULL;
//	pp = (int*)calloc(10, sizeof(int));//内存开辟
//	if (pp == NULL)
//	{
//		perror("calloc");
//	}
//	for(i = 0; i < 10 ;i++)
//	{
//		*(pp + i) = i;
//		printf("%d ", *(pp + i));
//	}
//	free(pp);//释放申请的内存,内存申请和free需成对存在，一个申请一个释放
//	pp = NULL; //将指针置成空指针
//	pp = &i;
//	printf("\n%d", *pp);
//	return 0;
//}

//          就算calloc和free成对存在也可能造成内存泄漏

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int* pp = NULL;
	pp = calloc(10, sizeof(int));
	if (pp == NULL)
	{
		perror("malloc");
	}
	for (i = 0; i < 10; i++)
	{
		*(pp + i) = i;
		printf("%d ", *(pp + i));
	}
	if (1)//假设某个判断为真提前结束了这个函数
	{
		return 0;// 后面的ferr 无法执行，则会造成内存泄漏
	}
	free(pp);
	pp = NULL;
	pp = &i;
	printf("\n%d ", *pp);
	return 0;
}