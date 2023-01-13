#pragma once
#define MAXSIZE 20

typedef int SElemType;
typedef int Status;

constexpr Status ERROR = -1;
constexpr Status OK = 0;

struct SqStack
{
	SElemType data[MAXSIZE];
	int top;  // ”√”⁄’ª∂•÷∏’Î
};

struct SqDoubleStack
{
	SElemType data[MAXSIZE];
	int top1;
	int top2;
};

Status Push(SqStack* s, SElemType e);
Status Pop(SqStack* s, SElemType* e);

Status Push(SqDoubleStack* s, SElemType e, int stackNumber);
