#include <stdio.h>
#include "head.h"
#define MAXSIZE 20

typedef int ElemType;//此处以int类型为例

typedef struct
{
    ElemType data[MAXSIZE];
    int length;
}SqList;

Status GetElem(SqList L, int i, ElemType *e)
{
    if(L.length==0 || i<1 || i>L.length)
        return ERROR;
    *e=L.data[i-1];
    return OK;
}

Status ListInsert(SqList *L,int i, ELemType e)//前插入
{
    int k;
    if(L->length==MAXSIZE)
        return ERROR;//实现动态扩展》？
    if(i<1 || i>L.length+1)
        return ERROR;
    if(i<=L.length){
        for(k=L->length-1;k>i-1;k--){
            L->data[k+1]=L->data[k];
        }
    }
    L->data[i-1]=e;
    L->length++;
    return OK;
}

Status ListDelete(SqList *L,int i,ELemType *e)
{
    int k;
    if(L->length==0)
        return ERROR;
    if(i<1 || i>L->length)
        return ERROR;
    *e=L->data[i-1];
    if(i<L->length){
        for(k=i;k<L->length;k++)
            L->data[i-1]=L->data[i];
    }
    L->length--;
    return OK;
}
