#include"SqList.h"

Status InitList(SqList *L){ //初始化顺序表
    L->elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
	if (!L->elem)
	{
		return ERROR;//存储分配失败
	}
	L->length = 0;//空表长度为0
	L->size = LIST_INIT_SIZE;//初始存储容量
	return OK;
}

Status ListInsert(SqList *L,int i,ElemType e){  //插入数据
 	if(i<1||i>L->length+1){
		return ERROR;//插入位置不对
	}
	if(L->size>=L->length){//扩展顺序表
		ElemType *newbase;
		newbase = (ElemType *)realloc(L->elem,(L->size+LISTINCREMENT)*sizeof(ElemType));
		if(!newbase)exit(OVERFLOW); //存储分配失败
		L->elem=newbase;
		L->size=L->size+LISTINCREMENT;
	}
	int j;   
	for(j=L->length;j>=i;j--){//移动表元素
		L->elem[j]=L->elem[j-1];
	}
	L->elem[i-1]=e; //赋值
	L->length+=1;
	return OK;
}

Status ListDelete(SqList *L,int i){	//删除数据
	if(L->length==0){
		return ERROR;//表为空
	}
	if(i<1||i>L->length){
		return ERROR;//删除位置不对
	}

	for(int j=i;j<L->length;j++){//移动元素
		L->elem[j-1]=L->elem[j];
	}
	L->length-=1;
	return OK;
}

Status GetElem(SqList L,int i,ElemType *e){ //获取元素
	if(L.length==0){
		return ERROR;//表为空
	}
	if(i<1&&i>L.length){//获取位置不正确
		return ERROR;
	}
	else{
		*e=L.elem[i-1];//赋值
		return OK;
	}
}

int ListLength(SqList L){//返回表元素个数
	return L.length;
}

int LocateElem(SqList *L, ElemType e, Status (*compare)(ElemType a,ElemType b)){//返回满足函数关系的元素的下标
	int i=1;
	ElemType *p = L->elem;
	
	while(i<=L->length&&!(*compare)(*p++,e)){//i小于表元素个数并且不满足函数关系
		++i;
	}
	if(i<=L->length)//满足函数关系的下标
		return i;
	else
		return 0;
}