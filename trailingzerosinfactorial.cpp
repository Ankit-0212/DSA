#include<bits/stdc++.h>
using namespace std;
// O(n) time complexity 

// int countZeros(int n)
// {
//     int fact=1;
//     for(int i=2;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     int res=0;
//     while(fact %10 ==0)
//     {
//         fact=fact/10;
//         res++;
//     }
//     return res;
// }

//O(log n)
 int countZeros(int n)
 {
     int res=0;
     for(int i=5;i<=n;i=i*5)
     {
         res=res+n/i;

     }
     return res;
      
 }

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The number of trailing zeros are : "<<countZeros(n);


}