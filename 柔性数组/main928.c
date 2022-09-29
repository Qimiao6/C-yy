#define _CRT_SECURE_NO_WARNINGS 1
//          柔性数组

//#include<stdio.h>
//struct book
//{
//	int i;
//	float n;
//	int a[];
//};
//int main()
//{
//	struct book ss;
//	ss.i = 11;
//	ss.n = 5.5;
//	//ss.a = 11;//不能赋值默认不给柔性数组开辟内存
//	printf("%d\n", sizeof(struct book));//默认大小8个字节，没有给后面的数组开辟内存
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
struct book
{
	int i;
	float n;
	int a[];//柔性数组需要动态内存开辟空间
};
int main()
{
	int i = 0;
	struct book* ss = (struct book*)malloc(sizeof(struct book) + sizeof(int) * 5);
	
	if (ss == NULL)
	{
		perror("malloc");
	}
	ss->i = 10;
	ss->n = 5.5;
		for (i = 0; i < 5; i++)
	{
			scanf("%d", &(ss->a[i]));
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ss->a[i]);
	}
	//还可以用realloc,对柔性数组进行扩容
	struct book* ptr = (struct book*)realloc(ss,sizeof(struct book) + sizeof(int) * 10);
	if (ss == NULL)
	{
		perror("malloc");
	}
	else
	{
		printf("扩容成功\n");
		ss = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		scanf("%d", &(ss->a[i]));
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ss->a[i]);
	}
	free(ss);
	ss = NULL;
	return 0;
}