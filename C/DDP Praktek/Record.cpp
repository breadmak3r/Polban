#include <stdio.h>
#include <string.h>

// Definisikan struktur untuk data siswa
struct Student {
    char name[50];
    int age;
    double gpa;
};

int main() {
    // Mendeklarasikan dan menginisialisasi sebuah variabel dengan tipe data struct Student
    struct Student student1;
    struct Student student2;
    
    // Mengisi data ke dalam record
    strcpy(student1.name, "John Doe");
    student1.age = 20;
    student1.gpa = 3.75;
    
    strcpy(student2.name, "Lionel Gusti");
    student2.age = 34;
    student2.gpa = 3.89;
    
    // Menampilkan informasi siswa dari record
    printf("Nama: %s\n", student1.name);
    printf("Usia: %d\n", student1.age);
    printf("IPK: %.2f\n", student1.gpa);
    printf("\nNama: %s\n", student2.name);
    printf("Usia: %d\n", student2.age);
    printf("IPK: %.2f\n", student2.gpa);

    return 0;
}

