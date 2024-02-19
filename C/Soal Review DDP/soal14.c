#include<stdio.h> // Menggunakan header file stdio.h untuk fungsi-fungsi input-output standar

int main(){
    FILE *fs, *ft, *fp; // Mendeklarasikan tiga pointer ke FILE untuk menunjuk ke file yang akan dibuka

    fp = fopen("A.C", "r"); // Membuka file "A.C" dalam mode baca ("r") dan menugaskan pointer ke FILE fp
    fs = fopen("B.C", "r"); // Membuka file "B.C" dalam mode baca ("r") dan menugaskan pointer ke FILE fs
    ft = fopen("C.C", "r"); // Membuka file "C.C" dalam mode baca ("r") dan menugaskan pointer ke FILE ft

    // Menutup tiga file yang telah dibuka yang akan berujung error
    fclose(fp, fs, ft);

    return 0;
}
