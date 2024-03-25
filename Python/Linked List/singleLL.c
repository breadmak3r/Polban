#include <stdio.h>
#include <stdlib.h>

// Define Node structure
typedef struct Node {
    char value;
    struct Node *next;
} Node;

// Define Linked List structure
typedef struct LinkedList {
    Node *head;
} LinkedList;

// Initialize Linked List
void initializeLinkedList(LinkedList *ll) {
    ll->head = NULL;
}

// Add node to the front of the Linked List
void addToFront(LinkedList *ll, char value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;

    if (ll->head == NULL) {
        ll->head = newNode;
    } else {
        newNode->next = ll->head;
        ll->head = newNode;
    }
}

// Add node to the end of the Linked List
void addToEnd(LinkedList *ll, char value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;

    if (ll->head == NULL) {
        ll->head = newNode;
    } else {
        Node *curr = ll->head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

// Delete the first node of the Linked List
void deleteFront(LinkedList *ll) {
    if (ll->head != NULL) {
        Node *temp = ll->head;
        ll->head = ll->head->next;
        free(temp);
    }
}

// Delete the last node of the Linked List
void deleteEnd(LinkedList *ll) {
    if (ll->head != NULL) {
        if (ll->head->next == NULL) {
            free(ll->head);
            ll->head = NULL;
            return;
        }
        Node *curr = ll->head;
        while (curr->next->next != NULL) {
            curr = curr->next;
        }
        free(curr->next);
        curr->next = NULL;
    }
}

// Display the Linked List
void display(LinkedList *ll) {
    Node *curr = ll->head;
    while (curr != NULL) {
        printf("%c\n", curr->value);
        curr = curr->next;
    }
}

int main() {
    LinkedList myLL;
    initializeLinkedList(&myLL);
    
    addToEnd(&myLL, 'A');
    addToEnd(&myLL, 'B');
    addToEnd(&myLL, 'C');
    addToFront(&myLL, 'c');
    addToFront(&myLL, 'b');
    addToFront(&myLL, 'a');
    deleteFront(&myLL);
    deleteEnd(&myLL);
    display(&myLL);

    return 0;
}

