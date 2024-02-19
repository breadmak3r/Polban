#include<iostream> // Menggunakan header file iostream untuk input-output standar

using namespace std; // Menggunakan namespace std untuk menggunakan fungsi-fungsi dari C++ Standard Library

int add(int a, int b); // Deklarasi prototipe fungsi add

int main(){
    int i = 5, j= 6; // Mendeklarasikan variabel i dan j dengan nilai 5 dan 6
    cout << add(i,j) << endl; // Memanggil fungsi add dengan argumen i dan j dan mnampilkan hasilnya
    return 0;
}

int add(int a, int b){ // Definisi fungsi add dengan dua parameter a dan b bertipe integer
    int sum = a+b; // Menambahkan nilai a dan b yang kemudian hasilnya disimpan dalam variabel sum
    a = 7; // Mengubah nilai a menjadi 7
    return a+b; // Mengembalikan hasil penambahan nilai a (7) dan nilai b
}
