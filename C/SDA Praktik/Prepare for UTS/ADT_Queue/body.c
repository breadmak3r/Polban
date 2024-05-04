#include "head.h"
#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk membuat Queue kosong
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

// Fungsi untuk menambahkan elemen ke Queue
void enqueue(struct Queue* queue, int data) {
    struct QueueNode* newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    newNode->data = data;
    newNode->next = NULL;
    if (isQueueEmpty(queue)) {
        queue->front = queue->rear = newNode;
        return;
    }
    queue->rear->next = newNode;
    queue->rear = newNode;
}

// Fungsi untuk menghapus dan mengembalikan elemen depan dari Queue
int dequeue(struct Queue* queue) {
    if (isQueueEmpty(queue)) {
        printf("Error: Queue kosong.\n");
        return -1;
    }
    struct QueueNode* temp = queue->front;
    int data = temp->data;
    queue->front = temp->next;
    free(temp);
    return data;
}

// Fungsi untuk melihat elemen depan dari Queue tanpa menghapusnya
int front(struct Queue* queue) {
    if (isQueueEmpty(queue)) {
        printf("Error: Queue kosong.\n");
        return -1;
    }
    return queue->front->data;
}

// Fungsi untuk melihat elemen belakang dari Queue tanpa menghapusnya
int rear(struct Queue* queue) {
    if (isQueueEmpty(queue)) {
        printf("Error: Queue kosong.\n");
        return -1;
    }
    return queue->rear->data;
}

// Fungsi untuk memeriksa apakah Queue kosong atau tidak
int isQueueEmpty(struct Queue* queue) {
    return (queue->front == NULL);
}
