#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"t_x_l.h"
enum un//����ѡ���ö��
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
	int i = 0;//ѭ��ѡ�����

	struct binbin mm;//����ͨѶ¼

	init(&mm);//��ʼ��ͨѶ¼
	do
	{
		printf("* * * *   �� �� ͨ Ѷ ¼   * * * *\n");
		printf("* * * *	 1: �½�  2: ����  * * * *\n");
		printf("* * *    3: ����  4: ȫ��ʾ   * * \n");
		printf("* * * *	 5: �޸�  6: ɾ��  * * * *\n");
		printf("* * * *	      0: �˳�      * * * *\n");
		printf("\n��������Ҫ�Ĺ���: \n");
		scanf("%d", &i);
		switch (i)
		{
			case _add:
				add(&mm);//�½�
				break;
			case _qos:
				qos(&mm);//����(������ĸ)
				break;
			case _find:
				find(&mm);//����
				break;
			case _show:
				show(&mm);//ȫ��ʾ
				break;
			case _modif:
				modif(&mm);//�޸�
				break;
			case _del:
				del(&mm);//ɾ��
				break;
			case _fin:
				Destro(&mm);
				printf("���˳�\n");
				break;
			default:
				printf("�������\n");
				break;
		}
	} while (i);
	return 0;
}