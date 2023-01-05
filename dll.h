#ifndef dll_H_INCLUDED
#define dll_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
#define nil NULL


struct DataNasabahAsuransiBarang {
    int ID_Nasabah;
    string Nama_Barang;
    string Kode_Tipe_Asuransi;
    float Penghasilan_Nasabah;
};

typedef DataNasabahAsuransiBarang infotype;
typedef struct element *address;

struct element {
    infotype info;
    address prev;
    address next;
};

struct List {
    address first;
    address last;
};

void createList(List &L);
address createNewElement(infotype x);
infotype newInfotype(int ID_Nasabah, string Nama_Barang, string Kode_Tipe_Asuransi, float Penghasilan_Nasabah);
void insertFirst(List &L, address p);
void showData(List L);
void reverseList(List &L)

#endif // helpmi_H_INCLUDED
