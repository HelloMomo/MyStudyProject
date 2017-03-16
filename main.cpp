#include <iostream>
#include "LinkedList.h"
int main(void){

struct Listnode *list = NULL;
    LinkedList linked_list;

    linked_list.insert_in_linked_list(&list,1,1);
    linked_list.insert_in_linked_list(&list,2,2);
    linked_list.insert_in_linked_list(&list,4,4);
    linked_list.insert_in_linked_list(&list,3,3);
    linked_list.show_linked_list(list);



}
