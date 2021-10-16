#include<bits/stdc++.h>
using namespace std;

bool checkKbit(int n,int k)
{
    if(n&(1<<(k-1))!=0) // or if(((n>>(k-1))&1)==1)
        return true;
    return false;

}

int main()
{
    int n,k;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the Kth place bit to check : ";
    cin>>k;
    if(checkKbit(n,k))
        cout<<"Kth bit is set";
    else
        cout<<"Kth bit is not set";
}