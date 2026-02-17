#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_KARYAWAN = 100;

struct Karyawan {
    string nama;
    string bagian;
    int gaji;
    string status;
};

Karyawan dataKaryawan[MAX_KARYAWAN];
int jumlah = 0;

void tambah() {
    cin.ignore();
    cout << "\nNama   : "; getline(cin, dataKaryawan[jumlah].nama);
    cout << "Bagian : "; getline(cin, dataKaryawan[jumlah].bagian);
    cout << "Gaji   : "; cin >> dataKaryawan[jumlah].gaji;
    cin.ignore();
    dataKaryawan[jumlah].status = "Aktif";

    jumlah++;
    cout << "Karyawan ditambahkan!\n";
}

void tampil() {
    if (jumlah == 0) { cout << "\nBelum ada data.\n"; return; }

    cout << "\n--- DATA KARYAWAN ---\n";
    for (int i = 0; i < jumlah; i++) {
        cout << i+1 << ". "
             << dataKaryawan[i].nama << " | "
             << dataKaryawan[i].bagian << " | "
             << dataKaryawan[i].gaji << " | "
             << dataKaryawan[i].status << endl;
    }
}

void cari() {
    cin.ignore();
    string key;
    cout << "\nCari nama: ";
    getline(cin, key);

    for (int i = 0; i < jumlah; i++) {
        if (dataKaryawan[i].nama == key) {
            cout << "\nDitemukan!\n";
            cout << dataKaryawan[i].nama << " | "
                 << dataKaryawan[i].bagian << " | "
                 << dataKaryawan[i].gaji << " | "
                 << dataKaryawan[i].status << endl;
            return;
        }
    }
    cout << "Tidak ditemukan.\n";
}

void hapusData() {
    int index;
    cout << "\nNomor karyawan yang ingin dihapus: ";
    cin >> index;
    index--;

    if (index < 0 || index >= jumlah) {
        cout << "Index salah.\n";
        return;
    }

    for (int i = index; i < jumlah - 1; i++)
        dataKaryawan[i] = dataKaryawan[i+1];

    jumlah--;
    cout << "Data dihapus!\n";
}

void save() {
    ofstream file("karyawan.txt");
    for (int i = 0; i < jumlah; i++) {
        file << dataKaryawan[i].nama << endl;
        file << dataKaryawan[i].bagian << endl;
        file << dataKaryawan[i].gaji << endl;
        file << dataKaryawan[i].status << endl;
    }
    file.close();
    cout << "Disimpan!\n";
}

void load() {
    ifstream file("karyawan.txt");
    if (!file.is_open()) return;

    jumlah = 0;
    while (true) {
        Karyawan k;
        if (!getline(file, k.nama)) break;
        if (!getline(file, k.bagian)) break;
        if (!(file >> k.gaji)) break;
        file.ignore();
        getline(file, k.status);

        dataKaryawan[jumlah] = k;
        jumlah++;

        if (jumlah >= MAX_KARYAWAN) break;
    }
    file.close();
}

int main() {
    int menu;
    load();

    do {
        cout << "\n=== MENU DATA KARYAWAN ===\n";
        cout << "1. Tambah Data\n";
        cout << "2. Tampilkan Semua\n";
        cout << "3. Cari Karyawan\n";
        cout << "4. Hapus Data\n";
        cout << "5. Simpan ke File\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> menu;

        switch(menu) {
            case 1: tambah(); break;
            case 2: tampil(); break;
            case 3: cari(); break;
            case 4: hapusData(); break;
            case 5: save(); break;
            case 0: cout << "Keluar...\n"; break;
            default: cout << "Pilihan salah!\n";
        }
    } while (menu != 0);

    return 0;
}

