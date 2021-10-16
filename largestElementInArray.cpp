#include <bits/stdc++.h>

using namespace std;

int largest(int arr[], int n)
{
    int max, res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
            res = i;
    }
    max = arr[res];
    return max;
}

int main()

{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for ( int i = 0; i < n; i++)
        cin >> arr[i];

    cout<<"largest element in array is : "<<largest(arr,n);

        
}
