#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key, i;
    cout << "Enter key to be searched: " << endl;
    cin >> key;
    for (i = 0; i < 5; i++)
    {
        if (key == arr[i])
        {
            cout << "Key found at index " << i << endl;
            break;
        }
    }
    if (i == 5)
    {
        cout << "No key found" << endl;
    }

    return 0;
}