#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter lenght of rows and columns of matrix" << endl;
    cin >> n >> m;
    int arr[n][m], brr[n][m], crr[n][m];
    cout << "Enter the matrix 1" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            crr[i][j] = 0;
        }
    }
    cout << "Enter the matrix 2" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> brr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            for (int j = 0; j < m; j++)
            {
                crr[i][k] = crr[i][k] + (arr[i][j] * brr[j][k]);
            }
        }
    }
    cout << "multiplied matrix is " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}