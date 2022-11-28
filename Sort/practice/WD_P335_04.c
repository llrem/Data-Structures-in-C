#include"../Sort.h"

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//这种和 03题中的两种方法都可以根据枢轴划分子表
int Partition2(int A[], int low, int high){
    int rand_Index = low + rand() % (high - low + 1);
    swap(&A[rand_Index], &A[low]);

    int pivot = A[low];
    int i = low;
    for(int j = low + 1; j <= high; j++){
        if(A[j] < pivot){
            swap(&A[++i], &A[j]);
        }
    }
    swap(&A[i], &A[low]);
    return i;
}