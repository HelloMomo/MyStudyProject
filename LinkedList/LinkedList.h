#ifndef ALGORITHM_LINKEDLIST_H
#define ALGORITHM_LINKEDLIST_H

struct Listnode{
public:
    int data;
    struct Listnode *next;
};
class LinkedList{
public:
    void insert_in_linked_list(struct Listnode **head, int data, int position);
    void show_linked_list(struct Listnode *head);
    };

#endif //ALGORITHM_LINKEDLIST_H
