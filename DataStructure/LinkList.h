#pragma once
typedef int ElemType;
typedef int Status;
constexpr Status ERROR = -1;
constexpr Status OK = 0;

struct LinkNode
{
    ElemType data;
    struct LinkNode* nextNode;
};

struct LinkList
{
	LinkNode *headNode = new LinkNode;
};

Status GetElem(LinkList L, int i, ElemType* e);
Status ListInsert(LinkList* L, int i, ElemType e);
Status ListDelete(LinkList* L, int i);