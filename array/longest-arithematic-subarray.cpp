#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n, max = INT16_MIN, pd, count = 0;
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
        pd = arr[i] - arr[i - 1];
        for (int j = i; j < n; j++)
        {
            if (arr[j] - arr[j - 1] == pd)
            {
                sum = sum + arr[j];
                if (sum > max)
                {
                    max = sum;
                    count++;
                }
            }
        }
    }
    cout << "The number of elements of sub array is  " << count << endl;
    return 0;
}