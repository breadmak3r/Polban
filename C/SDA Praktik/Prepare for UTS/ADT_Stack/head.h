#ifndef HEAD_STACK_H
#define HEAD_STACK_H

// Struktur Node untuk Stack
struct StackNode {
    int data;
    struct StackNode* next;
};

// ADT untuk Stack
struct Stack {
    struct StackNode* top;
};

// Prototipe fungsi-fungsi untuk operasi Stack
struct Stack* createStack();
void push(struct Stack* stack, int data);
int pop(struct Stack* stack);
int peek(struct Stack* stack);
int isEmpty(struct Stack* stack);

#endif
