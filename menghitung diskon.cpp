#include <iostream>
using namespace std;

int main() {
    double total_belanja, diskon, total_bayar;

    cout << "Masukkan total belanja: ";
    cin >> total_belanja;

    if (total_belanja > 100) {
        diskon = 0.10 * total_belanja;
    } else {
        diskon = 0;
    }

    total_bayar = total_belanja - diskon;

    cout << "Total bayar setelah diskon: " << total_bayar << endl;

    return 0;
}

