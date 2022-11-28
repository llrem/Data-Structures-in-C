#include"../Sort.h"

int IsMinHeap(int A[], int n){
    if(n % 2 == 0){
        if(A[n / 2] > A[n]){
            return 0;
        }
        for(int i = n / 2 - 1; i >= 1; i--){
            if(A[i] > A[2 * i] || A[i] > A[2 * i + 1]){
                return 0;
            }
        }
    }else{
        for(int i = n / 2; i >= 1; i--){
            if(A[i] > A[2 * i] || A[i] > A[2 * i + 1]){
                return 0;
            }
        }
    }
    return 1;
}