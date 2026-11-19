#include <stdio.h>
#include "fitur.h"

static void bersihkanBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(void) {
    int pilihan;

    do {
        tampilkanMenu();
        if (scanf("%d", &pilihan) != 1) {
            printf("\nInput tidak valid! Masukkan angka 1-3.\n");
            bersihkanBuffer();
            pilihan = 0;
            continue;
        }
        bersihkanBuffer();

        switch (pilihan) {
            case 1:
                tambahTransaksi();
                break;
            case 2:
                lihatRiwayat();
                break;
            case 3:
                printf("\nKeluar dari program. Sampai jumpa!\n");
                break;
            default:
                printf("\nPilihan tidak tersedia. Silakan pilih 1-3.\n");
                break;
        }
    } while (pilihan != 3);

    return 0;
}
