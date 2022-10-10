#define _CRT_SECURE_NO_WARNINGS 1
//       以一定格式输入（写）到文件中
//struct mm
//{
//	char name[20];
//	int get;
//	float c;
//};
//#include<stdio.h>
//int main()
//{
//	struct mm book = { "zhu ge bin",22,178.55f };
//	FILE* pp = fopen("binbin.txt", "w");//以写的形式打开文件
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("文件打开成功\n");
//	}
//	fprintf(pp, "%s %d %.2f", book.name, book.get, book.c);//
//	//pp是目标文件指针，""写入参数类型，参数
//	fclose(pp);//关闭文件
//	printf("已关闭文件\n");
//	pp = NULL;
//	return 0;
//}
//       以一定格式输出（读）数据
//struct mm
//{
//	char name[20];
//	int get;
//	float c;
//};
//#include<stdio.h>
//int main()
//{
//	struct mm book = {0};
//	FILE* pp = fopen("binbin.txt", "r");//以写的形式打开文件
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("文件打开成功\n");
//	}
//	//被读字符串时不能有空格，不然会出错
//	fscanf(pp, "%s %d %f", book.name, &(book.get), &(book.c));//
//	//pp是目标文件指针，""读取参数类型，参数名
//	printf("%s %d %.2f\n", book.name, book.get, book.c);
//	fclose(pp);//关闭文件
//	printf("已关闭文件\n");
//	pp = NULL;
//	return 0;
//}

//         用默认的键盘输入FILE* stdin 输入字符
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	ch = fgetc(stdin);//stdin是默认输入流指针，指向的是键盘
//	printf("%c ", ch);
//	return 0;
//}
//             用默认输入流指针，输入字符串
//#include<stdio.h>
//int main()
//{
//	char str[100] = {0};
//    fgets(str,30,stdin);//stdin是默认输入流指针，指向的是键盘
//	printf("%s ", str);
//	return 0;
//}
//          stdout是默认输出流指针，指向的是屏幕
//#include<stdio.h>
//int main()
//{
//	char str[100] = {0};
//    fprintf(stdout,"%d",3);//stdout是默认输出流指针，指向的是屏幕
//	printf("%s ", str);
//	return 0;
//}

//     以二进制的形式写到文件中

//#include<stdio.h>
//struct mm
//{
//	char name[100];
//	int get;
//};
//int main()
//{
//	struct mm s = { "zhugebin",2221111 };
//	FILE* pp = fopen("binbin.txt", "wb");//以二进制写（输出）的形式打开文件
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("文件已打开\n");
//	}
//	//以二进制形式存入
//	fwrite(&s, sizeof(s), 1, pp);//元素指针，元素大小，元素个数，写入文件的指针
//	fclose(pp);//关闭文件
//	printf("文件已关闭\n");
//	pp = NULL;
//	return 0;
//}
//        以二进制形式读文件
#include<stdio.h>
struct mm
{
	char name[100];
	int get;
};
int main()
{
	struct mm s = { 0 };
	FILE* pp = fopen("binbin.txt", "rb");//以二进制读（输入）的形式打开文件
	if (NULL == pp)
	{
		perror("fopen");
		return 1;
	}
	else
	{
		printf("文件已打开\n");
	}
	//以二进制形式读
	fread(&s, sizeof(s), 1, pp);//元素指针，元素大小，元素个数，被读文件的指针
	printf("%s%d", s.name, s.get);
	fclose(pp);//关闭文件
	printf("文件已关闭\n");
	pp = NULL;
	return 0;
}
