#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the lenght of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            cout << "The sum of sub array is" << sum << endl;
        }
    }

    return 0;
}