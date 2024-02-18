#include <stdio.h>
#include <stdlib.h>

// Variabel global
int pilihan;
int lokasiMenu;
int modePermainan;

// Modul 1
void tampilCaraBermain() {
    do {
        system("cls");
        printf("+-------------------------------------------------------------------------------------------------------------------------------------------------------+\n");
        printf("|						      	          TIC  TAC  TOE																									|\n");
        printf("+-------------------------------------------------------------------------------------------------------------------------------------------------------+\n");
        printf("|		      						      RULES																											|\n");
        printf("+-------------------------------------------------------------------------------------------------------------------------------------------------------+\n");
        printf("|																																						|\n");
        printf("|  How to Play																																			|\n");
        printf("|  Players enter number inside the box that you  want to pick.																							|\n");
        printf("|  For example, if the user inputs 12, then the the box with the number 12 will change its text into user's symbol.										|\n");
        printf("|																																						|\n");
        printf("|  Rules of the Game:																																	|\n");
        printf("|  - Players take turns placing symbols, starting with the symbol X.																					|\n");
        printf("|  - On a 3x3 board, a player is considered the winner if they place 3 of their symbols in a row, either horizontally, vertically, or diagonally.		|\n");
        printf("|  - On a 5x5 board, a player is considered the winner if they place 4 of their symbols in a row, either horizontally, vertically, or diagonally.		|\n");
        printf("|  - On a 7x7 board, a player is considered the winner if they place 5 of their symbols in a row, either horizontally, vertically, or diagonally.		|\n");
        printf("|  - The game ends in a draw if there are no empty cells left.																							|\n");
        printf("|																																						|\n");
        printf("|  1. Continue																																			|\n");
        printf("|  2. Back to Main Menu																																	|\n");
        printf("+-------------------------------------------------------------------------------------------------------------------------------------------------------+\n");
        printf("   Input: ");
        scanf("%d", &pilihan);

        if (pilihan != 1 && pilihan != 2) {
            printf("Invalid input. Please enter '1' or '2'.\n");
            system("cls");
        }
    } while (pilihan != 1 && pilihan != 2);

    lokasiMenu = (pilihan == 1) ? 3 : 1;
}

// Modul 2
void pemilihanModeBermain() {
    do {
        system("cls");
        printf("+-----------------------------------------------+\n");
        printf("|		  TIC  TAC  TOE							|\n");
        printf("+-----------------------------------------------+\n");
        printf("|		    GAME MODE							|\n");
        printf("+-----------------------------------------------+\n");
        printf("|												|\n");
        printf("|  1. SINGEPLAYER (BOT)							|\n");
        printf("|  2. MULTIPLAYER (PLAYER 2)					|\n");
        printf("|												|\n");
        printf("|  9. Back to Rules								|\n");
        printf("|  0. Back to Main Menu							|\n");
        printf("|												|\n");
        printf("+-----------------------------------------------+\n");
        printf("   Input: ");
        scanf("%d", &pilihan);

        if (pilihan != 1 && pilihan != 2 && pilihan != 9 && pilihan != 0) {
            printf("Invalid input. Please enter '1', '2', '9', or '0'.\n");
            system("cls");
        }
    } while (pilihan != 1 && pilihan != 2 && pilihan != 9 && pilihan != 0);

    if (pilihan == 1 || pilihan == 2) {
        lokasiMenu = 4;
        modePermainan = pilihan;
    } else if (pilihan == 9) {
        lokasiMenu = 2;
    } else if (pilihan == 0) {
        lokasiMenu = 1;
    }
}

int main() {
    // Inisialisasi variabel global
    lokasiMenu = 1;
    modePermainan = 0;

    // Contoh penggunaan modul 1 dan modul 2
    tampilCaraBermain();
    pemilihanModeBermain();

    // Output hasil dari pemilihan
    printf("Lokasi Menu: %d\n", lokasiMenu);
    printf("Mode Permainan: %d\n", modePermainan);

    return 0;
}
