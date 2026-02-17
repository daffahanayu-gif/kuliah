#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string prodi;
    string nim;
    int umur;
    float ipk;
};

int main () {
    int jumlah;
    cout << "Masukkan Jumlah Mahasiswa : ";
    cin >> jumlah;
    cin.ignore();

    Mahasiswa mhs[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "\n--- Mahasiswa " << i + 1 << " ---\n";
        cout << "Nama : ";
        getline(cin, mhs[i].nama);

        cout << "Prodi : ";
        cin >> mhs[i].prodi;

        cout << "NIM : ";
        cin >> mhs[i].nim;

        cout << "Umur : ";
        cin >> mhs[i].umur;

        cout << "IPK : ";
        cin >> mhs[i].ipk;
        cin.ignore();
    }

    cout << "\n\n === Data Mahasiswa ===\n";

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa" << i + 1 << "\n";
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Prodi : " << mhs[i].prodi << endl;
        cout << "NIM : " << mhs[i].nim << endl;
        cout << "Umur : " << mhs[i].umur << endl;
        cout << "IPK : " << mhs[i].ipk << endl;
    }

    return 0;
}

