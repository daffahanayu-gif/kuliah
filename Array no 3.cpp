#include <iostream>
using namespace std;

int main()
{
    const int UKURAN = 6;
    int sumber[UKURAN] = {50, 40, 30, 20, 10, 5};
    int tujuan[UKURAN];

    for (int k = 0; k < UKURAN; k++)
    {
        tujuan[k] = sumber[k];
    }

    cout << "Input (sumber): ";
    for (int k = 0; k < UKURAN; k++)
    {
        cout << sumber[k] << " ";
    }
    cout << endl;

    cout << "Output (tujuan setelah salin): ";
    for (int k = 0; k < UKURAN; k++)
    {
        cout << tujuan[k] << " ";
    }
    cout << endl;

    return 0;
}
