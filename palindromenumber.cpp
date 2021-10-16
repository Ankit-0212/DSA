#include<bits/stdc++.h>
using namespace std;

void palindrome(int n)
{
    int reverse=0,temp=n;
    while(n!=0){
        reverse=reverse*10+ n%10;
        n=n/10;
    }
    if(reverse==temp)
    {
        cout<<"palindrome";

    }
    else{
        cout<<"Not a palindrome";
    }
}
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    palindrome(n);
}