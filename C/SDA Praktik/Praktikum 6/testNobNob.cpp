#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

//struktur data SLL
typedef char infotype[100];
typedef struct tElmtList *address;
typedef struct tElmtList {
 infotype info;
 address next;
 } mhs;

//struktur data array
typedef struct{
 infotype kota;
 address next1;
 } kt;

//deklarasi variabel array
kt A[100];

void entry() {
    char kota[100];
    char nama[100];

    printf("Masukkan nama kota: ");
    scanf("%s", kota);
    printf("Masukkan nama mahasiswa: ");
    scanf("%s", nama);

    // Find an empty slot in the array to insert the city if it's not already there
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

    // Create a new node for the student
    mhs *newNode = (mhs *)malloc(sizeof(mhs));
    strcpy(newNode->info, nama);
    newNode->next = NULL;

    // Find the last node in the linked list associated with the city
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

    // Free the linked list associated with the city
    mhs *temp = A[index].next1;
    while (temp != NULL) {
        mhs *toDelete = temp;
        temp = temp->next;
        free(toDelete);
    }

    // Reset the array entry
    strcpy(A[index].kota, "");
    A[index].next1 = NULL;

    printf("Kota %s berhasil dihapus beserta semua datanya.\n", kota);
}

void delete_nama(char nama[]) {
    // Traverse all cities
    for (int i = 0; i < 100; i++) {
        mhs *prev = NULL;
        mhs *curr = A[i].next1;

        // Traverse the linked list of each city
        while (curr != NULL) {
            if (strcmp(curr->info, nama) == 0) {
                // Delete the node
                if (prev == NULL) {
                    // If it's the first node
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

int main() {
    int choice;
    
    // Initialize array A
    for (int i = 0; i < 100; i++) {
        strcpy(A[i].kota, "");
        A[i].next1 = NULL;
    }

    do {
        // Display menu
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

        // Perform actions based on user choice
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
            case 3: {
                char nama[100];
                printf("Masukkan nama yang ingin dihapus: ");
                scanf("%s", nama);
                delete_nama(nama);
                break;
            }
            case 4: {
                char kota[100];
                printf("Masukkan nama kota: ");
                scanf("%s", kota);
                tampilkan_per_kota(kota);
                break;
            }
            case 5:
                tampilkan_semua();
                break;
            case 6: {
                char kota[100];
                printf("Masukkan nama kota: ");
                scanf("%s", kota);
                jumlah_data_per_kota(kota);
                break;
            }
            case 7:
                total_jumlah_kota();
                break;
            case 8:
                total_jumlah_data_nama();
                break;
            case 9:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 9);

    return 0;
}