#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{

    bool swapped;
    for (int i = 0; i < n; i++)
    {

        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
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
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}