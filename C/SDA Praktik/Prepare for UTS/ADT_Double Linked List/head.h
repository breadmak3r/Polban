#ifndef HEAD_H
#define HEAD_H

// Struktur Node untuk Linked List Double Linked
struct Node {
    int data;
    struct Node* prev; // pointer ke node sebelumnya
    struct Node* next; // pointer ke node selanjutnya
};

// ADT untuk Linked List Double Linked
struct DoubleLinkedList {
    struct Node* head; // pointer ke node pertama
    struct Node* tail; // pointer ke node terakhir
};

// Prototipe fungsi-fungsi untuk operasi linked list double linked
struct DoubleLinkedList* createDoubleLinkedList();
void insertAtBeginning(struct DoubleLinkedList* list, int data);
void insertAtMiddle(struct DoubleLinkedList* list, int data, int position);
void insertAtEnd(struct DoubleLinkedList* list, int data);
void displayDoubleLinkedList(struct DoubleLinkedList* list);
void deleteFirstNode(struct DoubleLinkedList* list);
void deleteAtMiddle(struct DoubleLinkedList* list, int position);
void deleteLastNode(struct DoubleLinkedList* list);
void deleteDoubleLinkedList(struct DoubleLinkedList* list);

#endif
