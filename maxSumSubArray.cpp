#include<bits/stdc++.h>

using namespace std;

int maxSumSubarray(int arr[],int n)
{
    int res=arr[0];
    int maxFind=arr[0];

    for(int i=1;i<n;i++)
    {
        maxFind=max(maxFind+arr[i],arr[i]);
        res=max(res,maxFind);
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"maximum sum of subarrays is : "<<maxSumSubarray(arr,n);
    
}