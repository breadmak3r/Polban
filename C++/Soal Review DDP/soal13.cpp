#include<iostream> // Menggunakan header file iostream untuk input-output standar

using namespace std; // Menggunakan namespace std untuk menggunakan fungsi-fungsi dari C++ Standard Library

// Definisi fungsi fun dengan satu parameter x yang diberikan sebagai reference
void fun(int &x){
    x = 20; // Mengubah nilai variabel x menjadi 20
}

int main(){
    int x = 10; // Mendeklarasikan variabel x dan menginisialisasinya dengan nilai 10

    fun(x); // Memanggil fungsi fun dengan variabel x sebagai argumennya yang akan mengubah nilai x menjadi 20

    // Menampilkan pesan bersama dengan nilai x setelah dipanggil oleh fungsi fun
    cout << "New value of x is " << x;

    return 0;
}
