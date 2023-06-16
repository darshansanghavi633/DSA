#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= 5 - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= i - 1)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        for (int j = 2; j <= 6 - i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
