#include<bits/stdc++.h>

using namespace std;

void moveZeros(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
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
    moveZeros(arr,n);
    cout<<"Array after moving zeros -> ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<< " ";
}