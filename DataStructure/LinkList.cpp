#include "LinkList.h"

Status GetElem(LinkList *L, int i, ElemType* e)
{
	int j = 1;
	LinkNode *p;
	p = L->headNode;
	while (p && j<i)
	{
		p = p->nextNode;
		++j;
	}
	if (!p || j>i)
	{
		return ERROR;
	}
	*e = p->data;
	return OK;
}

Status ListInsert(LinkList* L, int i, ElemType e)
{
	int j = 1;
	LinkNode *p, *s;
	p = L->headNode;
	while (p && j<i)
	{
		p = p->nextNode;
		++j;
	}
	if(!p || j>i)
	{
		return ERROR;
	}
	s = new LinkNode;
	s->data = e;
	s->nextNode = p->nextNode;
	p->nextNode = s;
	return OK;
}

Status ListDelete(LinkList *L,int i)
{
	int j = 1;
	LinkNode* p,*s;
	p = L->headNode;
	while (p && j<i)
	{
		p = p->nextNode;
		++j;
	}
	if(!p||!p->nextNode || j>i)
	{
		return ERROR;
	}
	s = p->nextNode;
	p->nextNode = s->nextNode;
	delete s;
	return OK;
}

