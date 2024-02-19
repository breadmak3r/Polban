#include<stdio.h>
int main(){
    void fun(char*);    // Deklarasi fungsi fun
    char a[100];    // Deklarasi array a dengan 100 index
    
    // Mengisi elemen-elemen array a dengan karakter A, B, C, dan D
    a[0] = 'A'; a[1] = 'B';
    a[2] = 'C'; a[3] = 'D';
    fun(&a[0]); // Memanggil fungsi fun dengan alamat dari elemen pertama array a
    return 0;
}
void fun(char *a){  // Definisi fungsi fun
    a++;    // Menambahkan 1 pada pointer a sehingga menunjuk ke elemen berikutnya
    printf("%c", *a);   // Menampilkan nilai yang ditunjuk oleh pointer a, yaitu elemen kedua dari array a
    a++;    // Menambahkan 1 lagi pada pointer a sehingga menunjuk ke elemen berikutnya
    printf("%c", *a);   // Menampilkan nilai yang ditunjuk oleh pointer a, yaitu elemen ketiga dari array a
}