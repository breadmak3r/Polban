#include<stdio.h>

// Deklarasi prototipe fungsi fun yang menerima pointer ke fungsi tanpa parameter dan mengembalikan integer
int fun(int(*)());

int main(){
    // Memanggil fungsi fun dan meneruskan alamat fungsi main sebagai argumennya
    fun(main);

    // Menampilkan pesan "Hi"
    printf("Hi\n");

    return 0;
}

// Definisi fungsi fun yang menerima pointer ke fungsi tanpa parameter dan mengembalikan integer
int fun(int(*p)()){
    // Mencetak pesan "Hello "
    printf("Hello ");

    return 0; // Mengembalikan nilai 0
}
