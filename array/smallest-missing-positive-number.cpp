#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the lenght of array" << endl;
    cin >> n;
    int arr[n], arr1[n];
    cout << "Enter the element of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr1[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            arr1[arr[i]] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == -1)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}