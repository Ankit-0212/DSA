#include <bits/stdc++.h>
using namespace std;

int deleteArr(int arr[], int n, int x)
{
    int i;

    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    if (i == n)
        return n;

    for (int j = i; j < n - 1; j++)
        arr[j] = arr[j + 1];

    return n - 1;
}

int main()
{

    int n, x;

    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the value you want to delete : ";
    cin >> x;

    n = deleteArr(arr, n, x);
    cout << "Array After Deletion : -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}