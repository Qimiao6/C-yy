#define _CRT_SECURE_NO_WARNINGS 1
//�ú궨����Ŀ������
//
//#include<stdio.h>
//#define ADD(a,b) (a)+(b)//д����Ǳ���� ���������Ĭ���ô�д
//#define MAX(a,b) (a)>(b)?(a):(b)
//int main()
//{
//	int a = 4;
//	int b = 5;
//	printf("�ϴ�ֵ��%d\n", MAX(a + 3, b + 4));//����궨������û����λ�����
//	printf("�ϴ�ֵ��%d\n", MAX(a, b));//��Ԥ����ʱ��ֱ���滻����
//	printf("a + b= %d\n", ADD(a*2, b*3));//�����Ѷ�
//	printf("a + b= %d\n", ADD(a , b ));//��ͨд��
//	return 0;
//}

//ע��

// ����һ��Ҫ��������Ȼ�����
//#include<stdio.h>
//#define MUL(a) a*a
//int main()
//{
//	printf("%d\n", MUL(3));//����
//	printf("%d\n", MUL(3+2));//����Ϊ��5+5=25��ʵ����3+2*3+2=11
//  //printf("%d\n", 3+2*3+2=11);ʵ�ʾͳ�������
//	return 0;
//}

//#include<stdio.h>
////#define MUL(a) (a)*(a)  //1ʽ 
////#define ADD(a) (a)+(a)  //1ʽ
////�����������
//#define MUL(a) ((a)*(a))  //���Ÿ����˳ɹ�������������
//#define ADD(a) ((a)+(a))
//int main()
//{
//	printf("%d\n", MUL(3 + 2));//
////  printf("%d\n", (3 + 2)*(3 + 2));//�滻�꿴��û����ʵ�ʿ�����ļ�
//	printf("%d\n", 2 * ADD(3 + 2));//Ԥ��һʽ2*10 = 20  ʵ��
////ʵ��printf("%d\n", 2 * (3 + 2) + (3 + 2));// ʵ��ֻ��15
//	
//	return 0;
// 
//}
//                   #������ʹ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	float f = 95.5f;
//	printf("the value of a is %d\n", a);
//	printf("the value of f is %f\n", f);//ͬһ����ӡ��д����̫�鷳
//	return 0;
//
//}

//					  #������ʹ��
//#include<stdio.h>
//#define PRINTF(val , formet) printf("the value of "#val" is "formet"\n",val)
//int main()
//{
//	int a = 10;
//	PRINTF(a, "%d");
//�滻��printf("the value of ""a"" is ""%d""\n",a);
//	����printf("#a = %d\n", a);//������ǰ���#����ʹ���������ַ���
//	float f = 95.5f;
//	PRINTF(f, "%f");
//	printf("the value of a is %d\n", a);
//	printf("the value of f is %f\n", f);//ͬһ����ӡ��д����̫�鷳
//	return 0;
//}
//
//#include<stdio.h>
//#define ADD(a,b) a##b//�ܰ������ַ���ƴ����
//int main()
//{
//	int classbinbin = 178;
//	printf("%d", ADD(class,binbin));//����Ҳû������������
//	//��������������������������������ȷʵȻ����
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
//	b = &num;//����ָ��
//	c = &num;
//	d = &num;
//	e = &num;
//	f = &num;//����ָ��
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
//	//int* pp = malloc(10 * sizeof(int));//��ǿ������ת��Ҳ����
//	int* pp = (int*)malloc(10 * sizeof(int));//����Ϊ��
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

//  �򵥸�ϰ�ص�����
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
//	printf("����������ֵ\n");
//	scanf("%d%d", &a, &b);
//	return pp(a, b);
//}
//int main()
//{
//	int i = 0;
//	printf("****�� 1***\n");
//	printf("****�� 2***\n");
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
//           offsetof(�ṹ���Աƫ����)
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
//	printf("%d\n", sizeof(book));//�ṹ���С
//	//�Լ�����ƫ����0��4��8��12
//	printf("%d\n", (int)offsetof(struct mm,pp));
//	return 0;
//}

//          ģ��ʵ��offsizeof
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
//	//int m = 0;//m�Ѿ��ǳ����ˣ����ܶ��岻�ܸ�ֵ
//	printf("%d\n", m);
//	#undef m//ȡ����m�Ķ��壬�������ԭ����m��������
//	//printf("%d\n", m);//m�Ѿ�ȡ�����ᱨ��
//	return 0;
//}

