#include <iostream>
#include <queue>
#include <limits>
using namespace std;

struct Antrian {
    string nama;
    int nim;
    string kelas;
    string keperluan;
    string dosen;
};

int main() {
    queue<Antrian> antrian;
    int pilihan;
    int totalDilayani = 0;

    do {
        cout << "\n=== SISTEM ANTRIAN BIMBINGAN ===\n";
        cout << "1. Masukkan Antrian\n";
        cout << "2. Layani Antrian\n";
        cout << "3. Lihat Daftar Antrian\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";

        if (!(cin >> pilihan)) {
            cout << "Input harus berupa angka!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (pilihan < 1 || pilihan > 4) {
            cout << "Pilihan hanya 1-4!\n";
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (pilihan) {

            case 1: {
                Antrian data;

                cout << "\n--- Masukkan Data ---\n";

                cout << "Nama  : ";
                getline(cin, data.nama);

                cout << "NIM   : ";
                cin >> data.nim;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Kelas : ";
                getline(cin, data.kelas);

                int pilih;
                cout << "\nPilih Keperluan:\n";
                cout << "1. Bimbingan\n";
                cout << "2. Konsultasi\n";
                cout << "3. Revisi\n";
                cout << "4. Lainnya\n";
                cout << "Pilihan: ";

                if (!(cin >> pilih)) {
                    cout << "Input harus angka!\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                if (pilih == 1) data.keperluan = "Bimbingan";
                else if (pilih == 2) data.keperluan = "Konsultasi";
                else if (pilih == 3) data.keperluan = "Revisi";
                else {
                    cout << "Masukkan keperluan lain: ";
                    getline(cin, data.keperluan);
                }

                cout << "Dosen Tujuan: ";
                getline(cin, data.dosen);

                antrian.push(data);

                cout << "Berhasil masuk antrian!\n";
                break;
            }

            case 2:
                if (antrian.empty()) {
                    cout << "Antrian kosong!\n";
                } else {
                    cout << "\nMelayani:\n";
                    cout << "Nama      : " << antrian.front().nama << endl;
                    cout << "NIM       : " << antrian.front().nim << endl;
                    cout << "Kelas     : " << antrian.front().kelas << endl;
                    cout << "Keperluan : " << antrian.front().keperluan << endl;
                    cout << "Dosen     : " << antrian.front().dosen << endl;

                    antrian.pop();
                    totalDilayani++;
                }
                break;

            case 3:
                cout << "\nJumlah antrian: " << antrian.size() << endl;

                if (antrian.empty()) {
                    cout << "Antrian kosong!\n";
                } else {
                    cout << "\n=== DAFTAR ANTRIAN ===\n";
                    cout << "No | Nama | NIM | Kelas | Keperluan | Dosen\n";
                    cout << "------------------------------------------------------\n";

                    queue<Antrian> temp = antrian;
                    int no = 1;

                    while (!temp.empty()) {
                        cout << no << ". "
                             << temp.front().nama << " | "
                             << temp.front().nim << " | "
                             << temp.front().kelas << " | "
                             << temp.front().keperluan << " | "
                             << temp.front().dosen << endl;

                        temp.pop();
                        no++;
                    }
                }
                break;

            case 4:
                cout << "Program selesai...\n";
                break;
        }

    } while (pilihan != 4);

    cout << "\n=== HASIL AKHIR ===\n";
    cout << "Total dilayani: " << totalDilayani << endl;
    cout << "Sisa antrian: " << antrian.size() << endl;

    if (antrian.empty()) {
        cout << "Semua antrian sudah selesai.\n";
    } else {
        cout << "Masih ada antrian.\n";
    }

    return 0;
}