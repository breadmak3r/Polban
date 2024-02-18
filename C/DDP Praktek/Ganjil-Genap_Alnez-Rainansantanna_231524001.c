// Nama File	: Ganjil-Genap_Alnez-Rainansantanna_231524001.c
// Deskripsi	: Menentukan ganjil dan genap dari Matriks M.
// Dibuat Oleh	: Alnez Rainansantana / 231524001
// Tanggal		: 26 Oktober 2023

#include <stdio.h>

int main()
{
	// Kamus Data
	int i, j, n, genap, ganjil, g, h;
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
    printf("Matriks M : \n");
    while (baris < 5) {
        printf("%d	", matriks[baris][kolom]);
        kolom++;
        if (kolom == 5) {
            kolom = 0;
            baris++;
            printf("\n");
        }
    }
    
    printf("\n");
    i = 0;
    n = 5;
	genap = 0;
	ganjil = 0;
	
	while (i<n){
		j = 0;
		while (j<n){
			if (matriks[i][j] % 2 == 0) {
				genap++;
			}else{
				ganjil++;
			}
			j++;
		}
		i++;
	}
	printf("Genap  : %d \n\n", genap);
	printf("Ganjil : %d \n\n", ganjil);
    
	return 0;
}
