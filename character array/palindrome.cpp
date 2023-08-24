#include <iostream>
using namespace std;
int main()
{
    int n;
    bool check = true;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = false;
        }
    }
    if (check)
    {
        cout << "The word is a palindrome" << endl;
    }
    else
    {
        cout << "The word is not a palindrome" << endl;
    }

    return 0;
}