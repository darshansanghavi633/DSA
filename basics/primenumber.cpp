#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter a number to check if it's prime or not." << endl;
    cin >> n;
    if (n == 1 || n == 0)
    {
        cout << n << " is not prime neither composite numbers" << endl;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i == n)
        {
            cout << "it is prime number" << endl;
        }
        else
        {
            cout << "it is not a prime number" << endl;
        }
    }

    return 0;
}