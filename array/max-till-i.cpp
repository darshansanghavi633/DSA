#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n, mx = INT16_MIN;
    cout << "Enter the length of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (mx < arr[i])
        {
            mx = arr[i];
        }
        cout << "For index " << i << " maximun is " << mx << endl;
    }
    return 0;
}