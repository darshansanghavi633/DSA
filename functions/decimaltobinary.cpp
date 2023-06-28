#include <iostream>
using namespace std;
int decimalToBinary(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;
    while (x > 0)
    {
        int lastDigit = n / x;
        cout << "lastdigit = " << lastDigit << endl;
        n -= lastDigit * x;
        cout << "n = " << n << endl;
        x /= 2;
        cout << "x = " << x << endl;
        ans = ans * 10 + lastDigit;
        cout << "ans = " << ans << endl;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a decimal number to convert to binary format" << endl;
    cin >> n;
    cout << decimalToBinary(n);
    return 0;
}