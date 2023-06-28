#include <iostream>
using namespace std;
void octalToDecimal(int n)
{
    int x = 1, ans = 0;
    while (n > 0)
    {
        int y = n % 10;
        ans = ans + x * y;
        x = x * 8;
        n = n / 10;
    }
    cout << ans << endl;
}
int main()
{
    int n;
    cout << "Enter a binary number to convert it into decimal" << endl;
    cin >> n;
    octalToDecimal(n);
    return 0;
}