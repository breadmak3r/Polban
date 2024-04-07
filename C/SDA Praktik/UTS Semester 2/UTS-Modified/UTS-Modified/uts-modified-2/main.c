#include "head.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    address First = NULL;
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
        tampilSemua();
        printf("\nMenu:\n");
        printf("1. Entry\n");
        printf("2. Delete Kota\n");
        printf("3. Delete Nama\n");
        printf("4. Tampilkan Data Nama Per Kota\n");
        printf("5. Tampilkan Semua Data\n");
        printf("6. Jumlah Data Nama Per Kota\n");
        printf("7. Total Jumlah Kota\n");
        printf("8. Total Jumlah Data Nama\n");
        printf("9. Cek Palindrom");
        printf("10. Exit\n");
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
                if (cekPalindrom(First)) {
                    printf("Kata/frasa adalah palindrom.\n");
                    } else {
                    printf("Kata/frasa bukan palindrom.\n");
                }
                break;
            case 10:
                printf("Exiting program. \n");
                break;
            default:
                printf("Tidak valid. Tolong ulangi lagi.\n");
        }
    } while (choice != 9);

    return 0;
}
