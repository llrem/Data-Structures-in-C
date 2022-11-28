#include"../Sort.h"

int isOdd(int x){
    return x % 2 == 1;
}

void move(int A[], int n){
    int i, temp, low, high = n - 1;
    for(i = 0; i < n && isOdd(A[i]); i++);
    low = i;
    temp = A[low];
    while(low < high){
        while(low < high && !isOdd(A[high])) high--;
            A[low] = A[high];
        while(low < high && isOdd(A[low])) low++;
            A[high] = A[low];
    }
    A[high] = temp;
}

void move2(int A[], int n){
    int i = 0, j = n - 1;
    while(i < j){
        while(i < j && A[i] % 2 != 0) i++;
        while(i < j && A[i] % 2 != 1) j--;
        if(i < j){
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
        i++; j++;
    }
}