#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

typedef char infotype[100];

// Struktur data untuk node kota
typedef struct tElmtList {
    infotype kota;
    struct tElmtList *prev1;
    struct tElmtList *next1;
    struct tElmtList *next2;
} kt;

// Deklarasi variabel array
kt A[100];

void entry() {
    char kota[100];
    char nama[100];

    printf("Masukkan nama kota: ");
    scanf("%s", kota);
    printf("Masukkan nama mahasiswa: ");
    scanf("%s", nama);

    // Temukan indeks kosong di array untuk memasukkan kota jika belum ada
    int index = -1;
    for (int i = 0; i < 100; i++) {
        if (strcmp(A[i].kota, "") == 0) {
            index = i;
            strcpy(A[i].kota, kota);
            break;
        } else if (strcmp(A[i].kota, kota) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Array penuh. Tidak bisa menambah kota baru.\n");
        return;
    }

    // Buat node baru untuk mahasiswa
    struct tElmtList *newNode = (struct tElmtList *)malloc(sizeof(struct tElmtList));
    strcpy(newNode->kota, kota);
    newNode->prev1 = NULL;
    newNode->next1 = NULL;
    newNode->next2 = NULL;

    // Cari node terakhir di linked list yang terkait dengan kota
    struct tElmtList *temp = &A[index];
    while (temp->next1 != NULL) {
        temp = temp->next1;
    }

    // Tambahkan node baru ke linked list
    temp->next1 = newNode;
    newNode->prev1 = temp;

    // Update pointer next2 di node sebelumnya
    if (temp->prev1 != NULL) {
        temp->prev1->next2 = newNode;
    }

    // Tampilkan konfirmasi
    printf("Data mahasiswa %s di kota %s berhasil dimasukkan.\n", nama, kota);
}

void delete_kota(char kota[]) {
    int index = -1;
    for (int i = 0; i < 100; i++) {
        if (strcmp(A[i].kota, kota) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Kota tidak ditemukan.\n");
        return;
    }

    // Free linked list yang terkait dengan kota
    struct tElmtList *temp = A[index].next1;
    while (temp != NULL) {
        struct tElmtList *toDelete = temp;
        temp = temp->next1;
        free(toDelete);
    }

    // Reset entri array
    strcpy(A[index].kota, "");
    A[index].next1 = NULL;

    printf("Kota %s berhasil dihapus beserta semua datanya.\n", kota);
}

void delete_nama(char nama[]) {
    for (int i = 0; i < 100; i++) {
        mhs *prev = NULL;
        mhs *curr = A[i].next1;

        while (curr != NULL) {
            if (strcmp(curr->info, nama) == 0) {
                if (prev == NULL) {
                    A[i].next1 = curr->next;
                } else {
                    prev->next = curr->next;
                }
                free(curr);
                printf("Nama %s berhasil dihapus dari kota %s.\n", nama, A[i].kota);
                return;
            }
            prev = curr;
            curr = curr->next;
        }
    }

    printf("Nama tidak ditemukan dalam semua kota.\n");
}

void tampilkan_per_kota(char kota[]) {
    int index = -1;
    for (int i = 0; i < 100; i++) {
        if (strcmp(A[i].kota, kota) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Kota tidak ditemukan.\n");
        return;
    }

    printf("Data nama di kota %s:\n", kota);
    mhs *temp = A[index].next1;
    while (temp != NULL) {
        printf("%s\n", temp->info);
        temp = temp->next;
    }
}

void tampilkan_semua() {
    printf("Data semua kota dan namanya:\n");
    for (int i = 0; i < 100; i++) {
        if (strcmp(A[i].kota, "") != 0) {
            printf("Kota %s:\n", A[i].kota);
            mhs *temp = A[i].next1;
            while (temp != NULL) {
                printf("- %s\n", temp->info);
                temp = temp->next;
            }
        }
    }
}

void jumlah_data_per_kota(char kota[]) {
    int index = -1;
    for (int i = 0; i < 100; i++) {
        if (strcmp(A[i].kota, kota) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Kota tidak ditemukan.\n");
        return;
    }

    int count = 0;
    mhs *temp = A[index].next1;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("Jumlah data nama di kota %s: %d\n", kota, count);
}

void total_jumlah_kota() {
    int count = 0;
    for (int i = 0; i < 100; i++) {
        if (strcmp(A[i].kota, "") != 0) {
            count++;
        }
    }

    printf("Total jumlah kota: %d\n", count);
}

void total_jumlah_data_nama() {
    int count = 0;
    for (int i = 0; i < 100; i++) {
        mhs *temp = A[i].next1;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
    }

    printf("Total jumlah data nama: %d\n", count);
}
// Implementasi fungsi-fungsi lainnya...

int main() {
    int choice;

    // Inisialisasi array A
    for (int i = 0; i < 100; i++) {
        strcpy(A[i].kota, "");
        A[i].prev1 = NULL;
        A[i].next1 = NULL;
        A[i].next2 = NULL;
    }

    // Inisialisasi awal kota dan nama
    struct tElmtList *newNode;

    // Kota Bandung
    strcpy(A[0].kota, "Bandung");
    newNode = (struct tElmtList *)malloc(sizeof(struct tElmtList));
    strcpy(newNode->kota, "Wahab");
    newNode->prev1 = NULL;
    newNode->next1 = NULL;
    newNode->next2 = NULL;
    A[0].next1 = newNode;

    newNode = (struct tElmtList *)malloc(sizeof(struct tElmtList));
    strcpy(newNode->kota, "Amir");
    newNode->prev1 = NULL;
    newNode->next1 = NULL;
    newNode->next2 = NULL;
    struct tElmtList *temp = A[0].next1;
    temp->next1 = newNode;

    newNode = (struct tElmtList *)malloc(sizeof(struct tElmtList));
    strcpy(newNode->kota, "Yahya");
    newNode->prev1 = NULL;
    newNode->next1 = NULL;
    newNode->next2 = NULL;
    temp = A[0].next1;
    while (temp->next1 != NULL) {
        temp = temp->next1;
    }
    temp->next1 = newNode;

    // Kota Jakarta
    strcpy(A[1].kota, "Jakarta");
    newNode = (struct tElmtList *)malloc(sizeof(struct tElmtList));
    strcpy(newNode->kota, "Badu");
    newNode->prev1 = NULL;
    newNode->next1 = NULL;
    newNode->next2 = NULL;
    A[1].next1 = newNode;

    newNode = (struct tElmtList *)malloc(sizeof(struct tElmtList));
    strcpy(newNode->kota, "Hasan");
    newNode->prev1 = NULL;
    newNode->next1 = NULL;
    newNode->next2 = NULL;
    temp = A[1].next1;
    temp->next1 = newNode;

    do {
        // Menampilkan menu
        printf("\nMenu:\n");
        printf("1. Entry\n");
        printf("2. Delete Kota\n");
        printf("3. Delete Nama\n");
        printf("4. Tampilkan Data Nama Per Kota\n");
        printf("5. Tampilkan Semua Data\n");
        printf("6. Jumlah Data Nama Per Kota\n");
        printf("7. Total Jumlah Kota\n");
        printf("8. Total Jumlah Data Nama\n");
        printf("9. Exit\n");
        printf("Pilih: ");
        scanf("%d", &choice);

        // Melakukan aksi berdasarkan pilihan pengguna
        switch (choice) {
            case 1:
                entry();
                break;
            case 2: {
                char kota[100];
                printf("Masukkan nama kota yang ingin dihapus: ");
                scanf("%s", kota);
                delete_kota(kota);
                break;
            }
            // Kasus dan fungsi lainnya...
            case 9:
                printf("Exiting program.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (choice != 9);

    return 0;
}
