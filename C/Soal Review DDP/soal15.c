#include<stdio.h> // Menggunakan header file stdio.h untuk fungsi-fungsi input-output standar

int main(){
    int i, fss; // Mendeklarasikan variabel i dan fss bertipe integer
    char ch, source[20] = "source.txt", target[20] = "target.txt", t; // Mendeklarasikan variabel ch bertipe char dan source serta target bertipe array char
    FILE *fs, *ft; // Mendeklarasikan dua pointer ke FILE untuk menunjuk ke file yang akan dibuka

    fs = fopen(source, "r"); // Membuka file "source.txt" dalam mode read ("r") dan menugaskan pointer ke FILE fs
    ft = fopen(target, "w"); // Membuka file "target.txt" dalam mode write ("w") dan menugaskan pointer ke FILE ft

    // Melakukan loop tak terbatas sampai EOF (End of File) ditemukan
    while(1){
        ch = getc(fs); // Membaca karakter dari file fs dan menetapkan nilainya ke variabel ch
        if(ch == EOF){ // Jika EOF ditemukan, keluar dari loop
            break;
        } else{
            fseek(fs, 4L, SEEK_CUR); // Melompati 4 byte dari posisi saat ini di file fs
            fputc(ch, ft); // Menulis karakter ch ke dalam file ft
        }
    }

    return 0;
}
