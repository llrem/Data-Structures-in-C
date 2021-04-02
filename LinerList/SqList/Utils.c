#include<stdio.h>
#include"Sqlist.h"

Status merge(SqList *L1,SqList L2){//合并两个顺序表
	int la_len, lb_len;
	la_len = ListLength(*L1);
	lb_len = ListLength(L2);

	for(int i=1;i<=lb_len;i++){
		ElemType e;
		GetElem(L2,i,&e);
		if(!LocateElem(L1,e,equal)){
			ListInsert(L1,++la_len,e);
		}
	}
	return 0;
}

Status equal(ElemType a,ElemType b){//判断两个数是否相等
	if(a==b){
		return 1;
	}
	else{
		return 0;
	}
}

Status del_min(SqList *L, ElemType *e){//王道顺序表P17综合应用题1
	if(L->length==0){
		return ERROR;
	}

	int m=0;
	*e=L->elem[1];
	for(int i=0;i<L->length;i++){
		if(L->elem[i]<*e){
			*e=L->elem[i];
			m=i;
		}
	}
	L->elem[m]=L->elem[L->length-1];
	L->length--;
	return OK;
}

Status reverse(SqList *L){//王道顺序表P17综合应用题2
	ElemType e;
	for(int i=0;i<L->length/2;i++){
		e=L->elem[i];
		L->elem[i]=L->elem[L->length-1-i];
		L->elem[L->length-1-i]=e;
	}
	return OK;
}

Status delete_x_1(SqList *L, ElemType x){//王道顺序表P17综合应用题3解1
	int k=0;
	for(int i=0;i<L->length;i++){
		if(L->elem[i]!=x){
			L->elem[k]=L->elem[i];
			k++;
		}
	}
	L->length=k;
	return OK;
}

Status delete_x_2(SqList *L, ElemType x){//王道顺序表P17综合应用题3解2
	int k=0;
	for(int i=0;i<L->length;i++){
		if(L->elem[i]==x)
			k++;
		else
			L->elem[i-k]=L->elem[i];
	}
	L->length-=k;
	return OK;
}

Status delete_s_t(SqList *L,ElemType s,ElemType t){//王道顺序表P17综合应用题4
	if(s>=t||L->length==0){
		return ERROR;
	}
	int i,j;
	for(i=0;i<L->length&&L->elem[i]<s;i++);//i为第一个等于s的元素的下标
	if(i>=L->length){
		return ERROR;
	}
	for(j=i;i<L->length&&L->elem[j]<=t;j++);//j为第一个大于t的元素的下标
	for(;j<L->length;i++,j++){
		L->elem[i]=L->elem[j];
	}
	L->length=i;
	return OK;
}

Status delete_s_t2(SqList *L,ElemType s,ElemType t){//王道顺序表P17综合应用题5
	if(s>=t||L->length==0){
		return ERROR;
	}
	int k=0;
	for(int i=0;i<L->length;i++){
		if(L->elem[i]<s||L->elem[i]>t){
			L->elem[k]=L->elem[i];
			k++;
		}
	}
	L->length=k;
	return OK;
}

Status delete_same(SqList *L){//王道顺序表P17综合应用题6
	int k=0;
	for(int i=1;i<L->length;i++){
		if(L->elem[k]!=L->elem[i]){
			L->elem[++k]=L->elem[i];
			k++;
		}
	}
	L->length=k+1;
	return OK;
}

Status merge2(SqList L1,SqList L2,SqList *L3){//王道顺序表P17综合应用题7
	if(L1.length+L2.length>L3->size){
		return ERROR;
	}
	int i=0,j=0,k=0;
	while (i<L1.length&&j<L2.length)
	{
		if(L1.elem[i]<=L2.elem[j]){
			L3->elem[k++]=L1.elem[i++];
		}
		else {
			L3->elem[k++]=L2.elem[j++];
		}
	}
	while(i<L1.length){
		L3->elem[k++]=L1.elem[i++];
	}
	while(j<L2.length){
		L3->elem[k++]=L2.elem[j++];
	}
	L3->length=k;
	return OK;
}

Status reverse2(ElemType A[],int left,int right,int arraySize){
	if(left>=right||right>arraySize){
		return ERROR;
	}
	int len=right-left+1;
	for(int i=0;i<len/2;i++){
		int s = A[left-1+i];
		A[left-1+i]=A[right-1-i];
		A[right-1-i]=s;
	}
	return OK;
}

Status exchange(ElemType A[],int m,int n,int arraySize){//王道顺序表P17综合应用题8
	reverse2(A,1,m+n,arraySize);
	reverse2(A,1,n,arraySize);
	reverse2(A,n+1,m+n,arraySize);
	return OK;
}

Status SearchExchangeInsert(SqList *L,ElemType x){//王道顺序表P17综合应用题9
	int low=0,high=L->length-1,mid;

	while(low<=high){
		mid=(low+high)/2;
		if(L->elem[mid]==x){
			break;
		}
		if(L->elem[mid]<x){
			low=mid+1;
		}
		if(L->elem[mid]>x){
			high=mid-1;
		}
	}
	if(L->elem[mid]==x&&mid!=L->length-1){
		ElemType k=L->elem[mid];
		L->elem[mid]=L->elem[mid+1];
		L->elem[mid+1]=k;
	}
	if(low>high){
		for(int i=L->length-1;i>high;i++){
			L->elem[i+1]=L->elem[i];
		}
		L->elem[high+1]=x;
		L->length++;
	}
	return OK;
}

