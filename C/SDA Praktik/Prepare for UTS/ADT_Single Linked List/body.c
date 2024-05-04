#include "head.h"
#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk membuat linked list single linked kosong
struct SingleLinkedList* createSingleLinkedList() {
    struct SingleLinkedList* list = (struct SingleLinkedList*)malloc(sizeof(struct SingleLinkedList));
    list->head = NULL;
    return list;
}

// Fungsi untuk menambahkan node di awal linked list
void insertAtBeginning(struct SingleLinkedList* list, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = list->head;
    list->head = newNode;
}

// Fungsi untuk menambahkan node di tengah linked list
void insertAtMiddle(struct SingleLinkedList* list, int data, int position) {
    if (list == NULL) {
        printf("Error: Linked list belum dibuat.\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position < 1) {
        printf("Error: Posisi harus lebih dari atau sama dengan 1.\n");
        return;
    }

    if (position == 1 || list->head == NULL) {
        insertAtBeginning(list, data);
        return;
    }

    struct Node* current = list->head;
    int count = 1;
    while (count < position - 1 && current != NULL) {
        current = current->next;
        count++;
    }

    if (current == NULL) {
        printf("Error: Posisi melebihi panjang linked list.\n");
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

// Fungsi untuk menambahkan node di akhir linked list
void insertAtEnd(struct SingleLinkedList* list, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (list->head == NULL) {
        list->head = newNode;
        return;
    }

    struct Node* last = list->head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

// Fungsi untuk menampilkan isi linked list
void displaySingleLinkedList(struct SingleLinkedList* list) {
    struct Node* current = list->head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Fungsi untuk menghapus node pertama dari linked list
void deleteFirstNode(struct SingleLinkedList* list) {
    if (list->head == NULL)
        return;

    struct Node* temp = list->head;
    list->head = list->head->next;
    free(temp);
}

// Fungsi untuk menghapus node di tengah linked list
void deleteAtMiddle(struct SingleLinkedList* list, int position) {
    if (list == NULL || list->head == NULL) {
        printf("Error: Linked list kosong atau belum dibuat.\n");
        return;
    }

    if (position < 1) {
        printf("Error: Posisi harus lebih dari atau sama dengan 1.\n");
        return;
    }

    if (position == 1) {
        deleteFirstNode(list);
        return;
    }

    struct Node* current = list->head;
    int count = 1;
    while (count < position - 1 && current != NULL) {
        current = current->next;
        count++;
    }

    if (current == NULL || current->next == NULL) {
        printf("Error: Posisi melebihi panjang linked list.\n");
        return;
    }

    struct Node* temp = current->next;
    current->next = current->next->next;
    free(temp);
}

// Fungsi untuk menghapus node terakhir dari linked list
void deleteLastNode(struct SingleLinkedList* list) {
    if (list->head == NULL)
        return;

    if (list->head->next == NULL) {
        free(list->head);
        list->head = NULL;
        return;
    }

    struct Node* second_last = list->head;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }
    free(second_last->next);
    second_last->next = NULL;
}

// Fungsi untuk menghapus linked list dan membebaskan memori
void deleteSingleLinkedList(struct SingleLinkedList* list) {
    struct Node* current = list->head;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    free(list);
}


