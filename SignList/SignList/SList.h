#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SLDataType;

typedef struct
{
	SLDataType data;
	struct SListNode* next;

}SListNode;

void SListPrint(SListNode* pList);//��ӡ

SListNode* CreatListNode(SLDataType x);

void SListPushBack(SListNode** ppList, SLDataType x);//β��
void SListPopBack(SListNode** ppList);//βɾ
void SListPushFront(SListNode** ppList, SLDataType x);//ͷ��
void SListPopFront(SListNode** ppList);//ͷɾ