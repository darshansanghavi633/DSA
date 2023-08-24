#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter number of rows and column of matrix" << endl;
    cin >> n >> m;
    int arr[n][m];
    cout << "enter the matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int r = 0, c = m - 1, target;
    cout << "Enter the key which is to be searched" << endl;
    cin >> target;
    bool found = false;
    while (c >= 0 && r < n)
    {
        if (arr[r][c] == target)
        {
            found = true;
        }
        if (arr[r][c] < target)
        {
            r++;
        }
        else
        {
            c--;
        }
    }

    if (found)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "No element found" << endl;
    }
    return 0;
}