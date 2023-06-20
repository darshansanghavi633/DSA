#include <iostream>
using namespace std;

int main()
{
    int n, r, sum = 0;
    cout << "Enter the number which you want to reverse:" << endl;
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}