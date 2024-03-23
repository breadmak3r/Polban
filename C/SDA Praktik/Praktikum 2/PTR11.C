#include <stdio.h>

// Deklarasi variabel global N
int N;

// Deklarasi fungsi untuk mendapatkan suksesor dan predeksesor suatu angka
int succ(int i);
int pred(int i);

// Deklarasi fungsi geser yang akan memodifikasi array menggunakan fungsi f
void geser(int *TT, int (*f)(int));

int main(){
    int MyTab[10]; // Deklarasi array MyTab dengan ukuran 10
    int i;

    N = 10; // Inisialisasi nilai N dengan 10
    for(i = 0; i < N; i++){
        MyTab[i] = i; // Mengisi array MyTab dengan nilai i
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
    for(i = 0; i < N; i++){
        printf(" %d ", MyTab[i]); // Menampilkan nilai MyTab setelah pemanggilan fungsi geser dengan pred
    }
    printf("\n");

    return 0;
}

// Implementasi fungsi succ untuk mendapatkan suksesor suatu angka
int succ(int i){
    return (i + 1); // Mengembalikan nilai suksesor dari i
}

// Implementasi fungsi pred untuk mendapatkan predeksesor suatu angka
int pred(int i){
    return (i -1); // Mengembalikan nilai predeksesor dari i
}

// Implementasi fungsi geser yang akan memodifikasi array menggunakan fungsi f
void geser(int *TT, int (*f)(int)){
    int i;
    printf(" dalam geser \n");
    for (i = 0; i < N; i++){
        TT[i] = f(TT[i]); // Memanggil fungsi f pada setiap elemen array dan menyimpan hasilnya kembali ke array
        printf(" %d ", TT[i]); // Menampilkan nilai array setelah dimodifikasi oleh fungsi f
    }
    printf("\n");
}
