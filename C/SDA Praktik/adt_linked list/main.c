#include <stdio.h>
#include <string.h>
#include "linkedlist.c"
#include "header.h"

int main() {
    Node* head = NULL;
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    // Mengisi linked list dengan karakter dari kata yang dimasukkan
    int i;
    for (i = 0; i < strlen(word); i++) {
        insertAtBeginning(&head, word[i]);
    }

    // Memeriksa apakah kata adalah palindrom
    if (isPalindrome(head)) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }

    // Menghapus linked list
    insertAtBeginning(13,4);
    deleteList(&head);

    return 0;
}

