// Nama File	: FunctionPangkat.c
// Author		: Alnez Rainansantana
// Date			: 9 November 2023

#include <stdio.h>

int perpangkatan;

int pangkat (int ab, int ba);


int pangkat (int a, int b)
{
	int hasilperpangkatan;
	
	hasilperpangkatan = a*b;
	perpangkatan = perpangkatan + 1;
	return hasilperpangkatan;
}	

int main()
{
	int result;
	int bil1, bil2, bil3;
	
	printf("bil1 = ");
	scanf("%d", &bil1);
	printf("\nbil2 = ");
	scanf("%d", &bil2);
	printf("\nbil3 = ");
	scanf("%d", &bil3);
	
	perpangkatan = 10;
	printf("\nOperasi 1 - perpangkatan = %d\n", perpangkatan);
	result = pangkat(bil1, bil2);
	printf("Hasil perpangkatan adalah %d\n", result);
	
	return 0;
}
