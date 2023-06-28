#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 0;
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    for (int i = n; i >= 1; i--)
    {
        fact = n * factorial(n - 1);
    }
    return fact;
}
int ncr(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1