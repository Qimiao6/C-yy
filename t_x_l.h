#pragma once
#include<assert.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#define SZ 100//人数
#define NAME 20//名字
#define PH 15//电话
#define SITE 40//地址
#define GE 6//地址
#define DF 3//初始化指针大小
#define KR 2//每次扩容大小

struct address//通讯录框架
{
	char name[NAME];//名字
	char gender[GE];//性别
	char phone[PH];//电话
	char site[SITE];//地址
};
////静态内存版本
//struct binbin//通讯录文件夹
//{
//	struct address binge[SZ];//通讯录框架
//	int sz;//存入的人数
//};
//动态内存版本
struct binbin//通讯录文件夹
{
	struct address* binge;//通讯录框架
	int sz;//存入的人数
	int capacity;//容量
};

void init(struct binbin* mm);//初始化通讯录
int add(struct binbin* mm); //新建
void show(const struct binbin* mm);//全显示
int find(const struct binbin* mm);//查找输入
int modif( struct binbin* mm);//修改
int del(struct binbin* mm);//删除
void qos(struct binbin* mm);//排序
int check_capacity(struct binbin* mm);//动态内存扩容
void Destro(struct binbin* mm);//结束后释放内存
