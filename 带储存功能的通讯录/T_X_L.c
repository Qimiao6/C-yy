#define _CRT_SECURE_NO_WARNINGS 1
#include"t_x_l.h"
//void init(struct binbin* mm)//初始化通讯录（静态版本）
//{
//	assert(mm);
//	mm->sz = 0;
//	memset(mm->binge, 0, SZ * sizeof(struct address));
//}
void seveop(struct binbin* mm)
{
	FILE* pp = fopen("tong_xun_lu.txt", "r");
	if (NULL == pp)
	{
		perror("fopen()");
		return;
	}
	struct address s = {0};
	while (fread(&s, sizeof(struct address), 1, pp))
	{
		mm->binge[mm->sz] = s;
		mm->sz++;
		check_capacity(mm);
	}
	fclose(pp);
	pp = NULL;
}
void init(struct binbin* mm)//初始化通讯录（动态版本）
{
	assert(mm);
	mm->sz = 0;
	mm->capacity = 3;
	mm->binge = (struct address*)malloc( DF * sizeof(struct address));
	seveop(mm);
}
int check_capacity(struct binbin* mm)//动态内存扩容
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
		printf("内存开辟成功\n");
		mm->capacity += KR;
	}
	return 0;
}

int add(struct binbin* mm)//动态内存版本
{
	int i = 0;
	i = check_capacity(mm);
	if (i)
	{
		printf("扩容失败\n");
		return 0;
	}
	assert(mm);
	printf("正在新建请输入信息：\n");
	printf("请输入名字：\n");
	scanf("%s", mm->binge[mm->sz].name);
	printf("请输入性别：\n");
	scanf("%s", mm->binge[mm->sz].gender);
	printf("请输入电话：\n");
	scanf("%s", mm->binge[mm->sz].phone);
	printf("请输入地址：\n");
	scanf("%s", mm->binge[mm->sz].site);
	mm->sz++;
	printf("联系人新建成功\n");
	return 0;
}
//void add(struct binbin* mm)//新建(静态内存版本)
//{
//	if (mm->sz == SZ)
//	{
//		printf("无法添加 通讯录已满\n");
//		return 0;
//	}
//	assert(mm);
//	printf("正在新建请输入信息：\n");
//	printf("请输入名字：\n");
//	scanf("%s", mm->binge[mm->sz].name);
//	printf("请输入性别：\n");
//	scanf("%s", mm->binge[mm->sz].gender);
//	printf("请输入电话：\n");
//	scanf("%s", mm->binge[mm->sz].phone);
//	printf("请输入地址：\n");
//	scanf("%s", mm->binge[mm->sz].site);
//	mm->sz++;
//	printf("联系人新建成功\n");
//}

void show(const struct binbin* mm)//全显示
{
	printf("联系人如下\n");
	printf("%-20s","名字");
	printf("%-15s","性别");
	printf("%-40s","电话");
	printf("%-6s\n","地址");
	int b = mm->sz;
	int i = 0;
	assert(mm);
	while (i < b)
	{
		printf("联系人%d\n",i+1);
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
	printf("请输入要查找的的联系人  姓名: \n");
	scanf("%s", &i);
	while (n < mm->sz)
	{
		if (strcmp(mm->binge[n].name, i) == 0)
		{
			printf("找到了联系人信息如下\n");
			printf("\n联系人%d\n", n + 1);
			printf("%-20s", mm->binge[n].name);
			printf("%-15s", mm->binge[n].gender);
			printf("%-40s", mm->binge[n].phone);
			printf("%-6s\n\n", mm->binge[n].site);
			return n;
		}
		n++;
	}
	printf("没有此联系人\n\n\n");
	return -1;
}

int modif( struct binbin* mm)//修改
{
	int i = 0;
	int n = 0;
	do
	{
		n = find(mm);
		if (n == -1)
		{
			i ++;
			printf("请重新输入\n\n");
			if (i == 3)
			{
				printf("由于多次错误请重新选择\n\n");
				return 0;
			}
		}
		else
			i = 0;
	} while (i);
	printf("请重新输入联系人信息：\n");
	printf("请输入名字：\n");
	scanf("%s", mm->binge[n].name);
	printf("请输入性别：\n");
	scanf("%s", mm->binge[n].gender);
	printf("请输入电话：\n");
	scanf("%s", mm->binge[n].phone);
	printf("请输入地址：\n");
	scanf("%s", mm->binge[n].site);
	printf("联系人修改成功\n");
	return 0;
}

int del(struct binbin* mm)//删除
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
			printf("请重新输入\n\n");
			if (i == 3)
			{
				printf("由于多次错误请重新选择\n\n");
				return 0;
			}
		}
		else
			i = 0;
	} while (i);
	printf("是否要删除联系人  %s\n", mm->binge[n].name);
		printf("确认输入1\n取消输入2\n");
		scanf("%d", &tt);
		if (tt == 1)
		{
			for (j = n; n < mm->sz ; n++)
			{
				mm->binge[j] = mm->binge[j + 1];
			}
			mm->sz--;
		}
		printf("已删除完成\n");
		return 0;
}
int ADD(const void* p1,const void* p2)
{
	return strcmp(((struct address*)p1)->name,((struct address*)p2)->name);
}
void qos(struct binbin* mm)//排序
{
	qsort(mm->binge, mm->sz, sizeof(struct address), ADD);
	printf("排序完成\n");
}

void Destro(struct binbin* mm)
{
	free(mm->binge) ;//释放内存
	mm->binge = NULL;//设为空指针
	mm->capacity = 0;//
	mm->sz = 0;
	printf("内存已释放\n");
}
void seve(struct binbin* mm)//二进制写
{
	int i = 0;
	FILE* pp = fopen("tong_xun_lu.txt", "wb");//写的方式打开
	if (NULL == pp)
	{
		perror("fopen()");
		return;
	}
	for (i = 0; i < mm->sz; i++)
	{
		fwrite(mm->binge+i,sizeof(struct address),1,pp);
	}
	fclose(pp);//关闭文件
	pp = NULL;
}
//void seve(struct binbin* mm)//fprintf版本
//{
//	int i = 0;
//	FILE* pp = fopen("tong_xun_lu.txt", "w");//写的方式打开
//	if (NULL == pp)
//	{
//		perror("fopen()");
//		return;
//	}
//	for (i = 0; i < mm->sz; i++)
//	{
//		fprintf(pp, "%-20s %-15s %-40s %-6s\n", mm->binge[i].name, mm->binge[i].gender,
//			mm->binge[i].phone, mm->binge[i].site);
//	}
//	fclose(pp);//关闭文件
//	pp = NULL;
//}