#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;//c+1=1
//    b += 2;//b+2=5
//    return (a + b + c);//8
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int a, b, c, d;
//    scanf("%d%1d%1d%1d", &a, &b, &c, &d);
//    printf("%d%d%d%d", d, c, b, a);
//    return 0;
//}
// 
// 
// 
//�Ӽ�������5��ѧ���ĳɼ����������������ǵ�ƽ���ɼ���������������һλС������
//
//����������
//һ�У���������5����������Χ0~100�����ÿո�ָ���
//���������
//һ�У����5������ƽ����������һλС������
//#include<stdio.h>
//int main()
//{
//    int a, b, c, d, e;
//    float i = 0;
//    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//    if (a < 100, b < 100, c < 100, d < 100, e < 100)
//        i = (a + b + c + d + e) / 5.0;
//    printf("%.1f", i);
//    return 0;
//}
// 
//KiKi��֪���Ӽ���������������Ĵ�С��ϵ������ʵ�֡�
//����������
//��Ŀ�ж����������ݣ�ÿһ������������������Χ - 231~231 - 1�����ÿո�ָ���
//���������
//���ÿ�����룬����������������С��ϵ�����ֺ͹�ϵ�����֮��û�пո�����������������
//
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    while(scanf("%d",&a,&b)!= EOF)
//    {
//        //scanf("%d%d", &a, &b);
//        if (a == b)
//            printf("%d=%d\n", a, b);
//        else if (a > b)
//            printf("%d>%d\n", a, b);
//        else
//            printf("%d<%d\n", a, b);
//    }
//    return 0;
//}
//��������������Сʱ���֣���
//#include<stdio.h>
//int main()
//{
//	int a, b, c,d;
//	scanf("%d", &a);
//	b = a / 3600;
//	c = a % 3600 / 60;
//	d = a % 60;
//	printf("%d %d %d", b, c, d);
//	return 0;
//	}
//
//����������
//
//��������
//
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 7 / 2);//��ӡ��3������/����ֻ�����������
//	printf("%d\n", 7 / 2);//��ӡ����3.5��Ҫ��float������ӡ��
//	printf("%.1f\n", 7.0 / 2);//��float������ӡ�����ټ�.1.��ʾС�������һλ
//	return 0;
//	}

//ȡģ����
//
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 7 % 2);//ģ���㣬ȡ��
//	return 0;
//}

//��ֵ������
//#include<stdio.h>
//int main()
//{
//	int i = 10;// һ���Ⱥ��Ǹ�ֵ
//	int j = 10;
//	if (10 == i)//�����Ⱥ����ж�
//	{;}
//	i += 5;//�������ʽ�ӹ���һ����������̣�
//	j = j + 5;
//	printf("%d\n%d\n", i, j);
//
//	i *= 5;//�������ʽ�ӹ���һ����������̣�
//	j = j * 5;
//
//	printf("%d\n%d\n", i, j);
//	return 0;
//}
//
//�߼�ȡ��
//
//#include <stdio.h>
//int main()
//	{
//	int a = 5;
//	a=!a;//!��ǰ���ʾ�߼�ȡ��
//	printf("%d\n", a);//���٣��ٱ���
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	a = !a;//!��ǰ���ʾ�߼�ȡ��
//	printf("%d\n", a);//���٣��ٱ���
//	return 0;
//}

//���߼�����Ӧ��

#include<stdio.h>
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m)//if���ֻҪ������Ϊ�������
//		printf("��");
//	if(!m)
//		printf("��");
//	return 0;
//
//}

//sizeof��ʹ��
//#include<stdio.h>
//int main()
//{
//	int o = 0;
//	printf("%d",sizeof(o));//sizeof������������ڴ��С����λ���ֽ�
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int o[10] = {0};
//	printf("%d\n",sizeof(o));//������������ܴ�С
//	printf("%d\n",sizeof(o[1]));//���������е������Ĵ�С
//	return 0;
//}


							//��������Ԫ�ظ���
//#include <stdio.h>
//int main()
//{
//	int bb[10] = { 0 };
//	int mm = sizeof(bb) / sizeof(bb[1]);
//	printf("bb����:%d��Ԫ��",mm);
//	return 0;
//}
							
//							//sizeof��strlen������
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char i[] = "123" ;
//	char b[] = { '1','2','3'};
//	char c[] = { '1','2','3','\0' };
//	printf("%d\n", strlen(i));//3
//	printf("%d\n", strlen(b));//15//strlen������������ַ���Ԫ�أ�������\0�ǽ�����ʾ������Ԫ��
//	printf("%d\n", sizeof(i));//4
//	printf("%d\n", sizeof(b));//3//sizeof���������ռ�ڴ����
//	int mm = sizeof(c) / sizeof(c[1]);//ע��\0��ռ�ڴ�ģ�ֻ�ǲ���Ԫ��
//	printf("c����:%d��Ԫ��",mm);
//	int hh = sizeof(i) / sizeof(b[i]);//�������ַ���\0��strlen�Զ��ӵ�
//	printf("i����:%d��Ԫ��",hh);
//	return 0;
//}

//								ǰ�üӼӣ����üӼ�
//								ǰ�ü��������ü���
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 0;
//	b = ++a;//���Բ��a=a++Ȼ��b=a;�ȼӼӺ����
//	printf("%d  %d", a, b);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 0;
	b = a--;//���Բ��b=aȻ��a=a--;�ȼ�������
	printf("%d  %d", a, b);
	return 0;
}