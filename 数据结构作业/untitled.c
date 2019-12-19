//6.1
//编写递归算法，计算二叉树中叶子结点的个数。

#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode
{
	char data;
	struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;
//尝试一下中序和后序的构建
void CreateBiTree(BiTree * T){//构建树,前序
	char ch;
	scanf("%c", &ch);
	if(ch == '#')
		*T = NULL;
	else {
		*T = (BiTree)malloc(sizeof(BiTNode));
		//if(!*T)
		//	exit(OVERFLOW);//?
		(*T)->data = ch;
		CreateBiTree(&(*T)->lchild);
		CreateBiTree(&(*T)->rchild);
	}
}
int CountLeaf(BiTree T){
	static int cnt = 0;//运用静态变量的性质???
	if(T){
		if(T->lchild==NULL && T->rchild==NULL)
			cnt++;
		CountLeaf(T->lchild);
		CountLeaf(T->rchild);
	}
	printf("leaves' num: %d.\n", cnt);

	return cnt;
}

int main()
{
	//AB#D##C##
	BiTree *pa;
	CreateBiTree(pa);
	CountLeaf(pa);
	//prinf("leaves' num: %d.\n", cnt);
	return 0;
}
