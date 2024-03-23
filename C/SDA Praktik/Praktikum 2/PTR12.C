#include <stdio.h>

int N; // Deklarasi variabel global N

// Deklarasi fungsi succ untuk menambahkan nilai pada pointer i
void succ(int *i);
// Deklarasi fungsi pred untuk mengurangkan nilai pada pointer i
void pred(int *i);

// Deklarasi fungsi geser yang akan memodifikasi array menggunakan fungsi f
void geser(int *TT, void(*f)(int *));

int main(){
    int MyTab[10]; // Deklarasi array MyTab dengan ukuran 10
    int i;

    N = 10; // Inisialisasi nilai N dengan 10
    for(i = 0; i < N; i++){
        MyTab[i] = 1; // Mengisi array MyTab dengan nilai 1
    }

    // Menampilkan isi array MyTab sebelum pemanggilan fungsi geser
    printf("Isi tabel dalam main sebelum pemanggilan: \n");
    for(i = 0; i < N; i++){
        printf(" %d ", MyTab[i]); // Menampilkan nilai MyTab pada indeks ke-i
    }
    printf("\n");

    // Memanggil fungsi geser dengan fungsi succ
    printf("Geser dengan succ \n");
    geser(MyTab, succ);
    printf(" dalam main \n");
    for(i = 0; i < N; i++){
        printf(" %d ", MyTab[i]); // Menampilkan nilai MyTab setelah pemanggilan fungsi geser dengan succ
    }
    printf("\n");

    // Memanggil fungsi geser dengan fungsi pred
    printf("Geser dengan pred \n");
    geser(MyTab, pred);
    printf(" dalam main setelah aplikasi pred \n");
    for (i = 0; i < N; i++){
        printf(" %d ", MyTab[i]); // Menampilkan nilai MyTab setelah pemanggilan fungsi geser dengan pred
    }
    printf("\n");

    return 0;
}

// Implementasi fungsi succ untuk menambahkan nilai pada pointer i
void succ(int *i){
    *i = *i +1; // Menambahkan nilai yang ditunjuk oleh pointer i sebanyak 1
}

// Implementasi fungsi pred untuk mengurangkan nilai pada pointer i
void pred(int *i){
    *i = *i - 1; // Mengurangkan nilai yang ditunjuk oleh pointer i sebanyak 1
}

// Implementasi fungsi geser yang akan memodifikasi array menggunakan fungsi f
void geser(int *TT, void(*f)(int *)){
    int i;
    printf(" dalam geser \n");
    for(i = 0; i < N; i++){
        f(&TT[i]); // Memanggil fungsi f dengan mengirimkan alamat dari elemen array
        printf(" %d ", TT[i]); // Menampilkan nilai array setelah dimodifikasi oleh fungsi f
    }
    printf("\n");
}
