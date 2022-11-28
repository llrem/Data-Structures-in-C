#include"../Sort.h"

int kth_elem(int A[], int low, int high, int k){
    int pivot = A[low];
    int temp_low = low, temp_high = high;
    while(low < high){
        while(low < high){
            while(low < high && A[high] >= pivot) high--;
                A[low] = A[high];
            while(low < high && A[low] <= pivot) low++;
                A[high] = A[low];
        }
        A[low] = pivot;

        if(low == k){
            return A[k];
        }else if(low > k){
            return kth_elem(A, temp_low, low - 1, k);
        }else{
            return kth_elem(A, low + 1, temp_high, k);
        }
    }
}