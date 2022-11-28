#include "../SqList.h"

int findX(SqList L, int left, int right, int x){
    while(left <= right){
        int mid = (left + right) / 2;
        if(L.elem[mid] == x){
            if(mid != L.length - 1){
                int temp = L.elem[mid];
                L.elem[mid] = L.elem[mid+1];
                L.elem[mid+1] = temp;
            }
        }else if(L.elem[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    if(left > right){
        for(int i = L.length; i > left; i--){
            L.elem[i] = L.elem[i-1];
        }
        L.elem[left] = x;
    }
}