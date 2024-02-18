// Author	: Alnez R.
// Date		: 9 November 2023

#include <stdio.h>

long penambah;

long jumlah (int ab, int ba);


long jumlah (int a, int b)
{
	long hasilpenjumlahan;
	
	hasilpenjumlahan= a + b;
	penambah = penambah + 1;
	return hasilpenjumlahan;
}

int main()
{
	long result;
	int bil1, bil2, bil3;
	
	bil1 = 10;
	bil2 = 12;
	bil3 = 25;
	
	penambah = 10;
	printf("Operasi 1 - penambah = %d\n", penambah);
	result = jumlah(bil1, bil2);
	printf("Hasil penjumlahan adalah %d\n", result);
	
	return 0;
	
}
