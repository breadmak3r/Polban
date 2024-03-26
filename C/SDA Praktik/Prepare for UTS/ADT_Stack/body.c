#include "head.h"
#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk membuat Stack kosong
struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

// Fungsi untuk menambahkan elemen ke Stack
void push(struct Stack* stack, int data) {
    struct StackNode* newNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

// Fungsi untuk menghapus dan mengembalikan elemen teratas dari Stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack kosong.\n");
        return -1;
    }
    struct StackNode* temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    free(temp);
    return data;
}

// Fungsi untuk melihat elemen teratas dari Stack tanpa menghapusnya
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack kosong.\n");
        return -1;
    }
    return stack->top->data;
}

// Fungsi untuk memeriksa apakah Stack kosong atau tidak
int isEmpty(struct Stack* stack) {
    return (stack->top == NULL);
}
