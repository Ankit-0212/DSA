#include<bits/stdc++.h>
using namespace std;

int SumSubsets(int arr[],int n,int sum)
{
    if(n==0)
    {
        return (sum==0) ? 1: 0;

    }
    return SumSubsets(arr,n-1,sum)+SumSubsets(arr,n-1,sum-arr[n-1]);
}
int main()
{
    int n,arr[10],sum=0;
    cout<<"Enter the size of set :";
    cin>>n;
    cout<<"Enter elements of set :\n";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<"Enter the value of sum :";
    cin>>sum;
    cout<<"The number of subsets with given sum is : "<<SumSubsets(arr,n,sum);
    return 0;

    
}