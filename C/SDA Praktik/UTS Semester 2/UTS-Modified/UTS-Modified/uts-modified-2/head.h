#ifndef KOTAMHS_H
#define KOTAMHS_H

typedef char infotype[100];
typedef struct tElmtList *address;
typedef struct tElmtList {
    infotype info;
    address next;
    address prev;
} mhs;

typedef struct {
    infotype kota;
    struct tElmtList *next1;
    struct tElmtList *next2;
} kt;

extern kt A[100];

// Prototipe fungsi-fungsi ADT
void entry();
void deleteKota(char kota[]);
void deleteNama(char nama[]);
void tampilPerKota(char kota[]);
void tampilSemua();
void jumlahPerKota(char kota[]);
void totalJumlahKota();
void totalJumlahNama();
void cekPalindrom(address First);

#endif
