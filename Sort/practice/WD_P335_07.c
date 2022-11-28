#include"../Sort.h"

void setPartition(int A[], int n, int low, int high){
    int temp_low = low, temp_high = high;
    int pivot = A[low];
    int k = n / 2;

    while(low < high){
        while(low < high && A[high] >= pivot) high--;
            A[low] = A[high];
        while(low < high && A[low] <= pivot) low++;
            A[high] = A[low];
    }
    A[low] = pivot;

    if(low == k - 1){
        return;
    }else if(low > k - 1){
        setPartition(A, n, temp_low, low - 1);
    }else{
        setPartition(A, n, low + 1, temp_high);
    }
}