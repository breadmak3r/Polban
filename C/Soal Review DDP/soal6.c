#include<stdio.h>

// Deklarasi prototipe fungsi funcl dengan parameter integer
int funcl(int);

int main(){
    int k = 35; // Mendeklarasikan variabel k dan menginisialisasinya dengan nilai 35

    // Memanggil fungsi funcl dengan argumen k yang dimodifikasi oleh operasi funcl di dalamnya
    k = funcl(k = funcl(k = funcl(k)));

    // Menampilkan nilai k setelah dilakukan serangkaian operasi funcl
    printf("k = %d\n", k);

    return 0;
}

// Definisi fungsi funcl yang menerima parameter k bertipe integer
int funcl(int k){
    k++; // Menambahkan 1 pada nilai k
    return k; // Mengembalikan nilai k yang telah ditambahkan 1
}
