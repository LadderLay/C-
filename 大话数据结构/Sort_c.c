#include <stdio.h>
#include "head.h"
#define MAXSIZE 10

typedef struct
{
    int r[MAXSIZE+1];//r[0]用作哨兵或临时变量
    int len;
}SqList;

void swap(SqList *L,int i,int j){
    int temp=L->r[i];
    L->r[i]=L->r[j];
    L->r[j]=temp;
}

void BubbleSort(SqList *L)//冒泡排序
{
    int i,j;
    for(i=1;i<L->length;i++){
        for(j=L->length-1;j>=i;j--){
            if(L->r[j]>l->r[j+1]){
                swap(L,j,j+1);
            }
        }
    }
}

void BubbleSort_2(SqList *L)//冒泡排序优化
{
    int i,j;
    Status flag =TRUE;
    for(i=1;i<L->length && flag;i++){
        flag=FALSE;
        for(j=L->length-1;j>=i;j--){
            if(L->r[j]>l->r[j+1]){
                swap(L,j,j+1);
                flag=TRUE;
            }
        }
    }
}

void SelectSort(SqList *L)
{
    int i,j,min;
    for(i=1;i<L->length;i++){
        min=i;
        for(int j=i+1;j<=L->length;j++){
            if(L->r[min]>L->r[j])
                min=j;
        }
    }
    if(i!=min)
        swap(L,i,min);
}

void InsertSort(SqList *L)
{
    int i,j;
    for(i=2;i<=L->length;i++){
        if(L->r[i]<L->r[i-1]){
            L->r[0]=L->r[i];//设置哨兵
            for(j=i-1;L->r[j]>L->r[0];j--)
                L->r[j+1]=L->r[j];//记录后移
            L->r[j+1]=L->r[0];
        }
    }
}

void ShellSort(SqList *L)
{
    int i,j;
    int increment=L->length;
    do{
        increment=increment/3+1;
        for(i=increment+1;i<=L->length;i++){

        }
    }
}
