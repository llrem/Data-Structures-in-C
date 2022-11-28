#include "../SqList.h"

int findMain(int A[], int n){
    int k = 0, s = 0, temp = A[0];
    for(int i = 0; i < n; i++){
        if(A[i] == temp){
            k++;
        }else{
            k--;
        }
        if(k == 0){
            temp = A[i];
            k++;
        }
    }
    for(int i = 0; i < n; i++){
        if(A[i] == temp){
            s++;
        }
    }
    if(s > n / 2) 
        return temp;
    return -1;

}