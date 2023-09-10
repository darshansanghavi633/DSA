#include <iostream>
using namespace std;
int powerRaised(int n, int p)
{
    if (p == 1)
    {
        return n;
    }
    return n * powerRaised(n, p - 1);
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << powerRaised(n, p) << endl;
    return 0;
}