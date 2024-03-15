#include <stdio.h>

int main(){
    int z, s, *pz, *ps; // Deklarasi variabel z, s, pointer pz, pointer ps bertipe integer

    z = 20; // Inisialisasi variabel z menjadi 20
    s = 30; // Inisialisasi variabel s menjadi 30
    pz = &z;    // Memasukkan alamat variabel z ke pointer pz
    ps = &s;    // Memasukkan alamat variabel s ke pointer ps
    *pz = *pz + *ps;    // Menambahkan isi dari pointer pz dengan pointer ps

    printf("z = %d\n", z);  // Menampilkan nilai z
    printf("s = %d\n", s);  // Menampilkan nilai s
}