#include <iostream>
using namespace std;

int main() {
    int arr[5] = {11, 22, 33, 44, 55};
    int *ptr;

    ptr = arr;

    cout << "=== Mengakses array menggunakan pointer ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemen ke-" << i << " = " << *(ptr + i) << endl;
    }

    cout << "\n=== Mengubah Nilai array melalui pointer ===" << endl;
    *(ptr + 2) = 99;

    for (int i = 0; i < 5; i++) {
        cout << "Elemen ke-" << i << " - " << arr[i] << endl;
    }

    return 0;
}
