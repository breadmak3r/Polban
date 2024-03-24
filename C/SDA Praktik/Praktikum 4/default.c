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

int main(){
    address First;
    address P, Q;

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

    printf("%d \n", info(next(next(First))));

    return 0;
}
