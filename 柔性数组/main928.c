#define _CRT_SECURE_NO_WARNINGS 1
//          ��������

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
//	//ss.a = 11;//���ܸ�ֵĬ�ϲ����������鿪���ڴ�
//	printf("%d\n", sizeof(struct book));//Ĭ�ϴ�С8���ֽڣ�û�и���������鿪���ڴ�
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
struct book
{
	int i;
	float n;
	int a[];//����������Ҫ��̬�ڴ濪�ٿռ�
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
	//��������realloc,�����������������
	struct book* ptr = (struct book*)realloc(ss,sizeof(struct book) + sizeof(int) * 10);
	if (ss == NULL)
	{
		perror("malloc");
	}
	else
	{
		printf("���ݳɹ�\n");
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