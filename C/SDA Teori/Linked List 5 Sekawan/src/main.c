#include <stdio.h>
#include <stdlib.h>

// Definisi struktur node
struct Node {
    int data;
    struct Node* next;
};

// Modul membuat node baru
struct Node* buatNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Modul menambahkan node di awal linked list
void insertAwal(struct Node** headRef, int data) {
    struct Node* newNode = buatNode(data);
    newNode->next = *headRef;
    *headRef = newNode;
}

// Modul menambahkan node di akhir linked list
void insertAkhir(struct Node** headRef, int data) {
    struct Node* newNode = buatNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    struct Node* lastNode = *headRef;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }
    lastNode->next = newNode;
}

// Modul menghapus node di awal linked list
void deleteAwal(struct Node** headRef) {
    if (*headRef == NULL) {
        printf("Linked list is empty!\n");
        return;
    }
    struct Node* temp = *headRef;
    *headRef = (*headRef)->next;
    free(temp);
}

// Modul menghapus node di akhir linked list
void deleteAkhir(struct Node** headRef) {
    if (*headRef == NULL) {
        printf("Linked list is empty!\n");
        return;
    }
    if ((*headRef)->next == NULL) {
        free(*headRef);
        *headRef = NULL;
        return;
    }
    struct Node* prevNode = NULL;
    struct Node* currentNode = *headRef;
    while (currentNode->next != NULL) {
        prevNode = currentNode;
        currentNode = currentNode->next;
    }
    prevNode->next = NULL;
    free(currentNode);
}

// Modul mencetak isi linked list
void printLinkedList(struct Node* head) {
    struct Node* currentNode = head;
    while (currentNode != NULL) {
        printf("%d -> ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("NULL\n");
}

// Modul menghapus seluruh isi linked list
void deleteLinkedList(struct Node** headRef) {
    struct Node* currentNode = *headRef;
    struct Node* nextNode = NULL;
    while (currentNode != NULL) {
        nextNode = currentNode->next;
        free(currentNode);
        currentNode = nextNode;
    }
    *headRef = NULL;
}

int main() {
    struct Node* head = NULL;

    insertAwal(&head, 10);
    insertAkhir(&head, 20);
    insertAkhir(&head, 30);
    insertAwal(&head, 5);
    deleteAwal(&head);
    deleteAkhir(&head);
    printLinkedList(head);
    deleteLinkedList(&head);

    return 0;
}
