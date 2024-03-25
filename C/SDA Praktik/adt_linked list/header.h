#ifndef HEADER_H
#define HEADER_H

// Struktur simpul linked list
typedef struct Node {
    char data;
    struct Node* next;
} Node;

// Fungsi untuk membuat simpul baru
Node* createNode(char data);

// Fungsi untuk menambahkan simpul di awal linked list
void insertAtBeginning(Node** headRef, char data);

// Fungsi untuk memeriksa apakah linked list adalah palindrom
int isPalindrome(Node* head);

// Fungsi untuk menghapus linked list
void deleteList(Node** headRef);

#endif

