#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah jam pelajaran hari ini: ";
    cin >> n;
    cin.ignore(); // agar getline bisa digunakan

    string mapel[n];
    string guru[n];

    // Input data jadwal
    for(int i = 0; i < n; i++) {
        cout << "\nJam ke-" << i+1 << endl;

        cout << "Mata pelajaran : ";
        getline(cin, mapel[i]);

        cout << "Nama guru      : ";
        getline(cin, guru[i]);
    }

    // Menampilkan jadwal
    cout << "\n=== Jadwal Pelajaran Hari Ini ===\n";
    for(int i = 0; i < n; i++) {
        cout << "Jam " << i+1 << " : "
             << mapel[i] << " - " << guru[i] << endl;
    }

    return 0;
}
