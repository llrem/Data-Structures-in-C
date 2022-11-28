#include "../LinkList.h"

LNode* findLoopStart(LinkList L){
    LNode *fast = L, *slow = L;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }
    if(fast == NULL || fast->next == NULL){
        return NULL;
    }
    LNode *p1 = L, *p2 = slow;  
    while(p1 != p2){
        p1 = p1->next;
        p2 = p2->next;
    }
    return p1;
}