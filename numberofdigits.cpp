#include<bits/stdc++.h>
using namespace std;


//iterative soultion

// int countDigits(long n)
// {
//     int count=0;
//     while(n!=0)
//     {
//         n=n/10;
//         ++count;

//     }
//     return count;
// }



// recursive solution
// int countDigits(long n)
// {
//     if(n==0)
//         return 0;
//     return 1+countDigits(n/10);
// }


//logatithmic solution

int countDigits(long n)
{
    return floor(log10(n)+1);
}
int main()
{
    long n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The number of digits are : "<<countDigits(n);
    
}