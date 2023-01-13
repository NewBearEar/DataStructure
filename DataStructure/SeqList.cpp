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
    if (i < 0 || i > L->length)     //����λ��С�ڵ�һ��λ�û�������һλ�ĺ�һ��λ��
        return 1;
    if (i < L->length)                //����λ�������ڱ�β
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
    if (i < L->length - 1)       //ɾ��λ�ò������һ��Ԫ��λ��
    {
        for (k = i + 1; k <= L->length - 1; ++k)
        {
            L->data[k - 1] = L->data[k];
        }
    }
    L->length--;
    return 0;
}

