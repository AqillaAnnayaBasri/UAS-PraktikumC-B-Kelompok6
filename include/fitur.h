#ifndef FITUR_H
#define FITUR_H

typedef struct {
    int pengenal;
        char tanggal[15];
        char jenis[10]; 
        double jumlah;
        char kategori[50];
} Transaksi;

void tampilkanMenu();
void tambahTransaksi();
void lihatRiwayat();
void simpanKeFile();

#endif
