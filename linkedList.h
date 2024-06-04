#ifndef LINKED_LIST_H

#define LINKED_LIST_H

/*Single node in chain*/

typedef struct node {
    int data;
    struct node* next;
}node_t;

/*Linked list data structure, which always hold the first node in the chain*/
typedef struct linkedList {
    node_t* head;
}linkedList_t;

//malloc a new linked list and return a pointer to that linked list
linkedList_t* CreateLinkedList();

//malloc a new linked list and return a pointer to that linked list with five items in the list
linkedList_t* CreateLinkedListOfFive();


//function to print a linked list
void PrintLinkedList(linkedList_t* list);

//function to remove a linked list from memory, walk through linked list and delete all nodes
void FreeLinkedList(linkedList_t* list);

//adding new node to end of list
void AppendToLinkedList(linkedList_t* list, int data);

#endif