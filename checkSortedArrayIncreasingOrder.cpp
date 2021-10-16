#include<bits/stdc++.h>
using namespace std;

int checkSorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            return false;

        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array :\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if(checkSorted(arr,n))
        cout<<"Array is sorted";
    else
        cout<<"Array is unsorted";
}