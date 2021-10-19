#include<bits/stdc++.h>
using namespace std;

int maxOnes(int arr[],int n)
{
    int maxCount=0,curr=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            curr++;
            maxCount=max(maxCount,curr);
        }
        else{
            curr=0;
        }
    }
    return maxCount;
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : \n";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"maximum consecutive 1s are : "<<maxOnes(arr,n);
}