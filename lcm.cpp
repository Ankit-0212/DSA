#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,max;
    cout<<"Enter two positive integers :"<<endl;
    cin>>n1>>n2;
    max=(n1>n2)? n1 : n2 ;
    while (1)
    {
        /* code */
        if(max%n1==0 &&max%n2==0)
        {
            cout<<"The LCM of "<<n1<<" and "<<n2<<" is "<<max;
            break;
        }
        ++max;
    }
    
}