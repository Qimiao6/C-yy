#define _CRT_SECURE_NO_WARNINGS 1
#include"t_x_l.h"
//void init(struct binbin* mm)//��ʼ��ͨѶ¼����̬�汾��
//{
//	assert(mm);
//	mm->sz = 0;
//	memset(mm->binge, 0, SZ * sizeof(struct address));
//}
void init(struct binbin* mm)//��ʼ��ͨѶ¼����̬�汾��
{
	assert(mm);
	mm->sz = 0;
	mm->capacity = 3;
	mm->binge = (struct address*)malloc( DF * sizeof(struct address));
}
int check_capacity(struct binbin* mm)//��̬�ڴ�����
{
	if (mm->sz == mm->capacity)
	{
		struct address* pp = (struct address*)realloc(mm->binge, (mm->sz + KR) * sizeof(struct address));
		if (pp == NULL)
		{
			perror("realloc\n");
			return 1;
		}
		mm->binge = pp;
		printf("�ڴ濪�ٳɹ�\n");
		mm->capacity += KR;
	}
	return 0;
}

int add(struct binbin* mm)//��̬�ڴ�汾
{
	int i = 0;
	i = check_capacity(mm);
	if (i)
	{
		printf("����ʧ��\n");
		return 0;
	}
	assert(mm);
	printf("�����½���������Ϣ��\n");
	printf("���������֣�\n");
	scanf("%s", mm->binge[mm->sz].name);
	printf("�������Ա�\n");
	scanf("%s", mm->binge[mm->sz].gender);
	printf("������绰��\n");
	scanf("%s", mm->binge[mm->sz].phone);
	printf("�������ַ��\n");
	scanf("%s", mm->binge[mm->sz].site);
	mm->sz++;
	printf("��ϵ���½��ɹ�\n");
	return 0;
}
//void add(struct binbin* mm)//�½�(��̬�ڴ�汾)
//{
//	if (mm->sz == SZ)
//	{
//		printf("�޷���� ͨѶ¼����\n");
//		return 0;
//	}
//	assert(mm);
//	printf("�����½���������Ϣ��\n");
//	printf("���������֣�\n");
//	scanf("%s", mm->binge[mm->sz].name);
//	printf("�������Ա�\n");
//	scanf("%s", mm->binge[mm->sz].gender);
//	printf("������绰��\n");
//	scanf("%s", mm->binge[mm->sz].phone);
//	printf("�������ַ��\n");
//	scanf("%s", mm->binge[mm->sz].site);
//	mm->sz++;
//	printf("��ϵ���½��ɹ�\n");
//}

void show(const struct binbin* mm)//ȫ��ʾ
{
	printf("��ϵ������\n");
	printf("%-20s","����");
	printf("%-15s","�Ա�");
	printf("%-40s","�绰");
	printf("%-6s\n","��ַ");
	int b = mm->sz;
	int i = 0;
	assert(mm);
	while (i < b)
	{
		printf("��ϵ��%d\n",i+1);
		printf("%-20s", mm->binge[i].name);
		printf("%-15s", mm->binge[i].gender);
		printf("%-40s", mm->binge[i].phone);
		printf("%-6s\n", mm->binge[i].site);
		i++;
	}
}


int find(const struct binbin* mm)
{
	int n = 0;
	char i[NAME] = { 0 };
	printf("������Ҫ���ҵĵ���ϵ��  ����: \n");
	scanf("%s", &i);
	while (n < mm->sz)
	{
		if (strcmp(mm->binge[n].name, i) == 0)
		{
			printf("�ҵ�����ϵ����Ϣ����\n");
			printf("\n��ϵ��%d\n", n + 1);
			printf("%-20s", mm->binge[n].name);
			printf("%-15s", mm->binge[n].gender);
			printf("%-40s", mm->binge[n].phone);
			printf("%-6s\n\n", mm->binge[n].site);
			return n;
		}
		n++;
	}
	printf("û�д���ϵ��\n\n\n");
	return -1;
}

int modif( struct binbin* mm)//�޸�
{
	int i = 0;
	int n = 0;
	do
	{
		n = find(mm);
		if (n == -1)
		{
			i ++;
			printf("����������\n\n");
			if (i == 3)
			{
				printf("���ڶ�δ���������ѡ��\n\n");
				return 0;
			}
		}
		else
			i = 0;
	} while (i);
	printf("������������ϵ����Ϣ��\n");
	printf("���������֣�\n");
	scanf("%s", mm->binge[n].name);
	printf("�������Ա�\n");
	scanf("%s", mm->binge[n].gender);
	printf("������绰��\n");
	scanf("%s", mm->binge[n].phone);
	printf("�������ַ��\n");
	scanf("%s", mm->binge[n].site);
	printf("��ϵ���޸ĳɹ�\n");
	return 0;
}

int del(struct binbin* mm)//ɾ��
{
	int i = 0;
	int n = 0;
	int tt = 0;
	int j = 0;
	do
	{
		n = find(mm);
		if (n == -1)
		{
			i++;
			printf("����������\n\n");
			if (i == 3)
			{
				printf("���ڶ�δ���������ѡ��\n\n");
				return 0;
			}
		}
		else
			i = 0;
	} while (i);
	printf("�Ƿ�Ҫɾ����ϵ��  %s\n", mm->binge[n].name);
		printf("ȷ������1\nȡ������2\n");
		scanf("%d", &tt);
		if (tt == 1)
		{
			for (j = n; n < mm->sz ; n++)
			{
				mm->binge[j] = mm->binge[j + 1];
			}
			mm->sz--;
		}
		printf("��ɾ�����\n");
		return 0;
}
int ADD(const void* p1,const void* p2)
{
	return strcmp(((struct address*)p1)->name,((struct address*)p2)->name);
}
void qos(struct binbin* mm)//����
{
	qsort(mm->binge, mm->sz, sizeof(struct address), ADD);
	printf("�������\n");
}

void Destro(struct binbin* mm)
{
	free(mm->binge) ;
	mm->binge = NULL;
	mm->capacity = 0;
	mm->sz = 0;
	printf("�ڴ����ͷ�\n");
}