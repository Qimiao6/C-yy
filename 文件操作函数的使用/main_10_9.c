#define _CRT_SECURE_NO_WARNINGS 1
//  ��ϰ��������
//Ĭ�Ͽ���
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
//	printf("%d\n", sizeof(book));//Ĭ�ϲ�����������鿪�ٿռ�
//	//�����ڴ�Ŀ�����ѭ�ṹ���ڴ�������
//	printf("%d\n", sizeof(struct rr));
//	return 0;
//}

//����ʹ��
//#include<stdlib.h>
//#include<stdio.h>
//struct rr
//{
//	int a;
//	int c;
//	char i;
//	int pp[];//����������Ҫ��̬�ڴ�������
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
//            �ļ�����
//�ļ� �� �� ·��ѡ��
//#include<stdio.h>
//int main()
//{
//	//FILE* pp = fopen("binbin.txt", "w");// "w"��д����ʽ��"binbin.txt"�ļ�
//	// 
//	//"w"���ļ�ʱ����ļ������ڣ��ǽ��½�һ����Ӧ�ļ�
//	//�����ַ�""���ļ�ʱ����ļ������ڣ��ǽ�����
//	FILE* pp = fopen("binbin.txt", "w");//���·�����ڹ���Ŀ¼�²����ļ�
//	FILE* pp = fopen("E:\\CCCCCCCCCC\\binbin.txt", "w");//����·������ָ��Ŀ¼�²��� 
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//
//	fclose(pp);//�ر��ļ�
//	pp = NULL;
//	return 0;
//}
//       ���(д)�ַ����ı���
//#include<stdio.h>
//int main()
//{
//	char i = 0;
//	FILE* pp = fopen("binbin.txt", "w");//ֻд��д���ļ��У�
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputc('a', pp);//˳�򵥸�
//	fputc(' ', pp);
//	fputc('b', pp);
//	fputc(' ', pp);
//	fputc('c', pp);//����д��
//	fputc(' ', pp);
//	for (i = 0; i <= 22; i++)
//	{
//		fputc('d'+i, pp);
//		fputc(' ', pp);
//	}
//	fclose(pp);//�ر��ļ�
//	pp = NULL;
//	return 0;
//}
// ��whileѭ������EOF��Ϊ�ļ�������־��������EOF��Ϊ�ļ�����
// ��־���ļ���������67586�ļ��У����ݶ������ַ�
// ��ASCII����ֵ����ʽ��š�����֪����ASCII����ֵ�ķ�Χ��0~127
//�������ܳ���-1����˿�����EOF��Ϊ�ļ�������־��
//                         ���ļ������ļ��е����ݣ�
//#include<stdio.h>
//int main()
//{
//	int c = 0;
//	int a = 0;
//	FILE* pp = fopen("binbin.txt", "r");//���ļ���ֻ��
//	if (NULL == pp)
//	{
//	   perror("fopen");
//		return 1;
//	}
//	a = fgetc(pp);//������ȡ
//	printf("%c ", a);//��ӡ
//	//for (c = 0; c < 25; c++)//����ѭ����ȡ
//	//{//���Ƚ����ϣ���Ҫ��֪�������ж��ٸ��ַ�
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
//	fclose(pp);//�ر��ļ�
//	pp = NULL;
//	return 0;
//}


////         ���ı��У��ַ���������ʽ�����xie�����ļ���
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
//		printf("�ļ��򿪳ɹ�\n");
//	}
//	fputs("holle zhu ge bin\n", pp);//���ı����ַ�������ʽд��
//	fputs("holle windows\n", pp);//fputsд��������ǲ�����ĩβ��\n��
//	fputs(str, pp);//char*�����Ͷ�����
//	fclose(pp);//�ر��ļ�
//	printf("�ѹر��ļ�");
//	pp = NULL;
//	return 0;
//}
 
 //        ���ı��У��ַ���������ʽ���루�������ڴ���
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
//		printf("�ļ��򿪳ɹ�\n");
//	}
//	fgets(man,4,pp);//���ı����ַ�������ʽ��
//	printf("%s\n", man);
//	fgets(man, 30, pp);//���ı����ַ�������ʽ��
//	printf("%s", man);
//    fgets(man, 100, pp);//���ܶ����ٸ��ַ�����\0��ֹͣ��ֻ��һ�У�
//	printf("%s", man);
//	fclose(pp);//�ر��ļ�
//	printf("�ѹر��ļ�");
//	pp = NULL;
//	return 0;
//}

////       ��һ����ʽ���루д�����ļ���
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
//	FILE* pp = fopen("binbin.txt", "w");//��д����ʽ���ļ�
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("�ļ��򿪳ɹ�\n");
//	}
//	fprintf(pp, "%s %d %.2f", book.name, book.get, book.c);//
//	//pp��Ŀ���ļ�ָ�룬""д��������ͣ�����
//	fclose(pp);//�ر��ļ�
//	printf("�ѹر��ļ�\n");
//	pp = NULL;
//	return 0;
//}
