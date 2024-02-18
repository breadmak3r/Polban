#include <stdio.h>
#include <stdlib.h>

int main() {
    // Pengalokasian variabel dinamis menggunakan fungsi malloc()
    int *dinamis_var = (int *)malloc(sizeof(int)); // Variabel dinamis dialokasikan secara dinamis pada saat runtime

    if (dinamis_var == NULL) {
        printf("Gagal mengalokasikan memori!");
        return 1; // Keluar dari program dengan kode kesalahan
    }
    
    *dinamis_var = 20; // Menyimpan nilai 20 ke dalam variabel dinamis
    
    printf("Nilai variabel dinamis: %d\n", *dinamis_var);
    
    // Jangan lupa untuk membebaskan memori setelah selesai digunakan
    free(dinamis_var);
    
    return 0;
}

