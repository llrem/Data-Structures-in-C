#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define MAX_VERTEX_NUM 100
typedef int ElemType;

typedef struct{
    ElemType *elem;
    int size;
    int length;
} SqList;

void SelectSort(ElemType A[],int n);
void InsertSort(ElemType A[],int n);
void bubbleSort(ElemType A[],int n);
int Partition(ElemType A[],int low,int high);
void QuickSort(ElemType A[],int low,int high);
int Binary_Search(SqList L,ElemType key);
void BuildMaxHeap(ElemType A[], int len);
void HeadAdjust(ElemType A[], int k, int len);