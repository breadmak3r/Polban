#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

// Fungsi untuk membuat simpul baru
Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Fungsi untuk menambahkan simpul di awal linked list
void insertAtBeginning(Node** headRef, char data) {
    Node* newNode = createNode(data);
    newNode->next = *headRef;
    *headRef = newNode;
}

// Fungsi untuk memeriksa apakah linked list adalah palindrom
int isPalindrome(Node* head) {
    Node* slow = head;
    Node* fast = head;
    Node* prev_slow = NULL;
    Node* mid = NULL;
    int isPalindrome = 1;

    // Temukan titik tengah dan prev_slow
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        prev_slow = slow;
        slow = slow->next;
    }

    // Jika jumlah node ganjil, maju ke simpul berikutnya
    if (fast != NULL) {
        mid = slow;
        slow = slow->next;
    }

    // Putar setengah kedua linked list
    Node* secondHalf = slow;
    prev_slow->next = NULL;
    Node* prev = NULL;
    Node* current = secondHalf;
    Node* nextNode = NULL;
    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    // Bandingkan dua setengah linked list
    Node* firstHalf = head;
    Node* secondHalfReversed = prev;
    while (firstHalf != NULL && secondHalfReversed != NULL) {
        if (firstHalf->data != secondHalfReversed->data) {
            isPalindrome = 0;
            break;
        }
        firstHalf = firstHalf->next;
        secondHalfReversed = secondHalfReversed->next;
    }

    // Kembalikan linked list ke kondisi semula
    prev = NULL;
    current = secondHalf;
    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    prev_slow->next = mid;
    if (mid != NULL) {
        mid->next = prev;
    } else {
        prev_slow->next = prev;
    }

    return isPalindrome;
}

// Fungsi untuk menghapus linked list
void deleteList(Node** headRef) {
    Node* current = *headRef;
    Node* nextNode = NULL;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    *headRef = NULL;
}

