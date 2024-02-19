#include<stdio.h>
int sumdig(int);    // Deklarasi fungsi sumdig
int main(){
    int a, b;       // Mendeklarasikan variabel a dan b bertipe integer
    
    // Memanggil fungsi sumdig() dengan argumen 123 dan menetapkan hasilnya ke variabel a dan b
    a = sumdig(123);
    b = sumdig(123);
    printf("%d, %d\n", a, b);   // Menampilkan nilai dari variabel a dan b
    return 0;
}
int sumdig(int n){
    int s, d;   // Mendeklarasikan variabel lokal s dan d bertipe integer
    if(n!=0){   // Jika n bukan 0, melakukan rekursi untung menghitung jumlah dari n
        d = n%10;   //  Mengambil digit terakhir dari n
        n = n/10;   // Menghapus digit terakhir dari n
        s = d + sumdig(n);  // Menghitung jumlah digit dengan rekursi
    }
    else{
        return 0;   // Jika n adalah 0, mengembalikan 0
    return s;       // Mengembalikan jumlah digit dari n
    }
}