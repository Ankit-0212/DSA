#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
}

int main()
{
    int n,x;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"Enter the elements of array: \n";
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the value you want to search :";
    cin>>x;
    int index=search(arr,n,x);
    if(index==-1   )
    cout<<"Value not found";
    else
    cout<<"value found at position "<<index+1;
}