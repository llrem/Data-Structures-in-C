#include"../Sort.h"

typedef enum{
    RED, WHITE, BLUE
}color;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Flag_Arrange(color A[], int n){
    int i = 0, j = n - 1, k = 0;
    while(k <= j){
        switch (A[k]){
            case RED:
                swap(&A[i++], &A[k++]);
                break;
            case BLUE:
                swap(&A[j--], &A[k]);
                break;
            case WHITE:
                k++;
                break;
        }
    }
}