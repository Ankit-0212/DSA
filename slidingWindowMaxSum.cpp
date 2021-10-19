#include<bits/stdc++.h>

using namespace std;

int maxWindowSum(int arr[],int n,int k)
{
    int curr=0,maxsum;
    for(int i=0;i<k;i++)
        curr+=arr[i];
    maxsum=curr;

    for(int i=k;i<n;i++)
    {
        curr+=(arr[i]-arr[i-k]);
        maxsum=max(maxsum,curr);
    }
    return maxsum;
}

int main()
{
    int n,k;
    cout<<"Enter the size of array :-";
    cin>>n;
    cout<<"Enter the elements\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the size of subarray :-";
    cin>>k;
    cout<<"Maximum Sum of "<<k<<" consecutive elements in array is : "<<maxWindowSum(arr,n,k);
}