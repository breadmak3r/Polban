#include <stdlib.h>
#include <stdio.h>

#define info(P) (P)->info
#define next(P) (P)->next
#define Nil NULL

typedef int infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist
    {
        infotype info;
        address next;
    } Elmtlist;

address First, Last;
address Alokasi(int value){
    address newNode = (address) malloc(sizeof(Elmtlist));
    if(newNode == Nil){
        printf("Memmory allocation failed!\n");
        exit(1);
    }
    info(newNode) = value;
    next(newNode) = Nil;
    return newNode;
}

void insertAwal(int value){
    address newNode = Alokasi(value);
    newNode->next = First;
    First = newNode;
}

void insertAkhir(int value){
    address newNode = Alokasi(value);
    if(First == Nil){
        First = newNode;
        return;
    }
    address current = First;
    while(current->next != Nil){
        current = current->next;
    }
    current->next = newNode;
    Last = current;
}

void deleteAkhir(){
    temp = Last;
    
}

void showData(){
    address current = First;
    printf("===== LINKED LIST =====\n");
    while (current != Nil){
        printf("%d ", current->info);
        if (current->next != Nil){
            printf("----> ");
        } else{
            printf("----> NULL");
        }
        current = current->next;
    }
    printf("\n");
}

int main(){
    address P, Q, F;
    First = Nil;

    P = (address) malloc(sizeof(Elmtlist));
    info(P) = 10;
    next(P) = Nil;
    First = P;

    Q = (address) malloc(sizeof(Elmtlist));
    info(Q) = 20;
    next(Q) = Nil;
    next(Q) = First;
    First = Q;

    P = (address) malloc(sizeof(Elmtlist));
    info(P) = 30;
    next(P) = Nil;
    next(P) = First;
    First = P;

    insertAkhir(0);
    insertAwal(16);
    showData();

    return 0;
}