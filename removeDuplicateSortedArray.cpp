#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main()
{ 
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array in sorted order : ";
    for ( int i = 0; i < n; i++)
        cin >> arr[i];
    n= removeDuplicates(arr, n);
    cout<<"Array after removing Duplicates -> ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
}