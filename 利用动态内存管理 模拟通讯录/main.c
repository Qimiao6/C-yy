#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"t_x_l.h"
enum un//用于选择的枚举
{
	_fin,
	_add,
	_qos,
	_find,
	_show,
	_modif,
	_del
};
int main()
{
	int i = 0;//循环选择变量

	struct binbin mm;//创建通讯录

	init(&mm);//初始化通讯录
	do
	{
		printf("* * * *   斌 斌 通 讯 录   * * * *\n");
		printf("* * * *	 1: 新建  2: 排序  * * * *\n");
		printf("* * *    3: 查找  4: 全显示   * * \n");
		printf("* * * *	 5: 修改  6: 删除  * * * *\n");
		printf("* * * *	      0: 退出      * * * *\n");
		printf("\n请输入需要的功能: \n");
		scanf("%d", &i);
		switch (i)
		{
			case _add:
				add(&mm);//新建
				break;
			case _qos:
				qos(&mm);//排序(按首字母)
				break;
			case _find:
				find(&mm);//查找
				break;
			case _show:
				show(&mm);//全显示
				break;
			case _modif:
				modif(&mm);//修改
				break;
			case _del:
				del(&mm);//删除
				break;
			case _fin:
				Destro(&mm);
				printf("已退出\n");
				break;
			default:
				printf("输入错误\n");
				break;
		}
	} while (i);
	return 0;
}