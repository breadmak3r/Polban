#include <stdio.h>

// Deklarasi prototipe fungsi-fungsi
void f1(void);
void f2(void);
void f3(void);
void f4(void);

// Mendefinisikan konstanta true dan false
#define true 1
#define false 0

// Variabel global untuk menentukan apakah program berakhir
int quit = false;

int main(){
    // Array pointer ke fungsi yang menunjuk ke fungsi-fungsi f1, f2, f3, dan f4
    void(*tab[4])() = {f1, f2, f3, f4};
    
    // Menampilkan pesan pemilihan menu dan melakukan pemanggilan fungsi sesuai pilihan pengguna
    printf("Pointer to function: \n");
    do{
        printf("Pilih salah satu: \n");
        printf("1. Buka file hanya untuk baca\n");
        printf("2. Tutup file\n");
        printf("3. Edit file\n");
        printf("4. Quit\n");

        // Memanggil fungsi sesuai input pengguna dan mengonsumsi karakter newline
        tab[getchar() - '1']();
        getchar();
    } while(!quit);

    return 0;
}

// Definisi fungsi f1
void f1(){
    printf("Ini fungsi f1 \n");
}

// Definisi fungsi f2
void f2(){
    printf("Ini fungsi f2 \n");
}

// Definisi fungsi f3
void f3(){
    printf("Ini fungsi f3 \n");
}

// Definisi fungsi f4
void f4(){
    // Mengubah nilai variabel quit menjadi true untuk mengakhiri program
    quit = true;
    printf("Quit...\n");
}
