#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cout << "Enter a number to generate a fibonacci:" << endl;
    cin >> n;
    fibonacci(n);
    return 0;
}