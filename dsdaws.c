#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d", i);
//	return 0;
//	}
//#include<stdio.h>
//int main()
//{
//	int ib = 0;
//	scanf("%d", &ib);
//	printf("%d", ib);
//	return 0;
//	}
//#include<stdio.h>
//int main()
//{
//	printf("Name Age Gender\n");
//	printf("---------------------\n");
//	printf("Jack 18 man\n");
//	return 0;
//	}

//const���εĳ�����

//#include<stdio.h>
//int main()
//{
//	int ss = 10;
//	ss = 20;//ssΪ���������޸�
//	printf("%d\n", ss);
//	const int yy = 10;
//	//yy = 20;//�޷����У�yy����const���޷��޸ģ������˳����Ĳ����޸ĵ�����
//	printf("%d\n", yy);
//	return 0;
// }
// 
// #define�����ֵ
//  
//#define gg 11
//#include <stdio.h>
//int main()
//{
//	//gg = 10;//gg�޷����ģ�#define�����ֵΪ����
//	printf("%d", gg);
//	return 0;
//	}

//�ַ���
//#include<stdio.h>
//int main()
//{
//	char ii[] = { "abcd" };//�������ַ���'\0'��������־��
//	char oo[] = { 'a','b','c' };//�������ַ������Դ�'\0',����ֻ���������,ֱ����������\0��
//	char hh[] = { 'a','b','c','\0' };//���������ַ�����'\0'������������\�Զ�����
//	printf("%s\n", ii);
//	printf("%s\n", oo);
//	printf("%s\n", hh);//hh��\0��ת���ַ���ֻ��������ã���ռ�����С
//	return 0;
//	}
// 
// ת���ַ�
//
//#include <stdio.h>
//int main()
//{
//	printf("ss\tijiw\t\n");//��ʱ\tΪת���ַ����޷���ӡ��������Ҫ���ַ���
//	printf("ss\\tijiw\\t");//Ҫ��������ӡ��ֻ����\ǰ���ټ�һ��\����
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	//printf("\a\a\a");
//	printf("%c\n",'\130');//130ǰ���\��ʾ�����������Ϊ8������
//		return 0;
//	}
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	i = '\12';//12ǰ���\��ʾ�����������Ϊ8������
//	printf("%d\n", i);//���������ӡ��10
//	i = '\7';//7ǰ���\��ʾ�����������Ϊ8������
//	printf("%d\n", i);//���������ӡ��7
//	i = '\122';//122ǰ���\��ʾ�����������Ϊ8������
//	printf("%d\n", i);//���������ӡ��82
//	i = '\1222';//ע��8�����÷���\����ֻ����������8������
//	printf("%d\n", i);//���Գ����������ӡ�����Ĳ���Ԥ�ڵĽ��
//	return 0;
//}

//16����ת���ַ�
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", '\x30');//\xdd������ʾ����16��������
//	return 0;//ֻ�ܸ���λ���ڶ��˻ᱨ��
//	}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", strlen("c:ss\thui\128\tfjgd"));//\tΪһ��ת���ַ���\12��һ��8�����ַ�
//	return 0;//�����ַ�����Ϊ15
//}
//#include<stdio.h>
//int main()
//{
//	int dd = 0;
//	printf("��Ҫ�ú�ѧϰ��\n");
//	printf("0:�ú�ѧϰ   1:����Ҫ\n");
//	scanf("%d", &dd);
//	if(0==dd)
//		printf("�ù���\n");
//	else
//	printf("������\n");
//	return 0;

	//}\
//ѭ�����
//#include<stdio.h>
//int main()//int ,�Ƿ������ͣ�main�Ǻ�����
//{
//	int i = 0;
//	while(i<20000)
//	{
//		printf("Ŭ��ѧϰ%d\n",i);
//		i++;//���ŵ��е�Ϊ������
//	}
//	printf("�ù���");
//	return 0;
//}

//дһ���ӵĳ���

//#include<stdio.h>
//int main()
//{
//	int hh = 0;
//	int hh1 = 0;
//	printf("����������Ҫ��ӵ�ֵ�м��ÿո����\n");
//	scanf("%d %d", &hh, &hh1);
//		int hh2 = hh + hh1;
//		printf("%d\n", hh2);
//	}

//���ú������мӼ�������
//
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int bb = 0;
//	bb = x + y;
//	return bb;
//	}
//int main()
//{
//	//extern int Jian;
//	int hh = 0;
//	int hh1 = 0;
//	printf("����������Ҫ��ӵ�ֵ\n");
//	scanf("%d%d", &hh, &hh1);
//	int hh2 = Add(hh, hh1);//���ú������
//	 int mm = Jian(hh, hh1);//����ͬһ��Դ�ļ��в�ͬ.c�ļ��еĺ���
//	printf("%d\n", mm);
//	printf("%d\n", hh2);
//	return 0;
//	}

//����

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4 };//���[]�в��������������С����{}����������������
//	int arr[10] = { 1,2,3,4 };//��{}������С��[]�е�������δ��ֵ����Ĭ��Ϊ0
//
//	}

//��ӡ�����е�ÿһ��Ԫ��

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i <= 9)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//
//	}

//��ʽ��

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int b = 0;
//	b = (sizeof(arr) / sizeof(arr[1]));
//	printf("%d\n", b);
//	while (i < b)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//
//}

//��������ֵ����ӡ
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int b = 0;
	int c = 0;
	b = (sizeof(arr) / sizeof(arr[1]));
	while(c<b)
	{
		scanf("%d", &arr[c]);
			c++;
	}
	printf("�����С=%d\n", b);
	while (i < b)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;

}

