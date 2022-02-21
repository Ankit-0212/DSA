#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cout<<"Enter the string : ";
    cin>>s1;
    cout<<"Enter substring to check : ";
    cin>>s2;

    int j=0;
    for(int i=0;i<s1.length()&&j<s2.length();i++)
    {
        if(s1[i]==s2[j])
        {
            j++;
        }
    }
    if(j==s2.length())
        cout<<"The given substring is present !";
    else
        cout<<"The given substring is not present !";
    

}