#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int min_ind = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }

        swap(arr[i], arr[min_ind]);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array : \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}