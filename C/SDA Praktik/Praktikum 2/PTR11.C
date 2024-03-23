#include <stdio.h>

int N;

int succ(int i);
int pred(int i);

void geser(int *TT, int (*f)(int));

int main(){
    int MyTab[10];
    int i;

    N = 10;
    for(i = 0; i < N; i++){
        MyTab[i] = i;
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
        printf(" %d ", MyTab);
    }
    printf("\n");

    printf("Geser dengan pred \n");
    geser(MyTab, pred);
    printf(" dalam main setelah aplikasi pred \n");
    for(i = 0; i < N; i++){
        printf(" %d ", MyTab[1]);
    }
    printf("\n");

    return 0;
}

int succ(int i){
    return (i + 1);
}

int pred(int i){
    return (i -1);
}

void geser(int *TT, int (*f)(int)){
    int i;
    printf(" dalam geser \n");
    for (i = 0; i < N; i++){
        TT[i] = f(TT[i]);
        printf(" %d ", TT[i]);
    }
    printf("\n");
}