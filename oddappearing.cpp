#include<bits/stdc++.h>
using namespace std;
int findOdd(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^arr[i];

    }
    return res;
}
int main()
{
    int arr[100],n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"The odd element is : "<<findOdd(arr,n);
    return 0;
}