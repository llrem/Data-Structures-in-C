#include"../Sort.h"

void func(int A[], int m, int n){
    int B[m + n + 1];
    int p = 1, q = m + 1, k = 1;
    for(int i = 0; i < m + n + 1; i++){
        B[i] = A[i];
    }
    while(p != m + 1 && q != m + n + 1){
        B[p] <= B[q] ? (A[k++] = B[p++]) : (A[k++] = B[q++]);
    }
    while(p != m + 1) A[k++] = B[p++];
    while(q != m + n + 1) A[k++] = B[q++];
}