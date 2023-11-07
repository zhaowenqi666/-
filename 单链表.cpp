
#include <iostream>
using namespace std;
typedef struct ElemType {
	char num[9];
};
struct Lnode
{
	ElemType data;
	Lnode* next;
};
typedef Lnode* LinkList;
//链表初始化
bool InitList(LinkList& L)
{
	L = new Lnode;
	L->next = nullptr;
	return true;
}
//判断链表是否为空
bool IsEmpty(LinkList& L) {
	if (L->next) {
		return false;
	}
	else {
		return true;
	}
}
//销毁链表
bool DestroyList(LinkList& L) {
	if (IsEmpty(L)) {
		cerr << "empty List!" << endl;
		return false;
	}
	while (L) {
		auto temp = L->next;
		delete L;
		L = temp;
	}
	return true;
}
//清空链表
bool ClearList(LinkList& L) {
	Lnode* p,*q;
	p = L->next;
	while (p) {
		q = p->next;
		delete p;
		p = q;
	}
	L->next = NULL;
	return true;
}
//int main() {
//	LinkList myList;
//	if (InitList(myList)) {
//		printf("List initialized successfully.\n");
//	}
//	else {
//		printf("List initialization failed.\n");
//	}
//	if (IsEmpty(myList)) {
//		printf("List is empty.\n");
//	}
//	else {
//		printf("List is not empty.\n");
//	}
//	return 0;
//}