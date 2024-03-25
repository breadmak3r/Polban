#include "head.h"
#include <stdio.h>

// Fungsi main
int main() {
    struct DoubleLinkedList* list = createDoubleLinkedList();

    insertAtBeginning(list, 10);
    insertAtEnd(list, 20);
    insertAtMiddle(list, 7, 2);
    insertAtBeginning(list, 5);
    insertAtEnd(list, 30);
    insertAtMiddle(list, 900, 4);

    printf("Linked List setelah penambahan:\n");
    displayDoubleLinkedList(list);

    deleteFirstNode(list);
    deleteLastNode(list);
    deleteAtMiddle(list, 4);

    printf("\nLinked List setelah penghapusan:\n");
    displayDoubleLinkedList(list);

    deleteDoubleLinkedList(list);

    return 0;
}
