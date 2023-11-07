#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;
typedef int ElemType;
typedef struct Lnode {
    ElemType data;
    struct Lnode* next;
}Lnode,*LinkList;
// ��ʼ������
Node* initList() {
    return NULL;
}
Lnode* initList1() {
    return NULL;
}
// ������Ԫ�ص�����ͷ
Node* insertFront(Node* head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = head;
    return newNode;
}
LinkList insertFront1(LinkList L, ElemType e) {
    LinkList newList = (LinkList)malloc(sizeof(LinkList));
    if (newList == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newList->data = e;
    newList->next = L;
    return newList;
}
Lnode* insertFront2(Lnode* L, ElemType e) {
    Lnode* newLnode= (Lnode*)malloc(sizeof(Lnode));
    if (newLnode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newLnode->data = e;
    newLnode->next = L;
    return newLnode;
}
// ��������ĳ���
int listLength(Node* head) {
    int length = 0;
    Node* current = head;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}
int LnodeListLength(LinkList L) {
    int count = 0;
    Lnode* p;
    p = L;
    while (p) {
        count++;
        p = p->next;
    }
    return count;
}

int main() {
    
    Node* myList = initList();
    Lnode* myList1 = initList1();
    // ���������һЩԪ��
    myList = insertFront(myList, 5);
    myList = insertFront(myList, 3);
    myList = insertFront(myList, 8);
    myList = insertFront(myList, 1);
    myList1 = insertFront2(myList1, 5);
    myList1 = insertFront2(myList1, 3);
    myList1 = insertFront2(myList1, 8);
    myList1 = insertFront2(myList1, 1);

    int length = listLength(myList);
    int count = LnodeListLength(myList1);
    printf("Length of the list: %d\n", count);

    // �ͷ������ڴ�
    Node* current = myList;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
