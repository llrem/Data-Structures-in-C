#include"SqList.h"

int main(){
    SqList L;		//声明一个顺序表
    InitList(&L);

	for(int i=0;i<5;i++){	//为顺序表赋值
		ListInsert(&L,i+1,i);
	}

	ElemType e;
	for(int i=0;i<L.length;i++){	//打印顺序表
	GetElem(L,i+1,&e);
	printf("%d ",e);
	}
	return 0;
}