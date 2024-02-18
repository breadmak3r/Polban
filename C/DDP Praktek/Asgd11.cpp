/* File			: asgd11.c							*/
/* Deskripsi	: assignment float dan print		*/
/* Dibuat oleh	: Dosen DDP / 132 231 592			*/
/* Tanggal		: 30/08/01							*/

#include <stdio.h>
#define printf __mingw_printf

int main()
{
	/* Kamus */
	float f;
	long double f11;
	
	/*Program*/
	f=20.0f;
	f11=10.0L;
	
	/* Program untuk menampilkan hasil assign ke layar */
	printf("Nilai f		= %f \n", f);
	printf("Nilai f11	= %Lf\n", f11);
	return 0;
}

// Specifiers untuk long double adalah %Lf, bukan %Ld
// Supaya outputnya sesuai, definisikan library printf ke __mingw_printf
