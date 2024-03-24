#include <stdio.h>

int main(){
    // Deklarasi pointer karakter pkota dan inisialisasi dengan alamat string "BANDUNG"
    char *pkota = "BANDUNG";
    
    // Mencetak string yang ditunjuk oleh pointer pkota menggunakan fungsi puts()
    puts(pkota);
    
    // Mengembalikan nilai 0 untuk menunjukkan bahwa program berakhir dengan sukses
    return 0;
}
