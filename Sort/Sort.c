#include <stdio.h>
#include <stdbool.h>
#include "Sort.h"

//简单选择排序
void SelectSort(ElemType A[], int n){
    for(int i = 0;i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(A[j] < A[min]) min = j;
        }
        if(min != i){
            ElemType temp = A[i];
            A[i] = A[min];
            A[min] = temp; //swap(A[min],A[i]);
        }
    }
}

//直接插入排序
void InsertSort(ElemType A[], int n){
    int i, j, k;
    for(i = 1; i < n; i++){
        if(A[i] < A[i-1]){
            k = A[i];
            for(j = i-1; k < A[j]; --j){
                A[j + 1] = A[j];
            }
            A[j + 1] = k;
        }
    }
}

//冒泡排序
void bubbleSort(ElemType A[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        int flag = 1;
        for(j = n - 1; j > i; j--){
            if(A[j - 1] > A[j]){
                ElemType temp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = temp; //swap(A[j-1],A[j]);
                flag = 0;
            }
        }
        if(flag == 1) return;
    }
}

//快速排序
int Partition(ElemType A[], int low, int high){
    ElemType pivot = A[low];
    while(low < high){
        while(low < high && A[high] >= pivot) --high;
        A[low] = A[high];
        while(low < high && A[low] <= pivot) ++low;
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}

void QuickSort(ElemType A[], int low, int high){
    if(low < high){
        int pivotpos = Partition(A, low, high);
        QuickSort(A, low, pivotpos - 1);
        QuickSort(A, pivotpos + 1, high);
    }
}

//折半查找
int Binary_Search(SqList L, ElemType key){
    int low = 0, high = L.length - 1, mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(L.elem[mid] == key)
            return mid;
        else if(L.elem[mid] > key)
            high = mid - 1;
        else 
            low = mid + 1;
    }
    return -1;
}

//大根堆
void BuildMaxHeap(ElemType A[], int len){
    for(int i = len / 2; i > 0; i--){
        HeadAdjust(A, i, len);
    }
}

void HeadAdjust(ElemType A[], int k, int len){
    A[0] = A[k];
    for(int i = 2 * k; i <= len; i *= 2){
        if(i < len && A[i] < A[i + 1])
            i++;
        if(A[0] >= A[i]){
            break;
        }else{
            A[k] = A[i];
            k = i;
        }
    }
    A[k] = A[0];
}

//归并排序
int *B;
void MergeSort(int A[], int n, int low, int high){
    B = (int*)malloc((n + 1) * sizeof(int));
    Sort(A, low, high);
}

void Sort(int A[], int low, int high){
    if(low < high){
        int mid = (low + high) / 2;
        Sort(A, low, mid);
        Sort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

void Merge(int A[], int low, int mid, int high){
    int i, j, k;
    for(int k = low; k <= high; k++){
        B[k] = A[k];
    }
    for(i = low, j = mid + 1, k = i; i <= mid && j <= high; k++){
        if(B[i] <= B[j])
            A[k] = B[i++];
        else   
            A[k] = B[j++];
    }
    while(i <= mid) A[k++] = B[i++];
    while(j <= high) A[k++] = B[j++];
}