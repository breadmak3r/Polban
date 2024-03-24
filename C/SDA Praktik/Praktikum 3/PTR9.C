#include <stdio.h>

int main(){
    // Deklarasi variabel var_x dengan nilai 273 dan pointer ptr1 yang menunjuk ke variabel var_x
    int var_x = 273;
    int *ptr1;

    // Deklarasi pointer ptr2 yang menunjuk ke pointer ptr1
    int **ptr2;

    // Menetapkan alamat variabel var_x ke pointer ptr1 dan alamat pointer ptr1 ke pointer ptr2
    ptr1 = &var_x;
    ptr2 = &ptr1;

    // Mencetak nilai variabel var_x menggunakan pointer ptr1 dan ptr2
    printf("Nilai var_x = %d\n", *ptr1);
    printf("Nilai var_x = %d\n", **ptr2);

    // Mengembalikan nilai 0 untuk menunjukkan bahwa program berakhir dengan sukses
    return 0;
}
