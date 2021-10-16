#include<bits/stdc++.h>

using namespace std;

void N(int n)
{
    if(n==0)
        return;

    N(n-1);
    cout<<n<< ' ';
}
int main()
{
    N(10);
}