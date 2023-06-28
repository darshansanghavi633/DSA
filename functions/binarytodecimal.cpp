#include <iostream>
using namespace std;
void binaryToDecimal(int n)
{
    int x = 1, ans = 0;
    while (n > 0)
    {
        int y = n % 10;
        ans = ans + x * y;
        x = x * 2;
        n = n / 10;
    }
    cout << ans << endl;
}
int main()
{
    int n;
    cout << "Enter a binary number to convert it into decimal" << endl;
    cin >> n;
    binaryToDecimal(n);

    return 0;
}