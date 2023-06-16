#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int k = i;
        for (int j = 1; j <= 5; j++)
        {
            if (j <= 5 - i)
            {
                cout << "  ";
            }
            else
            {
                cout << k << " ";
                k--;
            }
        }
        k = 2;
        for (int j = 2; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }

        cout << endl;
    }

    return 0;
}

//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5