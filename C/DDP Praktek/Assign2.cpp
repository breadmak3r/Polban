/* File			: assign2.c																	*/
/* Deskripsi	: Berisi contoh sederhana- variabel bil bulat short int, int, long int 		*/
/* Dibuat oleh	: Dosen DDP / 132 231 592													*/
/* Tanggal		: 30/08/01																	*/

#include <stdio.h>

int main()
{
	// Kamus
	short ks=1;
	int ki=1;
	long k1= 10000;
	char c=65	;			// Inisialisasi karakter dengan integer
	char cl= 'Z';			// insialisasi karakter dengan karakter
	float x=1.55;

	//Program
	// Penulisan karakter sebagai karakter
	printf("Karakter= %c \n", c);
	printf("Karakter= %c \n", cl);

	// Penulisan karakter sebagai integer
	printf("Karakter= %d \n", c);
	printf("Karakter= %d \n", cl);
	
	printf("Bilangan integer(short)	= %d \n", ks);
	printf("\t\t(int)	= %d \n", ki);
	printf("\t\t(long)	= %ld \n", k1);
	printf("Bilangan real = %8.3f \n", x);
	
	return 0;
}

