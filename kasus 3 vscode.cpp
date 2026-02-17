#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah kontak: ";
    cin >> n;
    cin.ignore(); // supaya getline bisa dipakai

    string nama[n];
    string nomor[n];

    // Input data kontak
    for(int i = 0; i < n; i++) {
        cout << "\nKontak ke-" << i+1 << endl;

        cout << "Nama  : ";
        getline(cin, nama[i]);

        cout << "Nomor : ";
        getline(cin, nomor[i]);
    }

    // Tampilkan semua kontak
    cout << "\n=== Daftar Kontak ===\n";
    for(int i = 0; i < n; i++) {
        cout << nama[i] << " - " << nomor[i] << endl;
    }

    // Pencarian kontak
    string cariNama;
    cout << "\nMasukkan nama yang ingin dicari: ";
    getline(cin, cariNama);

    bool ketemu = false;

    for(int i = 0; i < n; i++) {
        if(nama[i] == cariNama) {
            cout << "Nomor ditemukan: " << nomor[i] << endl;
            ketemu = true;
            break;
        }
    }

    if(!ketemu) {
        cout << "Data tidak ditemukan." << endl;
    }

    return 0;
}