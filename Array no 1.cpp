#include <iostream>
using namespace std;

int main()
{
    int data[5] = {2, 4, 8, 16, 32};

    for (int i = 1; i < 5; i++)
    {
        data[i] = data[i] + data[i - 1];
    }

    data[0] = data[1] + data[4];

    for (int i = 0; i < 5; i++)
    {
        cout << "data[" << i << "] = " << data[i] << endl;
    }

    return 0;
}
