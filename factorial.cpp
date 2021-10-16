#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long fact = 1;
    cout << "Enter a number : ";
    cin >> n;
    if (n == 1 || n == 0)
    {
        fact = 1;
    }
    else
    {

        while (n>0)
        {
            fact = fact * n;
            n--;
        }
    }
    cout << fact;
}