#include <iostream>
#include <climits>
using namespace std;
int kadane(int arr[], int n)
{
    int currentsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum = currentsum + arr[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxsum = max(currentsum, maxsum);
    }
    return maxsum;
}
int main()
{
    int n;
    cout << "enter the length of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int wrapsum = 0, nonwrapsum = 0, total = 0;
    nonwrapsum = kadane(arr, n);
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = total + kadane(arr, n);
    cout << max(wrapsum, nonwrapsum);

    return 0;
}