#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void SListPrint(SListNode* pList)
{
	SListNode* cur = pList;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

SListNode* CreatListNode(SLDataType x)//创造新的结点
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SListPushBack(SListNode** ppList, SLDataType x)//尾插
{
	SListNode*newnode = CreatListNode(x);

	if (*ppList == NULL)//链表为空的情况
	{
		*ppList = newnode;
	}
	else
	{
		SListNode* cur = *ppList;
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}

void SListPopBack(SListNode** ppList)//尾删
{
	if (*ppList == NULL)//无结点情况
	{
		return;
	}
	else if ((*ppList)->next == NULL)//只有一个结点情况
	{
		free(*ppList);
		*ppList = NULL;
	}
	else//有多个结点情况
	{
		SListNode* cur = *ppList;
		SListNode* prev = NULL;
		while (cur->next != NULL)
		{
			prev = cur;
			cur = cur->next;
		}
		free(cur);

		prev->next = NULL;
	}
}

void SListPushFront(SListNode** ppList, SLDataType x)//头插
{
	SListNode* newnode = CreatListNode(x);
	newnode->next = *ppList;
	*ppList = newnode;
}

void SListPopFront(SListNode** ppList)//头删
{
	if (*ppList == NULL)
	{
		return;
	}
	else
	{
		SListNode* next = (*ppList)->next;
		free(*ppList);
		*ppList = next;
	}
}