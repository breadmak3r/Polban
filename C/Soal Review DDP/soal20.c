#include<stdio.h> // Menggunakan header file stdio.h untuk fungsi-fungsi input-output standar

int main(){
    FILE *ptr; // Mendeklarasikan pointer ke FILE untuk menunjuk ke file yang akan dibuka
    char i; // Mendeklarasikan variabel i bertipe char

    ptr = fopen("myfile.c", "r"); // Membuka file "myfile.c" dalam mode read ("r") dan menugaskan pointer ke FILE ptr

    // Loop while akan berjalan selama karakter yang dibaca dari file bukan NULL (EOF)
    while((i = fgetc(ptr)) != EOF){
        printf("%c", i); // Menampilkan karakter yang dibaca ke layar
        return 0; // Program keluar dengan nilai 0 setelah membaca satu karakter
    }
}
