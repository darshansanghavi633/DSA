#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int k = 1;
        for (int j = 1; j <= 5; j++)
        {
            if (j <= 5 - i)
            {
                cout << "  ";
            }
            else
            {
                cout << k << "  ";
                k++;
            }
        }
        cout << endl;
    }

    return 0;
}

//         1
//       1  2
//     1  2  3
//   1  2  3  4
// 1  2  3  4  5
