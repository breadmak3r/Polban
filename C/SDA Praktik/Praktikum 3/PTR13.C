#include <stdio.h>
#include <stdlib.h>

int N; // Mendeklarasikan variabel N untuk menentukan ukuran tabel
enum MyType{ // Mendefinisikan tipe enumerasi MyType untuk menyimpan nilai 'bulat' atau 'karakter'
    bulat, karakter
};

void succI(void *i); // Deklarasi fungsi succI yang menerima pointer void dan menambahkan nilai pada lokasi yang ditunjuk
void predI(void *i); // Deklarasi fungsi predI yang menerima pointer void dan mengurangi nilai pada lokasi yang ditunjuk
void succC(void *c); // Deklarasi fungsi succC yang menerima pointer void dan menambahkan nilai ASCII pada karakter yang ditunjuk
void predC(void *c); // Deklarasi fungsi predC yang menerima pointer void dan mengurangi nilai ASCII pada karakter yang ditunjuk

void printtab(void *T, enum MyType Ty); // Deklarasi fungsi printtab untuk mencetak isi tabel, menerima pointer void dan tipe enumerasi MyType
void geser(int *TT, void(*f)(void *)); // Deklarasi fungsi geser untuk melakukan pergeseran pada elemen tabel, menerima pointer ke int dan pointer ke fungsi void

int main(){
    void *MyTabInt; // Mendeklarasikan pointer void untuk tabel integer
    void *MyTabC; // Mendeklarasikan pointer void untuk tabel karakter
    int i;

    N = 10; // Mengatur ukuran tabel
    MyTabInt = (int *) malloc(N * sizeof(int)); // Mengalokasikan memori untuk tabel integer
    MyTabC = (char *) malloc(N * sizeof(char)); // Mengalokasikan memori untuk tabel karakter

    *(int*) MyTabInt = 1; // Mengatur nilai pertama dalam tabel integer
    for(i = 0; i < N; i++){
        *((int*) MyTabInt + i) = i; // Mengisi tabel integer dengan nilai increment
        *((char*) MyTabC + i) = 'Z'; // Mengisi tabel karakter dengan karakter 'Z'
    }

    printf("Isi tabel dalam main sebelum pemanggilan: \n");
    printf("    Tabel integer \n");
    
    printtab((int*)MyTabInt, (MyType)0); // Mencetak isi tabel integer
    printf("    Tabel character \n");
    printtab((char*)MyTabC, (MyType)1); // Mencetak isi tabel karakter
    printf("\n");

    printf("Geser dengan succ \n");

    geser((int *)MyTabInt, succI); // Memanggil fungsi geser untuk tabel integer dengan fungsi succI
    geser((int *)MyTabC, succC); // Memanggil fungsi geser untuk tabel karakter dengan fungsi succC
    printf(" dalam main \n");
    printf("    Tabel integer \n");
    printtab((int *)MyTabInt, (MyType)0); // Mencetak isi tabel integer setelah pemanggilan geser
    printf("    Tabel character \n");
    printtab((char *)MyTabC, (MyType)1); // Mencetak isi tabel karakter setelah pemanggilan geser
    printf("\n");

    printf("Geser dengan pred \n");
    geser((int *)MyTabInt, predI); // Memanggil fungsi geser untuk tabel integer dengan fungsi predI
    geser((int *)MyTabC, predC); // Memanggil fungsi geser untuk tabel karakter dengan fungsi predC
    printf(" dalam main \n");
    printf("    Tabel integer \n");
    printtab((int *)MyTabInt, (MyType)0); // Mencetak isi tabel integer setelah pemanggilan geser
    printf("    Tabel character \n");
    printtab((char *)MyTabC, (MyType)1); // Mencetak isi tabel karakter setelah pemanggilan geser
    printf("\n");

    return 0;
}

void succI(void *i){
    *(int*)i = *(int*)i + 1; // Menambahkan nilai pada lokasi yang ditunjuk oleh pointer
}

void predI(void *i){
    *(int*)i = *(int*)i - 1; // Mengurangkan nilai pada lokasi yang ditunjuk oleh pointer
}

void succC(void *c){
    *(char*)c = *(char*)c + 1; // Menambahkan nilai ASCII pada karakter yang ditunjuk oleh pointer
}

void predC(void *c){
    *(char*)c = *(char*)c - 1; // Mengurangkan satu dari nilai ASCII pada karakter yang ditunjuk oleh pointer
}

void geser(int *TT, void (*f)(void *)){
    int i;

    printf(" dalam geser \n"); // Mencetak pesan sebelum melakukan pergeseran
    for(i = 0; i < N; i++){
        f(&TT[i]); // Memanggil fungsi pointer yang ditunjuk oleh f untuk melakukan pergeseran
        printf(" %d ", TT[i]); // Mencetak nilai setelah pergeseran
    }
    printf("\n"); // Pindah baris setelah selesai mencetak seluruh elemen
}

void printtab(void *T, enum MyType Ty){
    int i;
    for (i = 0; i < N; i++){
        switch(Ty){
            case bulat:
                printf("%d ", *((int *)T + i)); // Mencetak nilai bulat dari pointer yang ditunjuk oleh T
                break;
            case karakter:
                printf("%c ", *((char *)T + i)); // Mencetak nilai karakter dari pointer yang ditunjuk oleh T
                break;
        }
    }
}
