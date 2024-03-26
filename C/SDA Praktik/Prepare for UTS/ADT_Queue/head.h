#ifndef HEAD_QUEUE_H
#define HEAD_QUEUE_H

// Struktur Node untuk Queue
struct QueueNode {
    int data;
    struct QueueNode* next;
};

// ADT untuk Queue
struct Queue {
    struct QueueNode *front, *rear;
};

// Prototipe fungsi-fungsi untuk operasi Queue
struct Queue* createQueue();
void enqueue(struct Queue* queue, int data);
int dequeue(struct Queue* queue);
int front(struct Queue* queue);
int rear(struct Queue* queue);
int isQueueEmpty(struct Queue* queue);

#endif
