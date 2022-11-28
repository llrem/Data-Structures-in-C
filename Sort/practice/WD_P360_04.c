#include"../Sort.h"

int func(int A[], int n){
    int pivot = A[n - 1];
    int i = 0, j = n - 1;
    while(i < j){
        while(i < j && A[i] <= pivot) i++;
            A[j] = A[i];
        while(i < j && A[j] >= pivot) j--;
            A[i] = A[j];
    }
    A[j] = pivot;
    return i;
}