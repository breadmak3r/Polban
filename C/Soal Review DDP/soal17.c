// Assume there is a file called 'file.c' in c:\tc\directory.

int main(){
    FILE *fp; // Mendeklarasikan pointer ke FILE untuk menunjuk ke file yang akan dibuka

    // Membuka file "c:\tc\file.c" dalam mode baca ("r") dan menugaskan pointer ke FILE fp
    fp = fopen("c:\tc\file.c", "r");

    // Memeriksa apakah fp adalah NULL, menandakan bahwa pembukaan file gagal
    if(!fp){
        printf("Unable to open file."); // Menampilkan pesan kesalahan jika pembukaan file gagal
        fclose(fp); // Menutup file yang tidak berhasil dibuka
        return 0; // Keluar dari program dengan nilai 0
    }
}
