// 123
// 456
// 789
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns : ";
    cin >> m >> n;

    int arr[m][n];
    cout << "Enter the elements of array :\n ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    if (m == 1)
    {
        for (int i = 0; i < n; i++)
            cout << arr[0][i] << " ";
    }
    else if (n == 1)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i][0] << " ";
    }
    else{
        for(int i=0;i<n;i++)
            cout<<arr[0][i]<<" ";

        for(int i=1;i<m;i++)
            cout<<arr[i][n-1]<<" ";
        for(int i=n-1;i>=0;i--)
            cout<<arr[m-1][i]<<" ";
        for(int i=m-2;i>=1;i--)
            cout<<arr[i][0]<<" ";
    }
}
