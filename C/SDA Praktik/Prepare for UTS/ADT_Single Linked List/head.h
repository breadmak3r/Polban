#ifndef HEAD_H
#define HEAD_H

// Struktur Node untuk Linked List Single Linked
struct Node {
    int data;
    struct Node* next; // pointer ke node selanjutnya
};

// ADT untuk Linked List Single Linked
struct SingleLinkedList {
    struct Node* head; // pointer ke node pertama
};

// Prototipe fungsi-fungsi untuk operasi linked list single linked
struct SingleLinkedList* createSingleLinkedList();
void insertAtBeginning(struct SingleLinkedList* list, int data);
void insertAtEnd(struct SingleLinkedList* list, int data);
void displaySingleLinkedList(struct SingleLinkedList* list);
void deleteFirstNode(struct SingleLinkedList* list);
void deleteLastNode(struct SingleLinkedList* list);
void deleteSingleLinkedList(struct SingleLinkedList* list);
void insertAtMiddle(struct SingleLinkedList* list, int data, int position);
void deleteAtMiddle(struct SingleLinkedList* list, int position);

#endif
