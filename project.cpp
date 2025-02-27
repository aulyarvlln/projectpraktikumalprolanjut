#include <iostream>
#include <string>
using namespace std;

struct Buku{
    string judul;
    string pengarang;
    bool tersedia; //true jika tersedia, false jika dipinjam
};

void tampilkanBuku(Buku buku[], int totalBuku){
    cout << "\nBerikut adalah Daftar Buku..." << endl;
    for (int i = 0; i<totalBuku; i++){
        cout << "Buku ke-" << i+1 << " : " << buku[i].judul << " oleh " << buku[i].pengarang << " - Status : " << (buku[i].tersedia ? "Tersedia" : "Dipinjam") << endl;
    }
}

void tampilkanMenu(){
    cout << "\n+===================================+" << endl;
    cout << "+========= Selamat Datang ==========+" << endl;
    cout << "+======= Sistem Perpustakaan =======+" << endl;
    cout << "+ 1. Tampilkan Daftar Buku          +" << endl;
    cout << "+ 2. Pinjam Buku                    +" << endl;
    cout << "+ 3. Kembalikan Buku                +" << endl;
    cout << "+ 4. Tampilkan Daftar Peminjaman    +" << endl;
    cout << "+ 5. Keluar                         +" << endl;
    cout << "+===================================+" << endl;
}

int main(){
    Buku buku[10] = {
        {"Laskar Pelangi", "Andrea Hirata", true},
        {"Gadis Kretek", "Ratih Kumala", true},
        {"Bumi Manusia", "Pramoedya Ananta Toer", true},
        {"Bumi", "Tere Liye", true},
        {"Dilan 1990", "Pidi Baiq", true},
        {"Daun yang Jatuh Tak Pernah Membenci Angin", "Tere Liye", true},
        {"Laut Bercerita","Leila S.Chudori", true},
        {"Romeo & Juliet", "Shakespeare", true},
        {"Cantik Itu Luka", "Eka Kurniawan", true},
        {"Tenggelamnya Kapal Van Der Wijck", "Abdul Malik Karim Amrullah (Buya Hamka)", true},
    };
    
    int totalBuku = 10;
    int pilihan;
    string cari, judulBuku;

    do{
        tampilkanMenu();
        cout << "Pilih Menu : "; cin >> pilihan;

        switch (pilihan){
        case 1:
            tampilkanBuku(buku, totalBuku);
            break;
        
        case 2:
        
        case 5:
            cout << "Terima kasih telah menggunakan sistem perpustakaan!" << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 5);
    return 0;
}