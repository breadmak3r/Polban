// File Manipulation

#include <stdio.h>

int main() {
	
	printf("FILE MANIPULATION");
    // FILE Pointer
    FILE *fptr;

    // Fungsi-fungsi untuk Membuka File
    fptr = fopen("namafile.txt", "r"); // Membuka file untuk membaca (read)

    // Fungsi-fungsi untuk Membaca dan Menulis File
    char c = fgetc(fptr);
    char buffer[100];
    fgets(buffer, sizeof(buffer), fptr);
    fputc('A', fptr);
    fputs("Hello, World!", fptr);

    // Fungsi-fungsi untuk Memindahkan Kursor File
    fseek(fptr, 0, SEEK_SET); // Memindahkan kursor ke awal file
    rewind(fptr);

    // Fungsi-fungsi untuk Membaca dan Menulis Data Binari
    fread(buffer, sizeof(char), 100, fptr);
    fwrite(buffer, sizeof(char), 100, fptr);

    // Fungsi-fungsi untuk Memeriksa Akhir File
    if (feof(fptr)) {
        // Akhir file telah dicapai
    }

    // Fungsi-fungsi untuk Menangani Kesalahan
    if (ferror(fptr)) {
        // Terjadi kesalahan
    }

    perror("Error");

    // Fungsi-fungsi untuk Menghapus File
    remove("namafile.txt");

    // Menutup file
    fclose(fptr);

    return 0;
}
