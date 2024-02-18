#include <stdio.h>

int main() {
    // Membuka file untuk ditulis
    FILE *file = fopen("example.txt", "w");

    // Memeriksa apakah file berhasil dibuka
    if (file == NULL) {
        printf("Gagal membuka file untuk ditulis.\n");
        return 1; // Keluar program dengan kode kesalahan
    }

    // Menulis teks ke dalam file
    fprintf(file, "Halo, ini adalah contoh teks yang ditulis ke file.");

    // Menutup file
    fclose(file);

    // Membuka file untuk dibaca
    file = fopen("example.txt", "r");

    // Memeriksa apakah file berhasil dibuka
    if (file == NULL) {
        printf("Gagal membuka file untuk dibaca.\n");
        return 1; // Keluar program dengan kode kesalahan
    }

    // Membaca teks dari file dan mencetaknya
    char buffer[100]; // Buffer untuk menyimpan teks
    fscanf(file, "%[^\n]", buffer);
    printf("Isi file: %s\n", buffer);

    // Menutup file setelah selesai membaca
    fclose(file);

    return 0; // Program berakhir tanpa kesalahan
}

