#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows and column" << endl;
    cin >> n >> m;
    cout << "Enter the elements of matrix" << endl;
    int arr[n][m];
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    while (col_start <= col_end && row_start <= row_end)
    {
        for (int j = col_start; j <= col_end; j++)
        {
            cout << arr[row_start][j] << " ";
        }
        row_start++;
        for (int j = row_start; j <= row_end; j++)
        {
            cout << arr[j][col_end] << " ";
        }
        col_end--;
        for (int j = col_end; j >= col_start; j--)
        {
            cout << arr[row_end][j] << " ";
        }
        row_end--;
        for (int j = row_end; j >= row_start; j--)
        {
            cout << arr[j][col_start] << " ";
        }
        col_start++;
    }

    return 0;
}