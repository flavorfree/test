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

SListNode* CreatListNode(SLDataType x)//�����µĽ��
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SListPushBack(SListNode** ppList, SLDataType x)//β��
{
	SListNode*newnode = CreatListNode(x);

	if (*ppList == NULL)//����Ϊ�յ����
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

void SListPopBack(SListNode** ppList)//βɾ
{
	if (*ppList == NULL)//�޽�����
	{
		return;
	}
	else if ((*ppList)->next == NULL)//ֻ��һ��������
	{
		free(*ppList);
		*ppList = NULL;
	}
	else//�ж��������
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

void SListPushFront(SListNode** ppList, SLDataType x)//ͷ��
{
	SListNode* newnode = CreatListNode(x);
	newnode->next = *ppList;
	*ppList = newnode;
}

void SListPopFront(SListNode** ppList)//ͷɾ
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