// Nama File	: ProcedureBagi.c
// Deskripsi	: Modular untuk melakukan proses pembagian dua buah bilangan bulat dengan proses pengurangan.
// Dibuat oleh	: Alnez Rainansantana | 231524001
// Tanggal		: 2 November 2023

#include <stdio.h>

void bagi(int b, int d, int *h, int *s)
{
	// Kamus Data
	int pb, n;
	
	// Algoritma
	pb = d;
	if (b == 0 || d == 0){
		*h = 0;
		*s = 0;
	} else {
		if (pb < 0){
			pb = -pb;
		}
		if (b < 0){
			b = -b;
			n = 0;
			while (b >= pb){
				b = b - pb;
				n++;
				printf("%d", b);
			}
			*h = -n;
		}else {
			n = 0;
			while (b >= pb){
				b = b - pb;
				n++
			}
			*h = n
		} 
		}
		*s = b
	}
}

int main()
{
	int b, d, h, s;
	printf("PEMBAGIAN\n\n");
	printf("b = ");
		scanf("%d", &b);
	printf("d = ");
		scanf("%d", &d);
	bagi(b, d, &h, &s);
	printf ("\nHasil = %d", h);
	printf ("\nSisa Bagi = %d", s);
	
	return 0;
}
