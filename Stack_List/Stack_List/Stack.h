#pragma once

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct NodeList 
{
	int data;
	struct NodeList* pNext;
}Node, *pNode;

typedef struct Stack
{
	pNode pTop;
	pNode pBottom;
}Stack, *pStack;

void Init(pStack pS);
void Pop(pStack);
void Print(pStack pS);
void Clear(pStack pS);

