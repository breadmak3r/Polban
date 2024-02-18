#include <stdio.h>
#include "MahasiswaADT.h"

void displayDataMhs(Mahasiswa mhs){
	printf("Data Mahasiswa:\n");
    printf("Nama: %s\n", mhs.nama);
    printf("Nim: %s\n", mhs.nim);
    printf("ETS: %.2f\n", mhs.ets);
    printf("EAS: %.2f\n", mhs.eas);
    printf("Kuis: %.2f\n", mhs.kuis);
    printf("Total: %.2f\n", mhs.total);
    printf("Predikat: %s\n", mhs.predikat);
}

float get_total(Mahasiswa mhs){
	float nilaiETS, nilaiEAS, nilaiKUIS, total;
	nilaiETS = mhs.ets * bobotETS;
	nilaiEAS = mhs.eas * bobotEAS;
	nilaiKUIS= mhs.kuis* bobotKUIS;
	total = nilaiETS + nilaiEAS + nilaiKUIS;
	
	return total;
}

const char *get_predicate(Mahasiswa mhs){
	const char *predikat;
	if (mhs.total >= 80 && mhs.total <= 100){
		predikat = "A";
	}else if (mhs.total >= 75 && mhs.total <= 79.9){
		predikat = "AB";
	}else if (mhs.total >= 70 && mhs.total <= 74.9){
		predikat = "B";
	}else if (mhs.total >= 65 && mhs.total <= 69.9){
		predikat = "BC";
	}else if (mhs.total >= 60 && mhs.total <= 64.9){
		predikat = "C";
	}else if (mhs.total >= 55 && mhs.total <= 59.9){
		predikat = "CD";
	}else if (mhs.total >= 40 && mhs.total <= 54.9){
		predikat = "D";
	}else if (mhs.total < 40){
		predikat = "E";
	}
	return predikat;
}
