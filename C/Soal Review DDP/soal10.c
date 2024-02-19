#include<stdio.h>

// Deklarasi prototipe fungsi fun yang menerima satu parameter bertipe integer dan mengembalikan integer
int fun(int);

int main(){
    float k=3; // Mendeklarasikan variabel k bertipe float dan menginisialisasinya dengan nilai 3

    // Memanggil fungsi fun dengan argumen hasil dari operasi fun yang diaplikasikan dua kali terhadap nilai k
    fun(k = fun(fun(k)));

    // Menampilkan nilai dari variabel k
    printf("%f\n", k);

    return 0;
}

// Definisi fungsi fun yang menerima satu parameter bertipe integer dan mengembalikan integer
int fun(int i){
    i++; // Menambahkan 1 pada nilai i
    return i; // Mengembalikan nilai i yang telah ditambah 1
}
