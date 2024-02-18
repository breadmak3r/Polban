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
    char *nama;
    char *nim;
    float ets;
    //Tambahkan deklarasi variabel baru: eas, kuis, total, dan predikat
} Mahasiswa;

//Deklarasi prosedur display
void displayDataMhs(Mahasiswa mhs);
//Tambahkan deklarasi fungsi get_total;
//Lengkapi paramater diantara tanda /* */
const char * get_predicate(/*parameter*/);
//Tambahkan deklarasikan konstanta global: bobot ets, eas, dan kuis

int main(){
	//Deklarasi variabel mhs1 dan mhs2 bertipe Mahasiswa
    Mahasiswa mhs1, mhs2;

    //Mengisi data mahasiswa 1
    mhs1.nama = "Akhmad";
    mhs1.nim = "101010";
    mhs1.ets = 80;
	//Tambahkan nilai eas=90 dan kuis=85
	
	//Tambahkan data mahasiswa 2: nama dan nim diisi oleh data sendiri dan temannya, 
	//                            silahkan isi sembarang nilai untuk ets, eas, dan kuis=65
	
	//Panggil fungsi get_total kemudian simpan nilainya ke variabel total
	//Panggil fungsi get_predikat kemudian simpan nilainya ke variabel predikat
	
	//Memanggil prosedur display
    displayDataMhs(mhs1);
    return 0;
}
void displayDataMhs(Mahasiswa mhs){
	printf("Data Mahasiswa:\n");
    printf("Nama: %s\n", mhs.nama);
    printf("Nim: %s\n", mhs.nim);
    printf("ETS: %2.f\n", mhs.ets);
    //Tampilkan nilai eas, kuis, total, dan predikat
}
//lengkapi fungsi berikut dengan mengganti keterangan diantara tanda /* dan */
// dan lengkapi body fungsi ini untuk mendapatkan nilai akhir matakuliah berdasarkan aturan pada F.S.
/*tipe data*/ get_total(/*paramater*/){
	
	// isi algoritma
	
	return /* nilai kembalian*/
}
//lengkapi fungsi berikut dengan mengganti keterangan diantara tanda /* dan */ pada parameter
// dan lengkapi body fungsi ini untuk mendapatkan nilai predikat dari nilai akhir berdasarkan aturan pada F.S.
const char * get_predicate(/*parameter*/){
	
    // isi Algoritma
    
	return /*nilai kembalian*/;
}
