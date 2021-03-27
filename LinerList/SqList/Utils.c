#include<stdio.h>
#include"Sqlist.h"

Status merge(SqList *la,SqList lb){  //合并两个顺序表
	int la_len, lb_len;
	la_len = ListLength(*la);
	lb_len = ListLength(lb);

	for(int i=1;i<=lb_len;i++){
		ElemType e;
		GetElem(lb,i,&e);
		if(!LocateElem(la,e,equal)){
			ListInsert(la,++la_len,e);
		}
	}
	return 0;
}

Status equal(ElemType a,ElemType b){		//判断两个数是否相等
	if(a==b){
		return 1;
	}
	else{
		return 0;
	}
}