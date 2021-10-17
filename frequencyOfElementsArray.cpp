#include <bits/stdc++.h>

using namespace std;

void printFreq(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        /* code */
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " -> " << freq<<"\n";
        i++;
        freq=1;
    }

    if(n==1||arr[n-1]!=arr[n-2])
        cout<<arr[n-1]<<" -> "<<1;
}

int main()
{
    int n, x;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout<<"Frequencies of elements in the sorted aary are : \n";
    printFreq(arr, n);
}