#include<bits/stdc++.h>
using namespace std;

int palStr(string &str,int start,int end)
{
    if(start>=end)
        return true;

    return(str[start]==str[end])&&palStr(str,start+1,end-1);
}

int main()
{
    cout<<"Enter a string : ";
    string s;
    cin>>s;
    cout<<(palStr(s,0,s.length()-1) ? "true" : "false"); 

}