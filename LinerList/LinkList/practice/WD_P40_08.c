#include "../LinkList.h"

LNode* findCommon(LinkList L1, LinkList L2){
    int n1 = 0, n2 = 0;
    LNode *p1 = L1->next, *p2 = L2->next;
    while(p1 != NULL){
        n1++;
        p1 = p1->next;
    }
    while(p2 != NULL){
        n2++;
        p2 = p2->next;
    }
    p1 = L1->next, p2 = L2->next;
    if(n1 > n2){
        int k = n1 - n2;
        for(int i = 0; i < k; i++){
            p1 = p1->next;
        }
    }else{
        int k = n2 - n1;
        for(int i = 0; i < k; i++){
            p2 = p2->next;
        }
    }
    while(p1 != NULL && p2 != NULL){
        if(p1 == p2){
            return p1;
        }
        else{
            p1 = p1->next;
            p2 = p2->next;
        }
    }
}