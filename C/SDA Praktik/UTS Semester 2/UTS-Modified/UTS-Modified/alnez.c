#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

typedef char infotype[100];
typedef struct tElmtList *address;
typedef struct tElmtList {
 infotype info;
 address next;
 } mhs;

typedef struct{
    infotype kota;
    struct tElmtList *prev1;
    struct tElmtList *next1;
    struct tElmtList *next2;
 } kt;


kt A[100];

void entry() {
    char kota[100];
    char nama[100];

    printf("Masukkan nama kota: ");
    scanf("%s", kota);
    printf("Masukkan nama mahasiswa: ");
    scanf("%s", nama);

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

    mhs *newNode = (mhs *)malloc(sizeof(mhs));
    strcpy(newNode->info, nama);
    newNode->next = NULL;

    mhs *temp = A[index].next1;
    if (temp == NULL) {
        A[index].next1 = newNode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    printf("Data mahasiswa %s di kota %s berhasil dimasukkan.\n", nama, kota);
}


void deleteKota(char kota[]) {
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

    mhs *temp = A[index].next1;
    while (temp != NULL) {
        mhs *toDelete = temp;
        temp = temp->next;
        free(toDelete);
    }

    strcpy(A[index].kota, "");
    A[index].next1 = NULL;

    printf("Kota %s berhasil dihapus beserta semua datanya.\n", kota);
}

void deleteNama(char nama[]) {
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

void tampilPerKota(char kota[]) {
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

void tampilSemua() {
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

void jumlahPerKota(char kota[]) {
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

void totalJumlahKota() {
    int count = 0;
    for (int i = 0; i < 100; i++) {
        if (strcmp(A[i].kota, "") != 0) {
            count++;
        }
    }

    printf("Total jumlah kota: %d\n", count);
}

void totalJumlahNama() {
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

int main() {
    int choice;

    for (int i = 0; i < 100; i++) {
        strcpy(A[i].kota, "");
        A[i].next1 = NULL;
    }

    mhs *newNode;

    // Kota Bandung
    strcpy(A[0].kota, "Bandung");
    newNode = (mhs *)malloc(sizeof(mhs));
    strcpy(newNode->info, "Wahab");
    newNode->next = NULL;
    A[0].next1 = newNode;

    newNode = (mhs *)malloc(sizeof(mhs));
    strcpy(newNode->info, "Amir");
    newNode->next = NULL;
    mhs *temp = A[0].next1;
    temp->next = newNode;

    newNode = (mhs *)malloc(sizeof(mhs));
    strcpy(newNode->info, "Yahya");
    newNode->next = NULL;
    temp = A[0].next1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

    // Kota Jakarta
    strcpy(A[1].kota, "Jakarta");
    newNode = (mhs *)malloc(sizeof(mhs));
    strcpy(newNode->info, "Badu");
    newNode->next = NULL;
    A[1].next1 = newNode;

    newNode = (mhs *)malloc(sizeof(mhs));
    strcpy(newNode->info, "Hasan");
    newNode->next = NULL;
    temp = A[1].next1;
    temp->next = newNode;

    do {
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

        switch (choice) {
            case 1:
                entry();
                break;
            case 2: {
                char kota[100];
                printf("Masukkan nama kota yang ingin dihapus: ");
                scanf("%s", kota);
                deleteKota(kota);
                break;
            }
            case 3: {
                char nama[100];
                printf("Masukkan nama yang ingin dihapus: ");
                scanf("%s", nama);
                deleteNama(nama);
                break;
            }
            case 4: {
                char kota[100];
                printf("Masukkan nama kota: ");
                scanf("%s", kota);
                tampilPerKota(kota);
                break;
            }
            case 5:
                tampilSemua();
                break;
            case 6: {
                char kota[100];
                printf("Masukkan nama kota: ");
                scanf("%s", kota);
                jumlahPerKota(kota);
                break;
            }
            case 7:
                totalJumlahKota();
                break;
            case 8:
                totalJumlahNama();
                break;
            case 9:
                printf("Exiting program.\n");
                break;
            default:
                printf("Tidak valid. Tolong ulangi lagi.\n");
        }
    } while (choice != 9);

    return 0;
}
