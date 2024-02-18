// Nama File	: Cari-Huruf_Alnez-Rainansantana_231524001.c
// Deskripsi	: membuat final state dari array subs menjadi |O|R|M|A|. Soal 1 Quiz from ETS.
// Dibuat oleh	: Alnez Rainansantana / 231524001
// Tanggal		: 26 Oktober 2023

#include <stdio.h>

int main()
{
	// Kamus Data
	int idxAwal, idxAkhir, length, i;
	char kata[12];
	char subs[12];
	
	// Array kata
	kata[0] = 'I';
	kata[1] = 'N';
	kata[2] = 'F';
	kata[3] = 'O';
	kata[4] = 'R';
	kata[5] = 'M';
	kata[6] = 'A';
	kata[7] = 'T';
	kata[8] = 'I';
	kata[9] = 'K';
	kata[10] = 'A';
	kata[11] = '\0';
	
	// Algoritma
	printf("idxAwal = ");
	scanf("%d", &idxAwal);
	
	printf("idxAkhir = ");
	scanf("%d", &idxAkhir);
	
	if(idxAwal > 0 && idxAwal <11 && idxAkhir > 0 && idxAkhir < 11) {
		if (idxAkhir > idxAwal){
			length = idxAkhir - idxAwal;
			i = 0;
			do{
				subs[i] = kata[idxAwal + i - 1];
				i = i + 1;
			} while (i < 12);
			subs[length+1] = '\0';
		}
	}
	printf("Array kata : %s\n", kata);
	printf("Array subs : %s", subs);
	
	return 0;
}
