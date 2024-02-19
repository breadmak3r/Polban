#include<stdio.h>

float f(int, float);    // Deklarasi fungsi f dengan parameter int dan float 
int main(){
    int a;  // Deklarasi variabel a bertipe integer
    a = f(10, 3.14);    // Memanggil fungsi f dengan argumen 10 dan 3.14 yang kemudian hasilnya disimpan dalam variabel a
    printf("%d\n", a);  // Menampilkan nilai variabel a sebagai integer
    return 0;
}
float f(int aa, float bb){  // Definisi fungsi f dengan parameter aa bertipe integer dan bb bertipe float
    return((float)aa + bb);    // Mengembalikan hasil penjumlahan aa (dikonversi ke float) dan bb
}