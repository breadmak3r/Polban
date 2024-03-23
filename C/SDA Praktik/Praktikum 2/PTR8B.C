#include <stdio.h>

int main(){
    // Deklarasi pointer karakter nama1 dan nama2, serta pointer karakter tanpa inisialisasi namaX
    char *nama1 = "DEWI SARTIKA";
    char *nama2 = "SULTAN HASANUDDIN";
    char *namaX;

    // Mencetak string "Nama semula:"
    puts("Nama semula: ");
    
    // Mencetak nilai dari nama1 dan nama2 menggunakan fungsi printf
    printf("Nama 1 --> %s\n", nama1);
    printf("Nama 2 --> %s\n", nama2);

    // Mengalokasikan pointer namaX untuk menunjuk ke nama1, dan menukarkan pointer nama1 dan nama2
    namaX = nama1;
    nama1 = nama2;
    nama2 = namaX;

    // Mencetak string "Nama sekarang:"
    puts("Nama sekarang: ");
    
    // Mencetak nilai dari nama1 dan nama2 menggunakan fungsi printf setelah pertukaran
    printf("Nama 1 --> %s \n", nama1);
    printf("Nama 2 --> %s\n", nama2);

    // Mengembalikan nilai 0 untuk menunjukkan bahwa program berakhir dengan sukses
    return 0;
}
