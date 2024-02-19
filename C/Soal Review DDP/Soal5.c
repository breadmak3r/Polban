#include<stdio.h>

int addmult(int ii, int jj){ // Deklarasi fungsi addmult dengan dua parameter bertipe integer
    int kk, ll;     // Deklarasi variabel lokal kk dan ll bertipe integer
    kk = ii + jj;   // Penjumlahan nilai parameter ii dan jj yang kemudian hasilnya disimpan di kk
    ll = ii * jj;   // Perkalian nilai parameter ii dan jj yang kemudian hasilnya disimpan di ll
    return(kk, ll); // Mengembalikan nilai ll (hasil perkalian), bukan pasangan nilai (kk, ll)
}

int main(){
    int i = 3, j = 4, k, l;     // Deklarasi variable i, j, k, dan l bertipe integer
    k = addmult(i, j);          // Memanggil fungsi addmult dengan argumen i dan j yang kemudian hasilnya disimpan di k
    l = addmult(i, j);          // Memanggil fungsi addmult dengan argumen i dan j yang kemudian hasilnya disimpan di l
    printf("%d %d\n", k, l);    // Menampilkan nilai k dan l
    return 0;
}