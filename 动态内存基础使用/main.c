#define _CRT_SECURE_NO_WARNINGS 1



//				�� ̬ �� �� �� ��

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
//	free(pp);//�ͷ�ԭ��malloc���ٵ��ڴ�ռ䣻
//	pp = NULL;//�ͷŲ��ÿգ���pp����Ұָ�룬����ʹ�û���ɷǷ�����
//	pp = &i;
//	printf("\n%d", *pp);
//	return 0;
//}
///                        �ڴ����

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* pp = NULL;
//	while (1)
//	{
//		malloc(10);//���к������ڴ�ռ����������
//	}
//	return 0;
//}


///                        �����ӡ����perror
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
//	free(pp);//�ͷ�ԭ��malloc���ٵ��ڴ�ռ䣻
//	pp = NULL;//�ͷŲ��ÿգ���pp����Ұָ�룬����ʹ�û���ɷǷ�����
//	pp = &i;
//	printf("\n%d", *pp);
//	return 0;
//}
//   

//                    calloc������ʹ��

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int* pp = NULL;
//	pp = (int*)calloc(10, sizeof(int));//�ڴ濪��
//	if (pp == NULL)
//	{
//		perror("calloc");
//	}
//	for(i = 0; i < 10 ;i++)
//	{
//		*(pp + i) = i;
//		printf("%d ", *(pp + i));
//	}
//	free(pp);//�ͷ�������ڴ�,�ڴ������free��ɶԴ��ڣ�һ������һ���ͷ�
//	pp = NULL; //��ָ���óɿ�ָ��
//	pp = &i;
//	printf("\n%d", *pp);
//	return 0;
//}

//          ����calloc��free�ɶԴ���Ҳ��������ڴ�й©

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
	if (1)//����ĳ���ж�Ϊ����ǰ�������������
	{
		return 0;// �����ferr �޷�ִ�У��������ڴ�й©
	}
	free(pp);
	pp = NULL;
	pp = &i;
	printf("\n%d ", *pp);
	return 0;
}