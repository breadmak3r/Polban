#include<stdio.h> // Menggunakan header file stdio.h untuk fungsi-fungsi input-output standar

int main(){
    FILE *fp; // Mendeklarasikan pointer ke FILE untuk menunjuk ke file yang akan dibuka

    fp = fopen("trial", "r"); // Membuka file bernama "trial" dalam mode baca ("r") dan menugaskan pointer ke FILE fp

    return 0;
}
