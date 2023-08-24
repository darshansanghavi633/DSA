#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin.ignore();
    cin.getline(arr, n);
    cin.ignore();
    int curlen = 0, maxlen = 0, i = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (curlen > maxlen)
            {
                maxlen = curlen;
            }
            curlen = 0;
        }
        else
        {
            curlen++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << maxlen << endl;
    return 0;
}