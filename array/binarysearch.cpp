#include <iostream>
using namespace std;
void binarySearch(int key, int low, int high, int arr[])
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr[mid])
        {
            cout << "Key found at index " << mid;
            break;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (low > high)
    {
        cout << "Key not found" << endl;
    }
}
int main()
{
    int key, arr[5] = {1, 2, 3, 4, 5};
    cout << "Enter key to be searched: " << endl;
    cin >> key;
    binarySearch(key, 0, 4, arr);
    return 0;
}