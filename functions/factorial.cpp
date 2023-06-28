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

    int n;
    cout << "Enter a number to find it's factprial value" << endl;
    cin >> n;
    cout << factorial(n);

    return 0;
}