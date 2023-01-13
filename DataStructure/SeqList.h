#pragma once
#define MAXSIZE 20

typedef int ElemType;
typedef int Status;
typedef struct
{
    ElemType data[MAXSIZE];
    int length;
}SqList;

// 获取元素
Status GetElem(SqList L, int i, ElemType* e);
// 插入元素
Status ListInsert(SqList* L, int i, ElemType e);
// 删除
Status ListDelete(SqList* L, int i, ElemType* e);
