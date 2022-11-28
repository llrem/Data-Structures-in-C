#include"../Sort.h"
#include"../../LinerList/LinkList/LinkList.h"

void selectSort2(LinkList *L){
    LNode *h = *L, *p, *q, *r, *s;  //L为链表结点指针的指针，使用 *L实现类似引用的效果
    *L = NULL;
    while(h != NULL){
        p = s = h; q = r = NULL;
        while(p != NULL){
            if(p->data > s->data){
                s = p; 
                r = q;
            }
            q = p;
            p = p->next;
        }
        if(s == h){
            h = h->next;
        }else{
            r->next = s->next;
        }
        s->next = *L;
        *L = s;
    }
}