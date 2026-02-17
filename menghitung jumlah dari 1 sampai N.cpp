#include <iostream>
using namespace std;

int main() {
    int N, jumlah = 0, i = 1;

    cout << "Masukkan nilai N: ";
    cin >> N;

    while (i <= N) {
        jumlah = jumlah + i;
        i = i + 1;
    }

    cout << "Jumlah = " << jumlah << endl;

    return 0;
}

