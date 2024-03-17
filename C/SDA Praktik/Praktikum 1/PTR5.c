#include <stdlib.h>
#include <stdio.h>

int main(){
    int i = 5, j;   // Deklarasi variabel i dan j bertipe integer, i diberi nilai 5
    char c = 'X';   // Deklarasi variabel c bertipe character, c berisi huruf X

    int *Ptri = (int *) malloc(4);  // Alokasi memori menggunakan malloc untuk variabel integer dynamic
    int *Ptrj = (int *) malloc(sizeof(int));    // Alokasi memori menggunakan malloc untuk variabel integer dynamic
    float *fx = (float *) malloc(sizeof(float));    // Alokasi memori menggunakan malloc untuk variabel float dynamic

    int A[5];   // Deklarasi array A yang berisi 5 elemen bertipe Integer
    float f = 7.23; // Deklarasi variabel f bertipe float, f bernilai 7.23

    // Program
    *Ptri = 8;  // Mengisi nilai ke variabel yang ditunjuk pointer Ptri
    *Ptrj = 0;  // Mengisi nilai ke variabel yang ditunjuk pointer Ptrj
    *fx = 3;    // Mengisi nilai ke variabel yang ditunjuk pointer fx

    printf("Alamat i = %x \n", &i); // Menampilkan alamat dari i
    printf("Nilai i = %d \n", i);   // Menampilkan nilai dari i
    printf("Ukuran int = %d byte \n\n", sizeof(int));   // Menampilkan ukuran byte dari integer

    printf("Alamat j = %x \n", &j); // Menampilkan alamat dari j
    printf("Nilai j = %d \n", j);   // Menampilkan nilai dari j
    
    printf("Alamat c = %x \n", &c); // Menampilkan alamat dari c
    printf("Nilai c = %c \n", c);   // Menampilkan nilai dari c
    printf("Ukuran char = %d byte \n\n", sizeof(char)); // Menampilkan ukuran byte dari character

    printf("Alamat Ptri = %x \n", &Ptri);   // Menampilkan alamat Ptri
    printf("Isi var Ptri = %x \n", Ptri);   // menampilkan isi dari Ptri
    printf("Nilai yang ditunjuk oleh Ptri = %d \n", *Ptri); // Menampilkan nilai yang ditunjuk oleh Ptri
    printf("Ukuran pointer int = %d byte\n\n", sizeof(int *));  // Menampilkan ukuran byte dari pointer integer

    printf("Alamat Ptrj = %x \n", &Ptrj);   // Menampilkan alamat dari Ptrj
    printf("Isi var Ptrj = %x \n", Ptrj);   // Menampilkan isi dari Ptrj
    printf("Nilai yang ditunjuk oleh Ptrj = %d \n", *Ptrj); // Menampilkan nilai yang ditunjuk oleh Ptrj

    Ptrj = Ptri;    // Mengisi nilai Ptrj dengan nilai yang ditunjuk oleh Ptri
    printf("Isi var Ptrj sekarang = %x \n", Ptrj);  // Menampilkan isi dari Ptrj setelah diganti nilainya
    printf("Nilai yang ditunjuk oleh Ptrj sekarang = %d \n\n", *Ptrj);  // Menampilkan nilai yang ditunjuk oleh Ptrj setelah diganti nilainya

    printf("Alamat A = %x \n", &A); // menampilkan alamat dari A
    printf("Isi var A = %x \n", A[0]);  // Menampilkan isi dari A
    printf("Ukuran array A = %d byte \n\n", sizeof(A)); // menampilkan ukuran byte dari array A

    printf("Alamat f = %x \n", &f); // Menampilkan alamat dari f
    printf("Nilai f = %f \n", f);   // Menampilkan nilai dari f
    printf("Ukuran float = %d byte \n\n", sizeof(float));   // Menampilkan ukuran byte dari f

    return 0;
}