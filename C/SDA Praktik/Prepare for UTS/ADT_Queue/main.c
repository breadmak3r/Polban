#include "head.h"
#include <stdio.h>

int main() {
    struct Queue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    printf("Elemen depan: %d\n", front(queue));
    printf("Elemen belakang: %d\n", rear(queue));

    printf("Elemen terhapus: %d\n", dequeue(queue));
    printf("Elemen depan setelah dequeue: %d\n", front(queue));

    enqueue(queue, 40);

    printf("Elemen belakang setelah enqueue: %d\n", rear(queue));

    return 0;
}
