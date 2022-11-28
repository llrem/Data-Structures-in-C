#include "../SqList.h"
#define INT_MAX 0x7fffffff

int getDistance(int a, int b, int c){
    return abs(a - b) + abs(b - c) + abs(c - a);
}

int minTripleGroup(int A[], int n, int B[], int m, int C[], int l){  //暴力解法
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < l; k++){
                int dst = getDistance(A[i], B[j], C[k]);
                if(dst < min){
                    min = dst;
                }
            }
        }
    }
    return min;
}

int xls_min(int a, int b, int c){    //a是否是三个数中最小的
    if(a <= b && a <= c)
        return 1;
    else
        return 0;
}

int minTripleGroup2(int A[], int n, int B[], int m, int C[], int l){  //更快的解法
    int i = 0, j = 0, k = 0, min = INT_MAX, dst;
    while(i < n && j < m && k < l && min > 0){  //当min=0时就不会有比min更小的距离了，所以退出循环
        dst = getDistance(A[i], B[j], C[k]);
        if(dst < min){
            min = dst;
        }
        if(xls_min(A[i], B[j], C[k])) i++;
        else if(xls_min(B[j], A[i], C[k])) j++;
        else k++;
    }
    return min;
}