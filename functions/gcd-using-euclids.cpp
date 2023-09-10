#include <iostream>
using namespace std;
int euclids(int n1, int n2)
{
    if (n2 > n1 || (n1 - n2) == 0)
    {
        return (-1);
    }
    else
    {
        return (n1 - n2);
    }
}
int main()
{
    int n1, n2, temp = 0;
    cin >> n1 >> n2;
    while (temp >= 0)
    {
        temp = euclids(n1, n2);
        if (temp == -1)
        {
            cout << n1 << endl;
        }
        n1 = n2;
        n2 = temp;
    }
    return 0;
}