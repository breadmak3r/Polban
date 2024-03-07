#include <stdio.h> // Menggunakan header file stdio.h untuk fungsi-fungsi input-output standar
#include <stdlib.h> // Menggunakan header file stdlib.h untuk fungsi-fungsi umum

// Definisi struktur node
struct Node {
    int data; // Variabel untuk menyimpan data dalam node
    struct Node* next; // Pointer yang menunjuk ke node berikutnya dalam linked list
};

// Fungsi untuk membuat node baru
struct Node* createNode(int data) { // Fungsi untuk membuat node baru dengan data tertentu
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // Mengalokasikan memori untuk node baru
    if (newNode == NULL) { // Memeriksa apakah alokasi memori berhasil
        printf("Memory allocation failed!\n"); // Mencetak pesan kesalahan jika alokasi memori gagal
        exit(1); // Keluar dari program dengan kode kesalahan 1
    }
    newNode->data = data; // Menetapkan data baru ke dalam node
    newNode->next = NULL; // Menetapkan pointer next ke NULL karena node baru akan menjadi node terakhir
    return newNode; // Mengembalikan pointer ke node baru
}

// Fungsi untuk menambahkan node di awal linked list
void insertAtBeginning(struct Node** headRef, int data) { // Fungsi untuk menambahkan node di awal linked list
    struct Node* newNode = createNode(data); // Membuat node baru dengan data tertentu
    newNode->next = *headRef; // Menetapkan pointer next node baru ke head linked list
    *headRef = newNode; // Memperbarui head linked list untuk menunjuk ke node baru
}

// Fungsi untuk menambahkan node di akhir linked list
void insertAtEnd(struct Node** headRef, int data) { // Fungsi untuk menambahkan node di akhir linked list
    struct Node* newNode = createNode(data); // Membuat node baru dengan data tertentu
    if (*headRef == NULL) { // Memeriksa apakah linked list kosong
        *headRef = newNode; // Jika ya, node baru menjadi head linked list
        return; // Keluar dari fungsi karena operasi selesai
    }
    struct Node* lastNode = *headRef; // Pointer untuk menelusuri linked list hingga node terakhir
    while (lastNode->next != NULL) { // Menemukan node terakhir dalam linked list
        lastNode = lastNode->next; // Menggerakkan pointer ke node berikutnya dalam linked list
    }
    lastNode->next = newNode; // Menghubungkan node baru sebagai node terakhir dalam linked list
}

// Fungsi untuk menghapus node di awal linked list
void deleteAtBeginning(struct Node** headRef) { // Fungsi untuk menghapus node di awal linked list
    if (*headRef == NULL) { // Memeriksa apakah linked list kosong
        printf("Linked list is empty!\n"); // Mencetak pesan kesalahan jika linked list kosong
        return; // Keluar dari fungsi karena operasi selesai
    }
    struct Node* temp = *headRef; // Menyimpan alamat node yang akan dihapus
    *headRef = (*headRef)->next; // Memperbarui head linked list untuk menunjuk ke node berikutnya
    free(temp); // Menghapus node pertama dari memori
}

// Fungsi untuk menghapus node di akhir linked list
void deleteAtEnd(struct Node** headRef) { // Fungsi untuk menghapus node di akhir linked list
    if (*headRef == NULL) { // Memeriksa apakah linked list kosong
        printf("Linked list is empty!\n"); // Mencetak pesan kesalahan jika linked list kosong
        return; // Keluar dari fungsi karena operasi selesai
    }
    if ((*headRef)->next == NULL) { // Memeriksa apakah linked list hanya memiliki satu node
        free(*headRef); // Jika ya, langsung menghapus node dan mengatur head linked list menjadi NULL
        *headRef = NULL; // Mengatur head linked list menjadi NULL
        return; // Keluar dari fungsi karena operasi selesai
    }
    struct Node* prevNode = NULL; // Pointer untuk menunjuk ke node sebelum node terakhir
    struct Node* currentNode = *headRef; // Pointer untuk menelusuri linked list hingga node terakhir
    while (currentNode->next != NULL) { // Menemukan node terakhir dalam linked list
        prevNode = currentNode; // Menyimpan alamat node sebelum node terakhir
        currentNode = currentNode->next; // Menggerakkan pointer ke node berikutnya dalam linked list
    }
    prevNode->next = NULL; // Menghubungkan node sebelum node terakhir ke NULL
    free(currentNode); // Menghapus node terakhir dari memori
}

// Fungsi untuk mencetak isi linked list
void printLinkedList(struct Node* head) { // Fungsi untuk mencetak isi linked list
    struct Node* currentNode = head; // Pointer untuk menelusuri linked list
    while (currentNode != NULL) { // Melakukan iterasi sampai mencapai akhir linked list
        printf("%d -> ", currentNode->data); // Mencetak data dari setiap node
        currentNode = currentNode->next; // Menggerakkan pointer ke node berikutnya dalam linked list
    }
    printf("NULL\n"); // Mencetak NULL sebagai penanda akhir linked list
}

// Fungsi untuk menghapus seluruh isi linked list
void deleteLinkedList(struct Node** headRef) { // Fungsi untuk menghapus seluruh isi linked list
    struct Node* currentNode = *headRef; // Pointer untuk menelusuri linked list
    struct Node* nextNode = NULL; // Pointer untuk menyimpan alamat node berikutnya
    while (currentNode != NULL) { // Melakukan iterasi sampai mencapai akhir linked list
        nextNode = currentNode->next; // Menyimpan alamat node berikutnya
        free(currentNode); // Menghapus node saat ini dari memori
        currentNode = nextNode; // Menggerakkan pointer ke node berikutnya
    }
    *headRef = NULL; // Mengatur head linked list menjadi NULL
}

int main() { // Fungsi utama
    struct Node* head = NULL; // Pointer ke head linked list

    // Contoh penggunaan modul-modul linked list
    insertAtEnd(&head, 10); // Menambahkan node 10 di akhir linked list
    insertAtEnd(&head, 20); // Menambahkan node 20 di akhir linked list
    insertAtEnd(&head, 30); // Menambahkan node 30 di akhir linked list
    insertAtBeginning(&head, 5); // Menambahkan node 5 di awal linked list
    deleteAtBeginning(&head); // Menghapus node pertama dari linked list
    deleteAtEnd(&head); // Menghapus node terakhir dari linked list
    printLinkedList(head); // Mencetak isi linked list
    deleteLinkedList(&head); // Menghapus seluruh isi linked list

    return 0; // Keluar dari program dengan status sukses
}
