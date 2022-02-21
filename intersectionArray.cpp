#include<bits/stdc++.h>
using namespace std;

int intersect(int a[],int b[],int m,int n)
{
    int res=0;
    unordered_set<int> s(a,a+m);
    for(int i=0;i<n;i++)
    {
        if(s.find(b[i])!=s.end())
            {
                res++;
                s.erase(b[i]);
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
    cout<<"Intersection of array A and B gives : "<<intersect(a,b,m,n);
}