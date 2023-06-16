#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int k = 1;
        for (int j = 1; j <= 6 - i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

    return 0;
}

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1