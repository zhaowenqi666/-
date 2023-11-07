
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
//�����ʼ��
bool InitList(LinkList& L)
{
	L = new Lnode;
	L->next = nullptr;
	return true;
}
//�ж������Ƿ�Ϊ��
bool IsEmpty(LinkList& L) {
	if (L->next) {
		return false;
	}
	else {
		return true;
	}
}
//��������
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
//�������
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