#include <iostream>
using namespace std;
int divisible(int n)
{
    int num = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (i % n == 0)
        {
            num++;
        }
    }
    return num;
}
int main()
{
    int n, m;
    int n1, n2, n3;
    cout << "Enter two number: " << endl;
    cin >> n >> m;
    n1 = divisible(n);
    n2 = divisible(m);
    n3 = n * m;
    n3 = divisible(n3);
    cout << "The number divisible y 5 and 7 are " << n1 + n2 - n3 << endl;

    return 0;
}