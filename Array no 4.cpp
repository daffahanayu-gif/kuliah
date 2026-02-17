#include <iostream>
using namespace std;

int main()
{
    const int UKURAN = 5;
    int daftarAngka[UKURAN] = {10, 5, 20, 15, 30};
    double total = 0;

    for (int i = 0; i < UKURAN; i++)
    {
        total = total + daftarAngka[i];
    }

    cout << "Input (daftarAngka): ";
    for (int i = 0; i < UKURAN; i++)
    {
        cout << daftarAngka[i] << " ";
    }
    cout << endl;

    cout << "Output (total penjumlahan): " << total << endl;

    return 0;
}
