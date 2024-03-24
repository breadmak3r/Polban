#include "head.h"

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