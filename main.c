#define _CRT_SECURE_NO_WARNINGS 1
//                      ��Ŀ������
//#include<stdio.h>
//int main()
//{
//	int i = 7;
//	int b = 77;
//	int m = i > b ?i:b;
//	printf("%d\n", m);
//	printf("%d\n",i < b ? i : b);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int d = 0;
//	scanf("%d%d", &i, &d);
//	printf("%d\n", (i > d) ? i : d);
//	return 0;
//	}
//
//               �߼���
//#include<stdio.h>
//int main()
//{
//	int i = 18;
//	int c = 1;
//	if (i && c)
//	{
//		printf("hehe");
//		
//	}
//	return 0;
//	}

//#include<stdio.h>
//int main()
//{
//	int i = 18;
//	int c = 1;
//	if (i >= 18 && c < 15)//�߼��룬ֻ�����߶�Ϊ���ִ��
//	{
//		printf("���");
//
//	}
//	return 0;
//}
//                          �߼���
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int c = 0;
//	if (i || c)//�߼���ֻҪ��һ��Ϊ��ͻ�ִ��
//	{
//		printf("hehe");
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	auto int a = 3;//auto���Զ�����˼���ֲ����������Զ������Զ����ٵ�
//	//���ڿ��Բ��ü��ˣ�һǰ��Ҫ����
//	int b = 4;
//	int c = 1;
//	int d =(c=a + b, a=c + b, a=c + a);//�������Ҽ��㣬�������ֵ
//	//      c=7;   a=7+4=11   a=7+11=18
//	printf("%d\n", d);
//	return 0;
//
//	
//}
//                   �����ض���
//
//#include<stdio.h>
//typedef unsigned int cco;//��unsigned int�����ָ�Ϊcco������û�仹���޷�������
//int main()
//{
//	unsigned int i = 9;//�޷�����������i=9������ȽϷ���
//	cco i1 = 10;//����һ������һ��
//	printf("%d\n", i1);//���10��i1Ϊ��������
//	return  0;
//
//	}

//						�Ĵ����ؼ���
//#include <stdio.h>
//int main()
//{
//	register int o = 10;//register�ǼĴ����ؼ��֣���������ǰ��
//	//����register�󣬱�ʾ����� o �����ŵ��Ĵ������У�ֻ�ǽ���
//	//�Ĵ����������ٶȱȽϿ�
//	return 0;
//}
//                                 ���ú���
// 
// 
// //                          static��ʹ��

//���ξֲ�����

//#include<stdio.h>
//void bibi()
//{
//	static int a = 1;//����static֮�󣬱���ֻ��main����֮��Ż��ʼ��
//	//int a = 1;
//	a++;
//	printf("%d\n", a);
//	}
//int main()
//{
//	int j = 0;
//	while (j < 10)
//	{
//		bibi();//����bibi����
//		j++;
//	}
//	return 0;
//}

//����ȫ�ֱ���
//#include<stdio.h>
//int main()
//{
//	extern int bb;
//	//extern int kk;//kk��ȫ�ֱ�������static���κ�ʧȥ�ⲿ��������
//
//	printf("%d\n", bb);
//	//printf("%d\n", kk);
//
//	return 0;
//	}


//���κ���
//#include<stdio.h>
//int main()
//{
//	int dd = 3;
//	int ss = 7;
//	extern int Add();//Add����static�󣬽�ʧȥ�ⲿ�������ԣ�
//	int v = Add(dd, ss);
//	printf("%d\n", v);
//	return 0;
//}
// 
// 
//С����ѧУ��ѧ¥�ĵ���ǰ���˺ܶ��ˣ�����ǰ����n�����ڵȵ��ݡ�
//����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ�
//�������С���ּ��㻹��Ҫ���ٷ��Ӳ��ܳ˵��ݵ���¥�ϡ����������������1�㣩
//#include <stdio.h>
//int main()
//{
//    int n = 0;//����
//    int i = 12;//������
//    int m = 0;//����
//    int j = 0;//ʱ��
//    scanf("%d", &n);
//    m = n / i;
//    printf("%d\n", m * 4 + 2);
//    return 0;
//}
//KiKiд��һ�������Hello world!���ĳ���BoBo��ʦ������printf�����з���ֵ��
//���ܰ���д���������printf(��Hello world!��)�ķ���ֵ��
//#include<stdio.h>
//int main()
//{
//    int mm = printf("Hello world!");//ע��˴����ܼ�\n��
//    //��Ϊ�����ᵼ��Printf�ķ���ֵ�м�һ��Ӧ�õ�������
//    printf("\n");
//    printf("%d\n", mm);
//    return 0;
//}

//      �Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд����
//����������
//�������һ���ַ���
//���������
//������ַ�����ĸ��YES�����ǣ�NO����
//#include <stdio.h>
//int main()
//{
//	char mm = 0;
//	scanf("%c", &mm);
//	if (mm >= 'a' && mm <= 'z' || mm >= 'A' && mm <= 'Z')
//		printf("Yes");
//	else
//		printf("No");
//		return 0;
//}