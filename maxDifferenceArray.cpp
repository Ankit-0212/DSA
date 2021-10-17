#include<bits/stdc++.h>
using namespace std;
void maxDiff(int arr[],int n)
{
    int diff=arr[1]-arr[0],minval=arr[0];
    for(int i=1;i<n;i++)
    {
        diff=max(diff,arr[i]-minval);
        minval=min(minval,arr[i]);


    }
    cout<<"maximum difference between elements from left to right is : "<<diff; 
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

    maxDiff(arr,n);
}