#include "../SqList.h"

int reverse(SqList* L, int i, int j){
    if(i > j){
        return 0;
    }
    int n = (j - i + 1) / 2;
    for(int k = 0; k < n; i++, j--, k++){
        int temp = L->elem[i];
        L->elem[i] = L->elem[j];
        L->elem[j] = temp;
    }
    return 1;
}

int exchange(SqList* L, int a, int b){
    reverse(L, 0, L->length-1);
    reverse(L, 0, b-1);
    reverse(L, b, L->length-1);
}