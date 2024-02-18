/*
  Program : Menghitung nilai akhir matakuliah DDP dan predikatnya
  Author : 231524001 | Alnez Rainansantana
  Tanggal : 16 November 2023
  I.S. : Belum diketahui nilai akhir dan predikat
  F.S. : menghitung nilai total akhir mata kuliah DDP dari komponen penilaian (ets, eas dan quiz).
         Setiap komponen penilaian memiliki bobot:
         - bobot ets : 35%
         - bobot eas : 40%
         - bobot quiz : 25%
         Nilai total akhir adalah jumlah bobot dikali tiap komponen nilai
         Nilai total akhir akan dikonversikan kedalam sebuah huruf mutu atau disebut predikat.
         Aturan konversi nilai ke predikat adalah
           A  (80 - 100), AB (75 - 79,9), B  (70 - 74,9), BC (65 - 79,9), C (60 - 64,9),
	 	   CD (55 - 59,9), D  (40 - 54,9), E (< 40)
	 	   
  Goal Praktikum :
	1. Bisa mendeklarasikan variabel struct
	2. Bisa memberi nilai pada variabel struct
	3. Bisa mendefinisikan konstanta variabel global (bobot)
	4. Bisa membuat fungsi dgn paramater struct
	5. Bisa memanggil fungsi dgn passing paramater bertipe struct.
	6. Paham menggunakan struct
*/

#include <stdio.h>
#include "MahasiswaADT.h"

int main(){
	
    Mahasiswa mhs1, mhs2;

    mhs1.nama= "Akhmad";
    mhs1.nim = "101010";
    mhs1.ets = 80;
    mhs1.eas = 90;
    mhs1.kuis= 85;
	
	mhs2.nama= "Alnez Rainansantana";
	mhs2.nim = "231524001";
	mhs2.ets = 90;
	mhs2.eas = 95;
	mhs2.kuis= 65;
	
	mhs1.total = get_total(mhs1);
	
	mhs1.predikat = get_predicate(mhs1);
	
    displayDataMhs(mhs1);
    return 0;
}
