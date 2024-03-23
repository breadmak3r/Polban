#include <stdio.h>

int main(){
    // Deklarasi dan inisialisasi array tgl_lahir yang menyimpan tanggal lahir
    static int tgl_lahir[] = {18, 6, 1989}; 

    // Deklarasi variabel pointer ptgl
    int *ptgl;
    
    // Assign alamat memori dari array tgl_lahir ke pointer ptgl
    ptgl = tgl_lahir;

    // Mencetak nilai yang ditunjuk oleh pointer ptgl
    printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);

    // Mencetak nilai dari elemen pertama array tgl_lahir langsung dari array tersebut
    printf("Nilai dari tgl_lahir[0] = %d\n", tgl_lahir[0]);

    // Mencetak nilai dari elemen kedua array tgl_lahir langsung dari array tersebut
    printf("Nilai dari tgl_lahir[1] = %d\n", tgl_lahir[1]);

    // Mencetak nilai dari elemen ketiga array tgl_lahir langsung dari array tersebut
    printf("Nilai dari tgl_lahir[2] = %d\n", tgl_lahir[2]);
    
    return 0;
}
