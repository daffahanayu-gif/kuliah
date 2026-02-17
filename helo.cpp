#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Jumlah produk: ";
    cin >> n;

    string nama[n];
    int harga[n], stok[n];

    // Input data produk
    for(int i = 0; i < n; i++) {
        cout << "\nProduk ke-" << i+1 << endl;

        cout << "Nama  : ";
        cin >> nama[i];

        cout << "Harga : ";
        cin >> harga[i];

        cout << "Stok  : ";
        cin >> stok[i];
    }

    int totalNilai = 0;
    int minStok = stok[0];
    int indexMin = 0;

    cout << "\n=== Daftar Produk ===\n";

    // Proses perhitungan
    for(int i = 0; i < n; i++) {
        cout << nama[i] << " | Harga: " << harga[i]
             << " | Stok: " << stok[i] << endl;

        totalNilai += harga[i] * stok[i];

        if(stok[i] < minStok) {
            minStok = stok[i];
            indexMin = i;
        }
    }

    cout << "\nTotal nilai inventaris: " << totalNilai << endl;
    cout << "Produk dengan stok paling sedikit: " << nama[indexMin]
         << " (" << minStok << ")" << endl;

    return 0;
}
