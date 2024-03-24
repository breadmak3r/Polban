#include <stdio.h>

int main(){
    int x, y;   // Deklarasi variabel x dan y bertipe integer
    int *px;    // Deklarasi pointer px yang merujuk ke integer

    x = 87;     // Inisialisasi nilai 87 ke variabel x
    px = &x;    // Insert alamat variabel x ke pointer px
    y = *px;    // Insert nilai yang ditunjuk oleh pointer px ke variabel y

    printf("Alamat x = %p\n", &x);  // Menampilkan alamat x
    printf("Isi px = %d\n", x);     // Menampilkan isi px
    printf("Nilai yang ditunjuk oleh px = %d\n", *px);  // Menampilkan nilai yang ditunjuk px
    printf("Nilai y = %d\n", y);    // Menampilkan nilai y
    printf("Alamat y = %p\n", &y);  // Menampilkan alamat y

    return 0;
}