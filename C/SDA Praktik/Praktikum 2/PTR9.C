#include <stdio.h>

int main(){
    int var_x = 273;
    int *ptr1;

    int **ptr2;

    ptr1 = &var_x;
    ptr2 = &ptr1;

    printf("Nilai var_x = %d\n", *ptr1);
    printf("Nilai var_x = %d\n", **ptr2);

    return 0;
}