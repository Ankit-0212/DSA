#include<bits/stdc++.h>
using namespace std;

void checkprime(int n)
{
    int count;
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count >= 1)
    {
        cout<<"Number is not prime";
    }
    else{
        cout<<"Number is prime";
    }
}
int main()
{
    int prime;
    cout<<"Enter a number : ";
    cin>>prime;
    checkprime(prime);
}