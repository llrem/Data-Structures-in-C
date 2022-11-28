#include<stdio.h>

int BinSearchRec(int A[], int left, int right, int x){
    if(left > right){
        return -1;
    }
    int mid = (left + right)/2;
    if(A[mid] == x){
        return mid;
    }
    else if(A[mid] < x){
        return BinSearchRec(A, left, mid-1, x);
    }
    else{
        return BinSearchRec(A, mid+1, right, x);
    }
}