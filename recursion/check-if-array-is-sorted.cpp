#include <iostream>
using namespace std;
bool Checker(int arr[], int i, int n)
{
    if (i == n)
    {
        return true;
    }
    else if (arr[i] < arr[i + 1])
    {
        return Checker(arr, i + 1, n);
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (Checker(arr, 0, n))
    {
        cout << "The array is sorted" << endl;
    }
    else
    {
        cout << "The array is not sorted" << endl;
    }
    return 0;
}