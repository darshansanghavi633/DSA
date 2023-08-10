#include <iostream>
using namespace std;
int main()
{
    int n, key, st, en;
    cout << "enter the lenght of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the sum of sub array which you want to find" << endl;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        st = i;
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum >= key)
            {
                en = j;
                if (sum == key)
                {
                    cout << st << " " << en << endl;
                }
            }
        }
    }

    return 0;
}