#include<stdio.h> // Menggunakan header file stdio.h untuk fungsi-fungsi input-output standar
#include<stdlib.h> // Menggunakan header file stdlib.h untuk fungsi-fungsi umum

int main(){
    unsigned char; // Mendeklarasikan tipe data unsigned char tanpa nama variabel (tidak valid)
    FILE *fp; // Mendeklarasikan pointer ke FILE untuk menunjuk ke file yang akan dibuka

    fp = fopen("trial", "r"); // Membuka file "trial" dalam mode baca ("r") dan menugaskan pointer ke FILE fp
    if(!fp){ // Memeriksa apakah fp adalah NULL dan menandakan bahwa pembukaan file gagal
        printf("Unable to open file"); // Menampilkan pesan kesalahan jika pembukaan file gagal
        exit(1); // Keluar dari program dengan kode kesalahan 1
    }
    fclose(fp); // Menutup file yang telah dibuka
    return 0;
}
