#include <iostream>
using namespace std;
void prime(int n1)
{
    int i;
    for (i = 2; i < n1; i++)
    {
        if (n1 % i == 0)
        {
            break;
        }
    }
    if (i == n1)
    {
        cout << i << " " << endl;
    }
}
int main()
{
    int n1, n2;
    cout << "Enter Range between which you want to find prime numbers" << endl;
    cin >> n1 >> n2;
    for (int i = n1 + 1; i < n2; i++)
    {
        prime(i);
    }
    return 0;
}