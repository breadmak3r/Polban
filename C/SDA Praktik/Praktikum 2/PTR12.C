#include <stdio.h>

int N;

void succ(int *i);
void pred(int *i);

void geser(int *TT, void(*f)(int *));

int main(){
    int MyTab[10];
    int i;

    N = 10;
    for(i = 0; i < N; i++){
        MyTab[i] = 1;
    }

    printf("Isi tabel dalam main sebelum pemanggilan: \n");
    for(i = 0; i < N; i++){
        printf(" %d ", MyTab[i]);
    }
    printf("\n");

    printf("Geser dengan succ \n");
    geser(MyTab, succ);
    printf(" dalam main \n");
    for(i = 0; i < N; i++){
        printf(" %d ", MyTab[i]);
    }
    printf("\n");

    printf("Geser dengan pred \n");
    geser(MyTab, pred);
    printf(" dalam main setelah aplikasi pred \n");
    for (i = 0; i < N; i++){
        printf(" %d ", MyTab[i]);
    }
    printf("\n");

    return 0;
}

void succ(int *i){
    *i = *i +1;
}

void pred(int *i){
    *i = *i - 1;
}

void geser(int *TT, void(*f)(int *)){
    int i;
    printf(" dalam geser \n");
    for(i = 0; i < N; i++){
        f(&TT[i]);
        printf(" %d ", TT[i]);
    }
    printf("\n");
}