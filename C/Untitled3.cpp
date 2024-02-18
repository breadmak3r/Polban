/*
  Program : Menghitung nilai akhir matakuliah DDP dan predikatnya
  Author : NIM Nama
  Tanggal : 11 November 2022
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

//Deklarasi tipe data bentukan bernama Mahasiswa
typedef struct {
    const char *nama, *nim, *predikat;
    float ets, eas, kuis, total;
    
    //Tambahkan deklarasi variabel baru: eas, kuis, total, dan predikat
} Mahasiswa;

//Deklarasi prosedur display
void displayDataMhs(Mahasiswa mhs);

//Tambahkan deklarasi fungsi get_total;
float get_total(Mahasiswa mhs);

//Lengkapi paramater diantara tanda /* */
const char *get_predicate(Mahasiswa mhs);

//Tambahkan deklarasikan konstanta global: bobot ets, eas, dan kuis
const float bobotETS = 0.35;
const float bobotEAS = 0.4;
const float bobotKUIS= 0.25;


int main(){
	//Deklarasi variabel mhs1 dan mhs2 bertipe Mahasiswa
    Mahasiswa mhs1, mhs2;

    //Mengisi data mahasiswa 1
    mhs1.nama= "Akhmad";
    mhs1.nim = "101010";
    mhs1.ets = 80;
    mhs1.eas = 90;
    mhs1.kuis= 85;
	//Tambahkan nilai eas=90 dan kuis=85
	
	//Tambahkan data mahasiswa 2: nama dan nim diisi oleh data sendiri dan temannya,
	mhs2.nama= "Alnez Rainansantana";
	mhs2.nim = "231524001";
	mhs2.ets = 90;
	mhs2.eas = 95;
	mhs2.kuis= 65;
	//Silahkan isi sembarang nilai untuk ets, eas, dan kuis=65
	
	//Panggil fungsi get_total kemudian simpan nilainya ke variabel total
	mhs1.total = get_total(mhs1);
	
	//Panggil fungsi get_predikat kemudian simpan nilainya ke variabel predikat
	mhs2.predikat = get_predicate(mhs1);
	
	//Memanggil prosedur display
    displayDataMhs(mhs1);
    return 0;
}

void displayDataMhs(Mahasiswa mhs){
	printf("Data Mahasiswa:\n");
    printf("Nama: %s\n", mhs.nama);
    printf("Nim: %s\n", mhs.nim);
    printf("ETS: %2.f\n", mhs.ets);
    printf("EAS: %2.f\n", mhs.eas);
    printf("Kuis: %2.f\n", mhs.kuis);
    printf("Total: %2.f\n", mhs.total);
    printf("Predikat: %s\n", mhs.predikat);
    //Tampilkan nilai eas, kuis, total, dan predikat
}

//lengkapi fungsi berikut dengan mengganti keterangan diantara tanda /* dan */
// dan lengkapi body fungsi ini untuk mendapatkan nilai akhir matakuliah berdasarkan aturan pada F.S.

float get_total(Mahasiswa mhs){
	float nilaiETS, nilaiEAS, nilaiKUIS, total;
	nilaiETS = mhs.ets * bobotETS;
	nilaiEAS = mhs.eas * bobotEAS;
	nilaiKUIS= mhs.kuis* bobotKUIS;
	total = nilaiETS + nilaiEAS + nilaiKUIS;
	
	return total;
}

//lengkapi fungsi berikut dengan mengganti keterangan diantara tanda /* dan */ pada parameter
// dan lengkapi body fungsi ini untuk mendapatkan nilai predikat dari nilai akhir berdasarkan aturan pada F.S.

const char *get_predicate(Mahasiswa mhs){
	const char *predikat;
	if (mhs.total >= 80 && mhs.total <= 100){
		predikat = "A";
	} else if (mhs.total >= 75 && mhs.total <= 79.9){
		predikat = "AB";
	}else if (mhs.total >= 70 && mhs.total <= 74.9){
		predikat = "B";
	}else if (mhs.total >= 65 && mhs.total <= 79.9){
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
    

