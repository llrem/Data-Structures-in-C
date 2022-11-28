#include "../SqList.h"

int findMedian(int A[], int B[], int n){  //时间复杂度 O(n)
    int mid = (n + 1) / 2;
    int i = 0, j = 0, median;
    for(int k = 0; k < mid; k++){
        if(A[i] < B[j])
            median = A[i++];
        else
            median = B[j++];
    }
    return median;
}

int findMedian2(int A[], int B[], int n){  //时间复杂度 O(log n)
    int s1 = 0, d1 = n - 1, m1;            //s,d,m分别表示首位，末位，中位
    int s2 = 0, d2 = n - 1, m2;
    
    while(s1 != d1 || s2 != d2){
        m1 = (s1 + d1) / 2;
        m2 = (s2 + s2) / 2;
        if(A[m1] == B[m2]){
            return A[m1];
        }
        else if(A[m1] < B[m2]){
            if((s1 + d1) % 2 == 0){
                s1 = m1;
                d2 = m2;
            }else{
                s1 = m1 + 1;
                d2 = m2;
            }
        }
        else{
            if((s1 + d1) % 2 == 0){
                d1 = m1;
                s2 = m2;
            }else{
                d1 = m1;
                s2 = m2 + 1;
            }
        }
    }
    return A[s1] < B[s2] ? A[s1] : B[s2];
}