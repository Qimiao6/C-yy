#pragma once
#include<assert.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#define SZ 100//����
#define NAME 20//����
#define PH 15//�绰
#define SITE 40//��ַ
#define GE 6//��ַ
#define DF 3//��ʼ��ָ���С
#define KR 2//ÿ�����ݴ�С

struct address//ͨѶ¼���
{
	char name[NAME];//����
	char gender[GE];//�Ա�
	char phone[PH];//�绰
	char site[SITE];//��ַ
};
////��̬�ڴ�汾
//struct binbin//ͨѶ¼�ļ���
//{
//	struct address binge[SZ];//ͨѶ¼���
//	int sz;//���������
//};
//��̬�ڴ�汾
struct binbin//ͨѶ¼�ļ���
{
	struct address* binge;//ͨѶ¼���
	int sz;//���������
	int capacity;//����
};

void init(struct binbin* mm);//��ʼ��ͨѶ¼
int add(struct binbin* mm); //�½�
void show(const struct binbin* mm);//ȫ��ʾ
int find(const struct binbin* mm);//��������
int modif( struct binbin* mm);//�޸�
int del(struct binbin* mm);//ɾ��
void qos(struct binbin* mm);//����
int check_capacity(struct binbin* mm);//��̬�ڴ�����
void Destro(struct binbin* mm);//�������ͷ��ڴ�
