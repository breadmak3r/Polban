#include <stdio.h>
#include <string.h>

// Mendefinisikan konstanta PANJANG dengan nilai 20
#define PANJANG 20

// Mendefinisikan macro cetak yang akan digunakan sebagai pengganti fungsi printf
#define cetak printf

int main(){
    // Deklarasi array karakter nama1, nama2, dan namaX dengan ukuran PANJANG
    char nama1[PANJANG] = "DEWI SARTIKA";
    char nama2[PANJANG] = "SULTAN HASANUDDIN";
    char namaX[PANJANG];

    // Mencetak string "Nama semula:"
    puts("Nama semula: ");
    
    // Mencetak nilai dari nama1 dan nama2 menggunakan fungsi printf
    printf("Nama 1 --> %s\n", nama1);
    printf("Nama 2 --> %s\n", nama2);

    // Menyalin nilai dari nama1 ke namaX, dari nama2 ke nama1, dan dari namaX ke nama2
    strcpy(namaX, nama1);
    strcpy(nama1, nama2);
    strcpy(nama2, namaX);

    // Mencetak string "Nama sekarang:"
    puts("Nama sekarang: ");
    
    // Mencetak nilai dari nama1 dan nama2 menggunakan macro cetak (yang merupakan pengganti printf)
    cetak("Nama 1 --> %s\n", nama1);
    cetak("Nama 2 --> %s\n", nama2);

    // Mengembalikan nilai 0 untuk menunjukkan bahwa program berakhir dengan sukses
    return 0;
}
