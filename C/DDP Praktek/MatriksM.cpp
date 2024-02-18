// Nama File	: MatriksM.c
// Deskripsi	: Visualisasi Matriks M. Soal 2 Quiz from ETS.
// Dibuat oleh	: Alnez Rainansantana / 231524001
// Tanggal		: 26 Oktober 2023

#include <stdio.h>

int main()
{
	// Kamus Data
	int matriks[5][5];
	int baris = 0;
	int kolom = 0;
	
	matriks[0][0] = 6;
    matriks[0][1] = 7;
    matriks[0][2] = 12;
    matriks[0][3] = 18;
    matriks[0][4] = 21;
    matriks[1][0] = 90;
    matriks[1][1] = 1;
    matriks[1][2] = 25;
    matriks[1][3] = 40;
    matriks[1][4] = 37;
    matriks[2][0] = 2;
    matriks[2][1] = 7;
    matriks[2][2] = 5;
    matriks[2][3] = 10;
    matriks[2][4] = 80;
    matriks[3][0] = 9;
    matriks[3][1] = 7;
    matriks[3][2] = 5;
    matriks[3][3] = 3;
    matriks[3][4] = 2;
    matriks[4][0] = 15;
    matriks[4][1] = 20;
    matriks[4][2] = 73;
    matriks[4][3] = 55;
    matriks[4][4] = 6;

    // Algoritma
    printf(" Matriks M : \n");
    while (baris < 5) {
        printf(" %d	", matriks[baris][kolom]);
        kolom++;
        if (kolom == 5) {
            kolom = 0;
            baris++;
            printf("\n");
        }
    }

    return 0;
}
