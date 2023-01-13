#include "Stack.h"

Status Push(SqStack* s, SElemType e)
{
	if(s->top == MAXSIZE-1)
	{
		return ERROR;
	}
	s->data[s->top] = e;
	s->top++;
	return OK;
}

Status Pop(SqStack* s, SElemType* e)
{
	if(s->top==-1)
	{
		return ERROR;
	}
	*e = s->data[s->top];
	s->top--;
	return OK;
}
