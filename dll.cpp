#include "dll.h"
#include <iostream>

void createList(List &L){
    first(L) = nil;
    last(L) = nil;
}

address createNewElement(infotype x){
    address p = new element;
    info(p) = x;
    next(p) = nil;
    prev(p) = nil;
    return p;
}

infotype newInfotype(int ID_Nasabah, string Nama_Barang, string Kode_Tipe_Asuransi, float Penghasilan_Nasabah){
    DataNasabahAsuransiBarang Data;
    Data.ID_Nasabah = ID_Nasabah;
    Data.Nama_Barang = Nama_Barang;
    Data.Kode_Tipe_Asuransi = Kode_Tipe_Asuransi;
    Data.Penghasilan_Nasabah = Penghasilan_Nasabah;
}
void insertFirst(List &L, address p){
    if(first(L) == nil && last(L) ==nil){
        first(L) = p;
        last(L) = p;
    }else{
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
    }
}
void showData(List L);
void reverseList(List &L)
