
#include<bits/stdc++.h>
using namespace std;

//naive solution
// int countSet(int n)
// {
//     int res=0;
//     while(n>0)
//     {
//         if(n%2!=0)
//         {
//             res++;
//         }
//         n=n/2;
//     }
//     return res;
// }

//Brian Kerningam Algortithms;
int countSet(int n)
{
    int res=0;
    while(n>0)
    {
        n=(n&(n-1));
        res++;
    }
    return res;
}


int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<"number of set bits : "<<countSet(n);
}