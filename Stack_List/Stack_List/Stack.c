#include"Stack.h"

void Init(pStack pS)
{
	pS->pTop = (pNode)malloc(sizeof(Node));
	if (NULL == pS->pTop)
	{
		printf("·ÖÅä¿Õ¼äÊ§°Ü\n");
		return -1;
	}
	else
	{
		pS->pBottom = pS->pTop;
		pS->pBottom->pNext = NULL;
	}	
}

void Push(pStack pS, int val)
{
	pNode pNew = (pNode)malloc(sizeof(Node));
	if (pNew == NULL)
	{
		printf("¿ª±Ù¿Õ¼äÊ§°Ü\n");
	}
	else
	{
		pNew->data = val;
		pNew->pNext = pS->pTop;
		pS->pTop = pNew;
	}
	return;
}

void Print(pStack pS)
{
	pNode p = pS->pTop;
	if (pS->pTop == pS->pBottom)
	{
		printf("¸ÃÕ»Îª¿ÕÕ»\n");
	}
	while (p != pS->pBottom)
	{
		printf("%d ", p->data);
		p = p->pNext;
	}
	printf("\n");
}
void Pop(pStack pS)
{
	pStack p = pS;
	if (p->pTop == p->pBottom)
	{
		printf("¸ÃÕ»Îª¿Õ\n");
	}
	pNode p1 = p->pTop;
	p->pTop = p->pTop->pNext;
	free(p1);
	p = NULL;
}

void Clear(pStack pS)
{
	while (pS->pTop!=pS->pBottom)
	{
		pNode p = pS->pTop;
		pNode q = p->pNext;
		free(p);
		pS->pTop = q;
	}
}