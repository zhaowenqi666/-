#include <stdio.h>
typedef char ElemType;
struct Lnode {
	ElemType data;
	Lnode* next;
};
typedef Lnode* LinkList;
int LinkListLength(LinkList& L) {
	Lnode* p;
	p = L->next;
	int count = 0;
	while (p)
	{
		p = p->next;
		count++;
	}
	return count;
}
