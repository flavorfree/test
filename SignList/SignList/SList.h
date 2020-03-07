#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SLDataType;

typedef struct
{
	SLDataType data;
	struct SListNode* next;

}SListNode;

void SListPrint(SListNode* pList);//¥Ú”°

SListNode* CreatListNode(SLDataType x);

void SListPushBack(SListNode** ppList, SLDataType x);//Œ≤≤Â
void SListPopBack(SListNode** ppList);//Œ≤…æ
void SListPushFront(SListNode** ppList, SLDataType x);//Õ∑≤Â
void SListPopFront(SListNode** ppList);//Õ∑…æ