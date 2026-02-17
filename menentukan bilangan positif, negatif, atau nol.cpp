#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    if (bilangan == 0) {
        cout << "Bilangan adalah Nol" << endl;
    } else {
        if (bilangan > 0) {
            cout << "Bilangan adalah Positif" << endl;
        } else {
            cout << "Bilangan adalah Negatif" << endl;
        }
    }

    return 0;
}

