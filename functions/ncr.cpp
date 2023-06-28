#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 0;
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
int main()
{

    int n, r, ncr;
    cout << "Enter the value of n in nCr" << endl;
    cin >> n;
    cout << "Enter the value of r in nCr" << endl;
    cin >> r;
    ncr = (factorial(n) / (factorial(r) * factorial(n - r)));
    cout << ncr;
    return 0;
}