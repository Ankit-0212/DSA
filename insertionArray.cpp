#include<bits/stdc++.h>
using namespace std;
int MAX=20;

int insertion(int arr[],int n,int x,int pos)
{
    int index=pos-1;
    if(n==MAX)
    {
        return -1;
    }

    for(int i=n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[index]=x;
    return n+1;

}

int main()
{
    int n,x,pos;

    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[MAX];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter the value you want to insert : ";
    cin>>x;
    cout<<"Enter the position : ";
    cin>>pos;
    n=insertion(arr,n,x,pos);

    if(n==-1)
    {
        cout<<"Insertion not possible...";
    }
    else{
        cout<<"Array after insertion -> ";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<' ';
    }
}