#include <iostream>
using namespace std;

int main()
{
    const int UKURAN_ARRAY = 4;
    int dataKu[UKURAN_ARRAY] = {100, 200, 300, 400};

    for (int j = 0; j < UKURAN_ARRAY; j++)
    {
        cout << dataKu[j] << " ";
    }

    return 0;
}
