#include "LinkedList.h"
#include <iostream>
void LinkedList::insert_in_linked_list(struct Listnode **head, int data, int position){
    int k = 1;
    struct Listnode *p, *q, *new_node;
    new_node = (Listnode *)malloc(sizeof(struct Listnode));
    if(!new_node){
        printf("Memory Error!");
        return;
    }
    new_node->data = data;
    p = *head;
    if(position == 1){ // insert in the first of array
        new_node->next = p;
        *head = new_node;
    }
    else{
        while(p!=NULL && k<position){//patrol in the linked list
            k++;
            q = p;
            p = p->next;
        }
        q->next = new_node;
        new_node->next = p;
    }
}

void LinkedList::show_linked_list(struct Listnode *head){
    printf("{");
    while(head!=NULL){
        printf("%d ",head->data);
        head = head->next;
    }
    printf("}\n");
}
