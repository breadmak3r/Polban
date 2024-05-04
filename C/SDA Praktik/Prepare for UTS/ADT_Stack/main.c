#include "head.h"
#include <stdio.h>

int main() {
    struct Stack* stack = createStack();

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("Elemen teratas: %d\n", peek(stack));

    printf("Elemen terhapus: %d\n", pop(stack));
    printf("Elemen terhapus: %d\n", pop(stack));

    push(stack, 40);

    printf("Elemen teratas setelah push: %d\n", peek(stack));

    return 0;
}
