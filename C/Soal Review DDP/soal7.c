#include<stdio.h>

// Deklarasi prototipe fungsi check dengan parameter integer
int check(int);

int main(){
    int i=45, c; // Mendeklarasikan variabel i dan c bertipe integer

    c = check(i); // Memanggil fungsi check dengan argumen i dan menyimpan hasilnya ke dalam c

    printf("%d\n", c); // Menampilkan nilai c
    return 0;
}

// Definisi fungsi check yang menerima parameter ch bertipe integer
int check(int ch){
    // Memeriksa apakah nilai ch lebih besar dari atau sama dengan 45
    if (ch >= 45){
        return 100; // Mengembalikan nilai 100 jika kondisi terpenuhi
    } else{
        return 10; // Mengembalikan nilai 10 jika kondisi tidak terpenuhi
    }
}
