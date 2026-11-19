#include <stdio.h>
#include <string.h>
#include "fitur.h"

#define FILE_KEUANGAN "data/keuangan.bin"

static void bersihkanBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

static void hapusNewline(char *teks) {
    teks[strcspn(teks, "\n")] = '\0';
}

void tampilkanMenu(void) {
    printf("\n=== APLIKASI PENCATAT KEUANGAN PRIBADI ===\n");
    printf("1. Tambah Transaksi\n");
    printf("2. Lihat Riwayat Keuangan\n");
    printf("3. Keluar\n");
    printf("Pilih menu (1-3): ");
}

void tambahTransaksi(void) {
    Transaksi t;
    FILE *fp = fopen(FILE_KEUANGAN, "ab");
    if (fp == NULL) {
        printf("\nGagal membuka file %s\n", FILE_KEUANGAN);
        return;
    }

    printf("\n--- Tambah Transaksi ---\n");
    printf("ID / Pengenal: ");
    scanf("%d", &t.pengenal);
    bersihkanBuffer();

    printf("Tanggal (DD-MM-YYYY): ");
    fgets(t.tanggal, sizeof(t.tanggal), stdin);
    hapusNewline(t.tanggal);

    printf("Jenis (Masuk/Keluar): ");
    fgets(t.jenis, sizeof(t.jenis), stdin);
    hapusNewline(t.jenis);

    printf("Kategori: ");
    fgets(t.kategori, sizeof(t.kategori), stdin);
    hapusNewline(t.kategori);

    printf("Jumlah (Rp): ");
    scanf("%lf", &t.jumlah);
    bersihkanBuffer();

    fwrite(&t, sizeof(Transaksi), 1, fp);
    fclose(fp);

    printf("Transaksi berhasil disimpan!\n");
}

void lihatRiwayat(void) {
    Transaksi t;
    FILE *fp = fopen(FILE_KEUANGAN, "rb");
    if (fp == NULL) {
        printf("\nBelum ada data riwayat transaksi.\n");
        return;
    }

    printf("\n--- Riwayat Keuangan ---\n");
    int adaData = 0;
    while (fread(&t, sizeof(Transaksi), 1, fp) == 1) {
        adaData = 1;
        printf("ID: %d | Tanggal: %s | Jenis: %s | Kategori: %s | Jumlah: %.2f\n",
               t.pengenal, t.tanggal, t.jenis, t.kategori, t.jumlah);
    }

    if (!adaData) {
        printf("Data transaksi masih kosong.\n");
    }

    fclose(fp);
}
