#include<bits/stdc++.h>
using namespace std;

//number of common elements in an array

int intersection(int a[],int b[],int m, int n )
{
    int res=0;
    for(int i=0;i<m;i++)
    {
        bool flag=false;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                flag=true;
                break;

            }

        }
        if(flag==true)
            continue;
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                res++;
                break;
            }
        }
    }
    return res;
}

int main()
{
    int n,m;
    cout<<"Enter the size of array A and B : ";
    cin>>m>>n;
    int a[m],b[n];
    cout<<"Enter 1st array : "<<endl;
    for(int i=0;i<m;i++)
        cin>>a[i];
    cout<<"Enter 2nd array : "<<endl;
    for(int i=0;i<n;i++)
        cin>>b[i];
    cout<<"Intersection of array A and B gives : "<<intersection(a,b,m,n);
}