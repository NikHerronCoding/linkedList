#include <stdio.h>

#include "linkedList.h"


int main() {

    linkedList_t* newList = CreateLinkedList();
    linkedList_t* newList2 = CreateLinkedList();

    for (int i = 0; i < 100; i += 2) {
        AppendToLinkedList(newList, i);
        
    }

    PrintLinkedList(newList);
    PrintLinkedList(newList2);

    FreeLinkedList(newList);
    FreeLinkedList(newList2);
    return 0;
}