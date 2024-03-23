#include <stdio.h>
#include <stdlib.h>

int N;
enum MyType{
    bulat, karakter
}

void succI(void *i);
void predI(void *i);
void succC(void *c);
void predC(void *c);

void printtab(void *T, enum MyType Ty);
void geser(int *TT, void(*f)(void *));

int main(){
    void *MyTabInt;
    void *MyTabC;
    int i;

    N = 10;
    MyTabInt = (int *) malloc(N * sizeof(int));
    MyTabC = (char *) malloc(N * sizeof(char));

    *(int*) MyTabInt = 1;
    for(i = 0; i < N; i++){
        *((int*) MyTabInt + i) = i;
        *((char*) MyTabC + i) = 'Z';
    }

    printf("Isi tabel dalam main sebelum pemanggilan: \n");
    printf("    Tabel integer \n");
    
    printtab((int*)MyTabInt, (MyType)0);
    printf("    Tabel character \n");
    printtab((char*)MyTabC, (MyType)1);
    printf("\n");

    printf("Geser dengan succ \n");

    geser((int *)MyTabInt, succI);
    geser((int *)MyTabC, succC);
    printf(" dalam main \n");
    printf("    Tabel integer \n");
    printtab((int *)MyTabInt, (MyType)0);
    printf("    Tabel character \n");
    printtab((char *)MyTabC, (MyType)1);
    printf("\n");

    printf("Geser dengan pred \n");
    geser((int *)MyTabInt, predI);
    geser((int *)MyTabC, predC);
    printf(" dalam main \n");
    printf("    Tabel integer \n");
    printtab((int *)MyTabInt, (MyType)0);
    printf("    Tabel character \n");
    printtab((char *)MyTabC, (MyType)1);
    printf("\n");

    return 0;
}

void succI(void *i){
    *(int*)i = *(int*)i + 1;
}

void predI(void *i){
    *(int*)i = *(int*)i - 1;
}

void succC(void *c){
    *(char*)c = *(char*)c + 1;
}

void predC(void *c){
    *(char*)c = *(char*)c - 1;
}

void geser(int *TT, void (*f)(void *)){
    int i;

    printf(" dalam geser \n");
    for(i = 0; i < N; i++){
        f(&TT[i]);
        printf(" %d ", TT[i]);
    }
    printf("\n");
}

void printtab(void *T, enum MyType Ty){
    int i;
    for (i = 0; i < N; i++){
        switch(Ty){
            case bulat:
                printf("%d ", *((int *)T + i));
                break;
            case karakter:
                printf("%c ", *((char *)T + i));
                break;
        }
    }
}