#include<bits/stdc++.h>
using namespace std;
int inPair(int arr[],int n,int sum)
{
    unordered_set<int> h;
    for (int i=0; i<n;i++)
    {
        if(h.find(sum-arr[i])!=h.end())
            return 1;

        else
            h.insert(arr[i]);
    }
    return 0;
}
int main()
{
    int n,sum;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    cout<<"Enter the sum : ";
    cin>>sum;
    cout<<inPair(arr,n,sum);
}