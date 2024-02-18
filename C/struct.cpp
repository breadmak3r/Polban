#include <stdio.h>
#include <string.h>

// Mendefinisikan struct Mahasiswa
struct Mahasiswa {
    char nama[50];
    int umur;
    double ipk;
};

int main() {
    // Membuat variabel bertipe struct Mahasiswa
    struct Mahasiswa mhs1;

    // Mengisi nilai untuk anggota struct
    strcpy(mhs1.nama, "John Doe");
    mhs1.umur = 20;
    mhs1.ipk = 3.5;

    // Menampilkan nilai anggota struct
    printf("Nama: %s\n", mhs1.nama);
    printf("Umur: %d\n", mhs1.umur);
    printf("IPK: %.2f\n", mhs1.ipk);

    return 0;
}

