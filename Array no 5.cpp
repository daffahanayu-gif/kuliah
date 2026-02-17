#include <iostream>
using namespace std;

int main()
{
    const int UKURAN_DATA = 7;
    int data[UKURAN_DATA] = {15, 30, 8, 45, 12, 50, 25};
    int nilaiMaksimal = data[0];

    for (int k = 1; k < UKURAN_DATA; k++)
    {
        if (data[k] > nilaiMaksimal)
        {
            nilaiMaksimal = data[k];
        }
    }

    cout << "Nilai terbesar dalam array adalah: " << nilaiMaksimal << endl;
    return 0;
}
