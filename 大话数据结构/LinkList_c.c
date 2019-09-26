#include <stdio.h>

typedef struct Node
{
    ELemType data;
    struct Node *next;
} Node;
typedef struct Node *LinkList;

int GetElem(LinkList *L, int i, ELemType *e)
{
    int j;
    LinkList p;
    p=L->next;
    j=1;
    while(p && j<i){
        p=p->next;
        j++;
    }
    if(!p || j>i)
        return 0;
    *e=p->data;
    return 1;
}

int ListInsert(LinkList *L,int i,ELemType  *e)
{
    int j;
    LinkList p,s;
    p=*L;
    j=1;
    while(p && j<i){//先找到第i-1节点
        p=p->next;
        j++;
    }
    if(!p || j>i)
        return 0;
    s=(LinkList)malloc(sizeof(Node));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return 1;
}

int ListDelete(LinkList *L,int i,ELemType *e)
{
    int j;
    LinkList p, q;
    p= *L;
    j=1;
    while (p->next)
}
