#include"Stack.h"

int main()
{
	Stack s;
	Init(&s);
	Push(&s, 1);
	Push(&s, 4);
	Push(&s, 6);
	Print(&s);
	Pop(&s);
	Print(&s);
	Clear(&s);
	Print(&s);
	return 0;
}