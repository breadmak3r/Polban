// Nama File	: FunctionKali.c
// Author		: Alnez Rainansantana
// Date			: 9 November 2023

#include <stdio.h>

int perkalian;

int kali (int ab, int ba);


int kali (int a, int b)
{
	int hasilperkalian;
	
	hasilperkalian = a*b;
	perkalian = perkalian + 1;
	return hasilperkalian;
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
	
	perkalian = 10;
	printf("\nOperasi 1 - perkalian = %d\n", perkalian);
	result = kali(bil1, bil2);
	printf("Hasil perkalian adalah %d\n", result);
	
	return 0;
}
