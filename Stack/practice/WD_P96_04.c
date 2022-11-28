#include"../Stack.h"
#include"../../Queue/Queue.h"

typedef struct car{
    int id;
    char type;
}car;

int ferry(car cars[], int n){
    int s = 10, k = 0, x;
    Queue Q1, Q2;
    for(int i = 0; i < n; i++){
        if(cars[i].type == 'K'){
            EnQueue(Q1, cars[i].id);
        }
        if(cars[i].type == 'H'){
            EnQueue(Q2, cars[i].id);
        }
    }
    while(s > 0 && (!IsEmpty(Q1) || !IsEmpty(Q2))){ 
        if(!IsEmpty(Q1) && k != 4){
            DeQueue(Q1, &x);
            printf("客车%d上船", x);
        }
        else if(!IsEmpty(Q2) && k == 4){
            DeQueue(Q2, &x);
            printf("货车%d上船", x);
            k = 0;
        }
        else if(IsEmpty(Q1) && !IsEmpty(Q2)){
            DeQueue(Q2, &x);
            printf("货车%d上船", x);
        }else if(!IsEmpty(Q1) && IsEmpty(Q2)){
            DeQueue(Q1, &x);
            printf("客车%d上船", x);
        }
        s--;
    }
}