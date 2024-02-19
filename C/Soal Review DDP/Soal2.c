#include<stdio.h>
int main(){
    int a[5] = {5, 1, 15, 20, 25};  // Mendeklarasikan array a dengan 5 elemen
    int i, j, m;    // Mendeklarasikan variable i, j, m
    i = ++a[1];     // Menambahkan nilai elemen kedua dari array a, lalu menetapkannya ke variabel i
    j = a[1]++;     // Menetapkan nilai elemen kedua dari array a ke variabel j yang kemudian ditingkatkan nilainya
    m = a[i++];     // Mengambil nilai elemen ke-3 dari array a menggunakan index
    printf("%d, %d, %d", i, j, m);  // Menampilkan nilai dari variabel i, j, dan m
    return 0;
}