#include "../SqList.h"

int reverse(SqList L){
    int i = 0, j = L.length-1;
    int temp = 0;
    for(int k = 0; k < L.length / 2; k++){
        temp = L.elem[k];
        L.elem[i+k] = L.elem[j-k];
        L.elem[j-k] = temp;
    }
    return 1;
}