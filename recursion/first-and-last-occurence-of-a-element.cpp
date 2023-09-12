#include <iostream>
using namespace std;
void Checker(int arr[], int n, int i)
{
    int j;
    if (i < n)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "The element " << arr[i] << " has it's first occurence at " << i << " and has it's last occurence at  " << j << endl;
            }
        }
        if (j == n)
        {
            i++;
            Checker(arr, n, i);
        }
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
    Checker(arr, n, 0);
    return 0;
}