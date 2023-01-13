#include "SeqList.h"

Status GetElem(SqList L, int i, ElemType* e)
{
    if (L.length == 0 || i<0 || i > L.length - 1)
        return 1;
    *e = L.data[i];
    return 0;
}

Status ListInsert(SqList* L, int i, ElemType e)
{
    int k;
    if (L->length == MAXSIZE)
        return 1;
    if (i < 0 || i > L->length)     //插入位置小于第一个位置或大于最后一位的后一个位置
        return 1;
    if (i < L->length)                //插入位置若不在表尾
    {
        for (k = L->length - 1; k >= i; --k)
        {
            L->data[k + 1] = L->data[k];
        }
    }
    L->data[i] = e;
    L->length++;
    return 0;
    
}

Status ListDelete(SqList* L, int i, ElemType* e)
{
    int k;
    if (L->length == 0)
        return 1;
    if (i<0 || i>L->length - 1)
        return 1;
    *e = L->data[i];
    if (i < L->length - 1)       //删除位置不在最后一个元素位置
    {
        for (k = i + 1; k <= L->length - 1; ++k)
        {
            L->data[k - 1] = L->data[k];
        }
    }
    L->length--;
    return 0;
}

