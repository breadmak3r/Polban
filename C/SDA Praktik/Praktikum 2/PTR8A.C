#include <stdio.h>
#include <string.h>
#define PANJANG 20
#define cetak printf

int main(){
    char nama1[PANJANG] = "DEWI SARTIKA";
    char nama2[PANJANG] = "SULTAN HASANUDDIN";
    char namaX[PANJANG];

    puts("Nama semula: ");
    printf("Nama 1 --> %s\n", nama1);
    printf("Nama 2 --> %s\n", nama2);

    strcpy(namaX, nama1);
    strcpy(nama1, nama2);
    strcpy(nama2, namaX);

    puts("Nama sekarang: ");
    cetak("Nama 1 --> %s\n", nama1);
    cetak("Nama 2 --> %s\n", nama2);

    return 0;
}