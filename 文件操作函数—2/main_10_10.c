#define _CRT_SECURE_NO_WARNINGS 1
//       ��һ����ʽ���루д�����ļ���
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
//       ��һ����ʽ�������������
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
//	FILE* pp = fopen("binbin.txt", "r");//��д����ʽ���ļ�
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("�ļ��򿪳ɹ�\n");
//	}
//	//�����ַ���ʱ�����пո񣬲�Ȼ�����
//	fscanf(pp, "%s %d %f", book.name, &(book.get), &(book.c));//
//	//pp��Ŀ���ļ�ָ�룬""��ȡ�������ͣ�������
//	printf("%s %d %.2f\n", book.name, book.get, book.c);
//	fclose(pp);//�ر��ļ�
//	printf("�ѹر��ļ�\n");
//	pp = NULL;
//	return 0;
//}

//         ��Ĭ�ϵļ�������FILE* stdin �����ַ�
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	ch = fgetc(stdin);//stdin��Ĭ��������ָ�룬ָ����Ǽ���
//	printf("%c ", ch);
//	return 0;
//}
//             ��Ĭ��������ָ�룬�����ַ���
//#include<stdio.h>
//int main()
//{
//	char str[100] = {0};
//    fgets(str,30,stdin);//stdin��Ĭ��������ָ�룬ָ����Ǽ���
//	printf("%s ", str);
//	return 0;
//}
//          stdout��Ĭ�������ָ�룬ָ�������Ļ
//#include<stdio.h>
//int main()
//{
//	char str[100] = {0};
//    fprintf(stdout,"%d",3);//stdout��Ĭ�������ָ�룬ָ�������Ļ
//	printf("%s ", str);
//	return 0;
//}

//     �Զ����Ƶ���ʽд���ļ���

//#include<stdio.h>
//struct mm
//{
//	char name[100];
//	int get;
//};
//int main()
//{
//	struct mm s = { "zhugebin",2221111 };
//	FILE* pp = fopen("binbin.txt", "wb");//�Զ�����д�����������ʽ���ļ�
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("�ļ��Ѵ�\n");
//	}
//	//�Զ�������ʽ����
//	fwrite(&s, sizeof(s), 1, pp);//Ԫ��ָ�룬Ԫ�ش�С��Ԫ�ظ�����д���ļ���ָ��
//	fclose(pp);//�ر��ļ�
//	printf("�ļ��ѹر�\n");
//	pp = NULL;
//	return 0;
//}
//        �Զ�������ʽ���ļ�
#include<stdio.h>
struct mm
{
	char name[100];
	int get;
};
int main()
{
	struct mm s = { 0 };
	FILE* pp = fopen("binbin.txt", "rb");//�Զ����ƶ������룩����ʽ���ļ�
	if (NULL == pp)
	{
		perror("fopen");
		return 1;
	}
	else
	{
		printf("�ļ��Ѵ�\n");
	}
	//�Զ�������ʽ��
	fread(&s, sizeof(s), 1, pp);//Ԫ��ָ�룬Ԫ�ش�С��Ԫ�ظ����������ļ���ָ��
	printf("%s%d", s.name, s.get);
	fclose(pp);//�ر��ļ�
	printf("�ļ��ѹر�\n");
	pp = NULL;
	return 0;
}
