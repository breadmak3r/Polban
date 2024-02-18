// Nama File	: ProcedureKali.c
// Deskripsi	: Modular untuk melakukan proses perkalian dua buah bilangan bulat dengan proses penjumlahan.
// Dibuat oleh	: Alnez Rainansantana | 231524001
// Tanggal		: 2 November 2023


#include <stdio.h>

void kali (int b, int p, int *h)
{
	// Kamus Data
	int n, bp;
	
	// Algoritma
	bp = p;
	if (b == 0 || p == 0) {
		*h = 0;					// Operasi-1
	} else {
			if (bp < 0){		// Kondisi-1
				bp = -bp;		// Operasi-2
			}
			n = 1;
			 while (n <= bp){	// Kondisi-2
				*h = *h + b; 	// Operasi-3
				printf("%d ",*h);
				n++;
			}
		}
	if (p < 0) {
		*h = -*h;				// Ekspresi-1
	}
}
int main ()
{
	int b, p, h, n, bp;
	h = 0;
	printf("b = ");
	scanf("%d", &b);
	printf("\np = ");
	scanf("%d", &p);
	kali (b, p, &h);
	printf("\n\nHasil = %d", h);
}
