#include <iostream>
using namespace std;

int main()
{
    const int UKURAN = 4;
    int nilai[UKURAN] = {70, 80, 90, 60};
    int jumlah = 0;
    double rataRata = 0;

    for (int i = 0; i < UKURAN; i++)
    {
        jumlah = jumlah + nilai[i];
    }

    rataRata = static_cast<double>(jumlah) / UKURAN;
    
    cout << "Jumlah total nilai: " << jumlah << endl;
    cout << "Nilai rata-rata: " << rataRata << endl;
    
    return 0;
}
