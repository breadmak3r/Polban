#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Struktur data Single Linked List
typedef char infotype[100];
typedef struct tElmtList *address;
typedef struct tElmtList 
{
    infotype info;
    address next;
} mhs;

// Struktur data array
typedef struct
{
    infotype kota;
    address next1;
} kt;

// Deklarasi variabel array
kt A[100];