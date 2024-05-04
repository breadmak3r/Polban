#include "head.h"
#include <stdio.h>

// Fungsi main
int main() {
    struct SingleLinkedList* list = createSingleLinkedList();

    insertAtBeginning(list, 10);
    insertAtMiddle(list, 250, 2);
    insertAtEnd(list, 20);
    insertAtBeginning(list, 5);
    insertAtEnd(list, 30);
    insertAtMiddle(list, 45, 4);

    printf("Linked List setelah penambahan:\n");
    displaySingleLinkedList(list);

    deleteFirstNode(list);
    deleteAtMiddle(list, 3);
    deleteLastNode(list);

    printf("\nLinked List setelah penghapusan:\n");
    displaySingleLinkedList(list);

    deleteSingleLinkedList(list);

    return 0;
}
