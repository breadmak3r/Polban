#include <stdio.h>

int main(){
    float d, *pd;   // Deklarasi variabel d dan pointer pd bertipe float

    d = 54.5;   // Variabel d diberi nilai 54.5
    printf("Isi d semula = %g\n", d);   // Menampilkan isi d semula

    pd = &d;    // variabel pd diberi nilai dengan alamat dari variabel d
    *pd = *pd + 10; // Menambahkan 10 pada nilai dari pointer pd
    printf("Isi d kini = %g\n", d); // Menampilkan isi d kini

    return 0;
}