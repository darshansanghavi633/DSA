#include <iostream>
using namespace std;
void sumofnatural(int n)
{
    int sum = 0;
    sum = n * (n + 1) / 2;
    cout << sum << endl;
}
int main()
{
    int n;
    cout << "Enter the number to finds it's sum of N natural numbers: " << endl;
    cin >> n;
    sumofnatural(n);
    return 0;
}