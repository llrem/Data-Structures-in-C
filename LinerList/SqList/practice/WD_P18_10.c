#include "../SqList.h"

void reverse(int L[], int i, int j){
    int temp;
    for(int k = 0; k < (j - i + 1) / 2; k++){
        temp = L[i + k];
        L[i + k] = L[j - k];
        L[j - k] = temp;
    }
}

void converse(int L[], int n, int p){
    reverse(L, 0, p-1);
    reverse(L, p, n-1);
    reverse(L, 0, n-1);
}