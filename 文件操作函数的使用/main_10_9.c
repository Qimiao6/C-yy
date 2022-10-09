#define _CRT_SECURE_NO_WARNINGS 1
//  复习柔性数组
//默认开辟
//#include<stdio.h>
//struct rr
//{
//	int a;
//	int c;
//	char i;
//	int pp[];
//};
//int main()
//{
//	struct rr book;
//	printf("%d\n", sizeof(book));//默认不给后面的数组开辟空间
//	//但会内存的开辟遵循结构体内存对齐规则
//	printf("%d\n", sizeof(struct rr));
//	return 0;
//}

//正常使用
//#include<stdlib.h>
//#include<stdio.h>
//struct rr
//{
//	int a;
//	int c;
//	char i;
//	int pp[];//柔性数组需要动态内存来开辟
//};
//int main()
//{
//	int i = 0;
//	struct rr* book = (struct rr*)malloc(sizeof(struct rr)+sizeof(int)*10);
//	if (book != NULL)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			book->pp[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d\n", book->pp[i]);
//		}
//	}
//	else
//	{
//		printf("molloc");
//	}
//	printf("%d\n", sizeof(struct rr));
//	free(book);
//	book = NULL;
//	return 0;
//}
//            文件操作
//文件 打开 及 路径选择
//#include<stdio.h>
//int main()
//{
//	//FILE* pp = fopen("binbin.txt", "w");// "w"以写的形式打开"binbin.txt"文件
//	// 
//	//"w"打开文件时如果文件不存在，那将新建一个对应文件
//	//其他字符""打开文件时如果文件不存在，那将出错
//	FILE* pp = fopen("binbin.txt", "w");//相对路径，在工程目录下查找文件
//	FILE* pp = fopen("E:\\CCCCCCCCCC\\binbin.txt", "w");//绝对路径，在指定目录下查找 
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//
//	fclose(pp);//关闭文件
//	pp = NULL;
//	return 0;
//}
//       输出(写)字符到文本中
//#include<stdio.h>
//int main()
//{
//	char i = 0;
//	FILE* pp = fopen("binbin.txt", "w");//只写（写到文件中）
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputc('a', pp);//顺序单个
//	fputc(' ', pp);
//	fputc('b', pp);
//	fputc(' ', pp);
//	fputc('c', pp);//单个写入
//	fputc(' ', pp);
//	for (i = 0; i <= 22; i++)
//	{
//		fputc('d'+i, pp);
//		fputc(' ', pp);
//	}
//	fclose(pp);//关闭文件
//	pp = NULL;
//	return 0;
//}
// 在while循环中以EOF作为文件结束标志，这种以EOF作为文件结束
// 标志的文件，必须是67586文件中，数据都是以字符
// 的ASCII代码值的形式存放。我们知道，ASCII代码值的范围是0~127
//，不可能出现-1，因此可以用EOF作为文件结束标志。
//                         读文件（读文件中的数据）
//#include<stdio.h>
//int main()
//{
//	int c = 0;
//	int a = 0;
//	FILE* pp = fopen("binbin.txt", "r");//打开文件，只读
//	if (NULL == pp)
//	{
//	   perror("fopen");
//		return 1;
//	}
//	a = fgetc(pp);//单个读取
//	printf("%c ", a);//打印
//	//for (c = 0; c < 25; c++)//利用循环读取
//	//{//但比较智障，需要先知道里面有多少个字符
//	//	a = fgetc(pp);
//	//	printf("%c", a);
//	//	a = fgetc(pp);
//	//	printf("%c", a);
//	//}
//
//	while ((a = fgetc(pp)) != EOF)
//	{
//		printf("%c", a);
//	}
//	fclose(pp);//关闭文件
//	pp = NULL;
//	return 0;
//}


////         用文本行（字符串）的形式输出（xie）到文件中
//#include<stdio.h>
//int main()
//{
//	char str[] = "abbccdd\n";
//	FILE* pp = fopen("binbin.txt", "w");
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("文件打开成功\n");
//	}
//	fputs("holle zhu ge bin\n", pp);//以文本（字符串）形式写入
//	fputs("holle windows\n", pp);//fputs写入结束后是不会在末尾加\n的
//	fputs(str, pp);//char*的类型都可以
//	fclose(pp);//关闭文件
//	printf("已关闭文件");
//	pp = NULL;
//	return 0;
//}
 
 //        用文本行（字符串）的形式输入（读）到内存中
//#include<stdio.h>
//int main()
//{
//	char man[100] = { 0 };
//	FILE* pp = fopen("binbin.txt", "r");
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("文件打开成功\n");
//	}
//	fgets(man,4,pp);//以文本（字符串）形式读
//	printf("%s\n", man);
//	fgets(man, 30, pp);//以文本（字符串）形式读
//	printf("%s", man);
//    fgets(man, 100, pp);//不管读多少个字符遇到\0都停止（只读一行）
//	printf("%s", man);
//	fclose(pp);//关闭文件
//	printf("已关闭文件");
//	pp = NULL;
//	return 0;
//}

////       以一定格式输入（写）到文件中
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
