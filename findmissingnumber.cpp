#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100],res=0;
    cout<<"Enter size of array  : ";
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    int size=n-1;
    for(int i=0;i<size;i++)
    cin>>arr[i];
    int miss=0;
    for(int i=1;i<=n;i++)
    {
        res= res ^ i;
        
    }
    for(int i=0;i<size;i++)
    {
        miss=miss^arr[i];

    }

    cout<<"Missing number is :"<<(res^miss);
}