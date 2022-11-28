#include "../SqList.h"

int function(int A[], int n){
    int i, *B;
    B = (int*)malloc(sizeof(int) * n);
    memset(B, 0, sizeof(int) * n);
    for(i = 0; i < n; i++){
        if(0 < A[i] && A[i] <= n)
            B[A[i]-1] = 1;
    }
    for(i = 0; i < n; i++){
        if(B[i] == 0)
            break;
    }
    return i + 1;
}