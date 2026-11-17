#ifndef FITUR_H
#define FITUR_H

#include <stdio.h>

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
void simpanFile();

int main() {
    int pilihan;

    do {
        printf("\n=== APLIKASI KEUANGAN ===\n");
        printf("1. Tambah Transaksi\n");
        printf("2. Lihat Riwayat\n");
        printf("3. Keluar\n");
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambahTransaksi();
                break;
            case 2:
                lihatRiwayat();
                break;
            case 3:
                printf("Terima kasih telah menggunakan aplikasi ini!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 3);

    return 0;
}


void tambahTransaksi() {
    printf("\n[Fitur tambah transaksi belum diimplementasikan]\n");
}

void lihatRiwayat() {
    printf("\n[Fitur lihat riwayat belum diimplementasikan]\n");
}

void simpanFile() {}
   
#endif
