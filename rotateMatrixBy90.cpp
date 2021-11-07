#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows of square matrix :";
    cin >> n;

    int temp[n][n], arr[n][n];
    cout << "Enter the elements of array :\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[n - j - 1][i] = arr[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = temp[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}