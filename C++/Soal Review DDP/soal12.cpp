#include<iostream> // Menggunakan header file iostream untuk input-output standar

using namespace std; // Menggunakan namespace std untuk menggunakan fungsi-fungsi dari C++ Standard Library

// Definisi fungsi Sum dengan tiga parameter a, b, dan c, dimana c didefinisikan sebagai reference (diperlakukan sebagai variabel yang sama dengan variabel yang dimasukkan)
void Sum(int a, int b, int &c){
    a = b + c; // Menetapkan nilai a dengan hasil penjumlahan dari b dan c
    b = a + c; // Menetapkan nilai b dengan hasil penjumlahan dari a (bukan a baru) dan c
    c = a + b; // Menetapkan nilai c dengan hasil penjumlahan dari a (bukan a baru) dan b (bukan b baru)
}

int main(){
    int x=2, y=3; // Mendeklarasikan variabel x dan y kemudian menginisialisasinya dengan nilai 2 dan 3
    Sum(x, y, y); // Memanggil fungsi Sum dengan argumen x, y, dan y yang dimana y digunakan sebagai variabel reference
    cout<< x << " " << y; // Menanmpilkan nilai dari variabel x dan y
    return 0;
}
