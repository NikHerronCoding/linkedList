#include<stdlib.h>
#include<stdio.h>

#include "linkedlist.h"




//malloc a new linked list and return a pointer to that linked list
linkedList_t* CreateLinkedList() {
    linkedList_t* newList = (linkedList_t *)malloc(sizeof(linkedList_t));
    newList->head = NULL;
    return newList;
}

//malloc a new linked list and return a pointer to that linked list with five items in the list
linkedList_t* CreateLinkedListOfFive(){

}


//function to print a linked list
void PrintLinkedList(linkedList_t* list){
    int i = 0;
    node_t* curNode = list->head;

    if (curNode == NULL ){
        printf("Linked List is Empty");
        return;
    } else {
        while (curNode != NULL) {
            printf("Current Value: %d\n", curNode->data);
            curNode = curNode->next;
        }
    }
    return;
}

//function to remove a linked list from memory, walk through linked list and delete all nodes
void FreeLinkedList(linkedList_t* list){
    int i = 0;

    //freeing all nodes
    node_t* curNode = list->head;
    node_t* nodeToDelete = curNode;
    while (curNode != NULL) {
        curNode = curNode->next;
        free(nodeToDelete);
        i++;
        nodeToDelete = curNode;
    }

    

    //freeing list
    free(list);

    printf("Linked List Cleared. %d nodes deleted\n", i);

}

//adding new node to end of list
void AppendToLinkedList(linkedList_t* list, int newData){

    //creation of new node to add
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->data = newData;
    newNode->next = NULL;

    //finding old node to append to
    node_t* curNode = list->head;
    //printf("list head data: %d", list->head->data);
    //if list is empty do one thing, else do other
    if (curNode != NULL) {

        while (curNode->next != NULL) {
            curNode = curNode->next;
        }   

        //adding newNode to end of list

        curNode->next = newNode;

    //empty case here
    } else {
        list->head = newNode;
    }

    return;

}






