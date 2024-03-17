#include <stdio.h>

void f1(void);
void f2(void);
void f3(void);
void f4(void);

#define true 1
#define false 0
int quit = false;

int main(){
    void(*tab[4])() = {f1, f2, f3, f4};
    
    printf("Pointer to function: \n");
    do{
        printf("Pilih salah satu: \n");
        printf("1. Buka file hanya untuk baca\n");
        printf("2. Tutup file\n");
        printf("3. Edit file\n");
        printf("4. Quit\n");

        tab[getchar() - '1']();
        getchar();
    } while(!quit);

    return 0;
}

void f1(){
    printf("Ini fungsi f1 \n");
}

void f2(){
    printf("Ini fungsi f2 \n");
}

void f3(){
    printf("Ini fungsi f3 \n");
}

void f4(){
    quit = true;
    printf("Quit...\n");
}