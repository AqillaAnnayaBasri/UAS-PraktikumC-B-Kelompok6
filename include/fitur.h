#ifndef FITUR_H
#define FITUR_H

// Struktur data untuk menyimpan detail transaksi keuangan
typedef struct {
    int id;
        char tanggal[15];
        char jenis[10]; // "Pemasukan" atau "Pengeluaran"
        double jumlah;
        char kategori[50];
} Transaksi;

// Prototipe fungsi utama
void tampilkanMenu();
void tambahTransaksi();
void lihatRiwayat();
void simpanKeFile();

#endif
