#define _CRT_SECURE_NO_WARNINGS 1
//#define mm 100  //#define����ı�ʾ������
//#define xx 10     //ע�ⲻҪ��˫����
//#include<stdio.h>
//int main()
//{
//	
//	int vv[xx] = { 0 };
//	printf("%d", mm);
//
//	}
///                              if���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i <= 18)
//		printf("����");
//	else if (i > 18 && i < 35)
//		printf("����");
//	else
//
//		printf("����");
//	return 0;
//	}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n",i);		
//		i++;
//	}
//	return 0;
//}

        ///                             ѭ����֧
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int y = 2;
//	if (0 == i)//       2  if�ж�Ϊ�������¶γ���ִ�У����ߴ���鲻ִ��
//		if (2 == y)//   ����Ϊ�ٲ�ִ��
//			printf("hehe");
//		else//           ��ִ��
//			printf("haha");
//	return 0;//  1   ɶ���������
//}

//                          
//                          return
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int h = 0;
//	if (0 == i)
//	{
//		printf("hehe");
//		return 0;//������ֻҪִ����return,��ֱ�ӽ���������
//		//         ѭ���Ļ���ֱ��������һ���ж�
//	}
//	if (0 == h)
//		printf("haha");
//	return 0;
//}
//                    �ж�����ֵ������ż��
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i % 2 == 1)
//		printf("����");
//	else
//		printf("ż��");
//
//	return 0;
//}
//                            if���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (1 == i)
//		printf("����һ");
//	else if (2 == i)
//		printf("���ڶ�");
//	else if (3 == i)
//		printf("������");
//	else if (4 == i)
//		printf("������");
//	else if (5 == i)
//		printf("������");
//	else if (6 == i)
//		printf("������");
//	else if (7 == i)
//		printf("������");
//	else 
//		printf("�������");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//	case 1:
//		printf("����һ");
//		break;//ֹͣ
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//	printf("������");
//	break;
//		case 4:
//	printf("������");
//	break;
//		case 5:
//	printf("������");
//	break;
//		case 6:
//	printf("������");
//	break;
//		case 7:
//	printf("������");
//	break;
//		default :
//	printf("�������");
//	break;
//		}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//			case 1:
//			case 2:
//			case 3:
//			case 4:
//			case 5:
//		printf("������");
//		break;
//			case 6:
//			case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("�������");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d", i);
//		if (5 == i)
//			break;//ֱ�ӽ���ѭ��
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		
//		i++;
//		if (5 == i)
//			continue;//��ֹ����ѭ�������»ص��жϣ�
//		//            ������򽫲�ִ��
//		printf("%d", i);
//		
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char i = 0;
//	while ((i = getchar()) != EOF)//getchar�������ַ�
//	{
//		putchar(i);//putchar�Ǵ�ӡ�ַ�
//	}
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char i[20] = {0};
//	char b = 0;
//	char d = 0;
//
//	i = getchar();//getchar�������ַ�
//		putchar(i);//putchar�Ǵ�ӡ�ַ�
//		while (d = getchar() != '\n')
//		{
//			;
//		}
//	printf("��ӡ�Ƿ���ȷa/b\n");
//	getchar("%c",&b);
//	if (b == 'a')
//		printf("��ȷ");
//	else
//	printf("����");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ii[20] = { 0 };
//	int d = 0;
//	printf("����������:>");
//		scanf("%s", ii);
		/*printf("�������������:%s\n", ii);
		printf("ȷ����������a��ȡ������a");*/
//		while ((d = getchar()) != '\n')
//		{
//			;
//		}
//		printf("ȷ����������(Y/N)");
//		int i = getchar();
//		if (i=='Y')
//		    printf("��ȷ��");
//		else
//			printf("��ȡ��");
//	return 0;
//}

//                               for  ѭ��

//����while��һ��������
//#include <stdio.h>
//int main()
//{
//	int mm = 1;//ѭ����ʼ������
//	while (mm < 10)//ѭ���жϲ���
//	{
//		printf("%d\n", mm);
//		mm++;//ѭ����������
//	}
//	return 0;
//}
//���Ͽ��Կ���ѭ�������������


//���濪ʼ��ʽ��for���

//#include <stdio.h>
//int main()
//{
//
//	for (int i = 1; i <= 10; i++)//������ѵ�������������
//	{
//		if (5 == i)
//			break;   //ֱ������ѭ��ִ����һ�������
//			continue;//��ʹ������������ѭ��
//		printf("%d\n", i);
//	};
//
//	return 0;
//}
//         for���0-10
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d",i);
//	}
//	return 0;
//}