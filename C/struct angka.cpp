#include <stdio.h>

// Menggunakan struktur data untuk menyimpan data yang terstruktur
struct Angka {
    int nilai1;
    int nilai2;
};

int main() {
    // Pemahaman tentang struktur data
    struct Angka data;
    data.nilai1 = 10;
    data.nilai2 = 20;
    
    // Operasi menggunakan struktur data
    int hasil = data.nilai1 + data.nilai2;
    
    printf("Hasil penjumlahan: %d\n", hasil);
    
    return 0;
}

