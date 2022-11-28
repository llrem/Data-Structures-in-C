#include"../Sort.h"

void BubbleSort(int A[], int n){
    for(int i = 0; i < n / 2; i++){
        int flag = 1;
        for(int j = i; j < n - i - 1; j++){
            if(A[j] > A[j + 1]){
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                flag = 0;
            }
        }
        for(int j = n - i - 1; j > i; j--){
            if(A[j] < A[j - 1]){
                int temp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = temp;
                flag = 0;
            }
        }
        if(flag) break;
    }
}