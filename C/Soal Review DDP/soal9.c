#include<stdio.h>

// Deklarasi fungsi fun yang menerima satu parameter bertipe integer dan mengembalikan integer
int fun(int i){
    i++; // Menambahkan 1 pada nilai i
    return i; // Mengembalikan nilai i yang telah ditambah 1
}

int main(){
    int fun(int); // Deklarasi fungsi fun di dalam main yang mengambil satu parameter bertipe integer

    int i=3; // Mendeklarasikan variabel i bertipe integer dan menginisialisasinya dengan nilai 3

    // Memanggil fungsi fun dengan argumen hasil dari operasi fun yang diaplikasikan dua kali terhadap nilai i
    fun(i = fun(fun(i)));

    // Mennampilkan nilai dari variabel i
    printf("%d\n", i);

    return 0;
}
