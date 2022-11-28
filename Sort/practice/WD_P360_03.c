#include"../Sort.h"

void func(int A[], int n){
    int B[n], k;
    for(int i = 0; i < n; i++){
        B[i] = A[i];
    }
    for(int i = 0; i < n; i++){
        k = 0;
        for(int j = 0; j < n; j++){
            if(B[j] < B[i]) k++;
        }
        A[k] = B[i];
    }
}

typedef struct node{
    int key;
    int count;
}node;

void func(node A[], int n){
    int B[n];
    for(int i = 0; i < n; i++){
        A[i].count = 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(A[i].key < A[j].key)
                A[j].count++;
            else
                A[i].count++;
        }
    }
    for(int i = 0; i < n; i++){
        B[A[i].count] = A[i].key;
    }
}