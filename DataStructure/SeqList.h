#pragma once
#define MAXSIZE 20

typedef int ElemType;
typedef int Status;
typedef struct
{
    ElemType data[MAXSIZE];
    int length;
}SqList;

// ��ȡԪ��
Status GetElem(SqList L, int i, ElemType* e);
// ����Ԫ��
Status ListInsert(SqList* L, int i, ElemType e);
// ɾ��
Status ListDelete(SqList* L, int i, ElemType* e);
