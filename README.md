# UAS-PraktikumC-B-Kelompok6
Laporan proyek UAS Praktikum Pemrograman C 
Aplikasi Pencatat Keuangan Pribadi 
Kelas B - Kelompok 6

Anggota Kelompok :
1. Muhammad Alfath Ramadhan - 260810701100040
2. Aqilla Annaya Basri - 260810701100107
3. Cut Farrum Hidayati - 260810701100086
4. Luqna Humaira - 260810701100061
5. Laura Salsabila - 260810701100027

#1. pendahuluan 
    program ini adalah aplikasi pencatat keuangan pribadi berbasis terminal, dibuat dengan bahasa C. Data transaksi disimpan di 
    file binary agar tidak hilang saat program ditutup, dan kode dibagi ke beberapa file(modular) agar rapi.

#2. fitur 
    1. Tambah Transaksi : mengisi ID, Tanggal jenis (masuk/keluar), kategori dan jumlah uang, lalu disimpan ke file.
    2. Lihat Riwayat Keuangan : menampilkan semua transaksi yang tersimpan
    3. Keluar : menghentikan program 

#3. Penjelasan Kode 
    Fitur.h : berisi struct Transaksi (pengenal id,tanggal,jenis,jumlah,kategori) dan daftar fungsi(prototipe)
    fitur.c : berisi isi fungsi. fungsi tambahTransaksi membuka file dengan mode "ab"(tambah di akhir file) lalu menyimpan data
    dengan fwrite. fungsi lihatRiwayat membuka file dengan mode"rb"(baca saja) lalu membaca data satu per satu dengan ftead. ada
    dua fungsi bantu: bersihkanBuffer (membuang sisa Enter) dan hapusNewline (menghapus tanda Enter di akhir teks)
    main.c : berisi perulangan do-while yang menampilkan menu terus-menerus sampai pengguna memilih 3. pilihan diproses dengan
    switch, dan input yang bukan angka ditolak dengan pesan "input tidak valid"

#4. Cara Menjalankan 
    kompilasi dari folder utama dengan perintah : gcc src/main.c src/fitur.c -linclude -o program.
    lalu jalankan : ./program (di windowsprogram.exe). 
    pastikan folder data sudah ada 

#5. Contoh Hasil
    setelah satu transaksi disimpan,
    menu 2 menampilkan : ID 1| tanggal : 23-11-2026| 
    jenis : masuk| kategori : Traktir mujib| jumlah : 10000.00

#6. Kesimpulan 
    Program berhasil mencatat dan menampilkan transaksi keuangan. Struct membuat data rapi, file binary membuat data tersimpan 
    permanen, dan pembagian file membuat kode mudah dikembangkan.
    
    Saran : tambah fitur hitung salso, cari, ubah, dan hapus transaksi 
