#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int UKURAN = 4; 
    int tabelTambah[UKURAN][UKURAN];
    int tabelKali[UKURAN][UKURAN];

    cout << "Tabel Penjumlahan:\n";
    for (int baris = 0; baris < UKURAN; baris++) {
        cout << setw(2) << baris << "  ";
        for (int kolom = 0; kolom < UKURAN; kolom++) {
            tabelTambah[baris][kolom] = baris + kolom;
            cout << setw(3) << tabelTambah[baris][kolom];
        }
        cout << endl;
    }

    cout << "\nTabel Perkalian:\n";
    for (int baris = 0; baris < UKURAN; baris++) {
        cout << setw(2) << baris << "  ";
        for (int kolom = 0; kolom < UKURAN; kolom++) {
            tabelKali[baris][kolom] = baris * kolom;
            cout << setw(3) << tabelKali[baris][kolom];
        }
        cout << endl;
    }

    return 0;
}

