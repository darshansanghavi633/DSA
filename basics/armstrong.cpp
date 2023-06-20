#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, temp;
    cout << "Enter the number to check if it's armstrong or not : " << endl;
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "It is an Armstrong number";
    }
    else
    {
        cout << "It is not an Armstrong number";
    }
    return 0;
}