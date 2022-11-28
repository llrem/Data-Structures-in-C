#include"../Stack.h"

int isLegal(char A[], int n){
    int k = 0;
    for(int i = 0; i < n; i++){
        if(A[i] == 'I'){
            k++;
        }else{
            k--;
            if(k < 0) return 0;
        }
    }
    if(k == 0)
        return 1;
    else
        return 0;
}