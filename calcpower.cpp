 #include<bits/stdc++.h>
 using namespace std;
 int Power(int x,int n)
 {
     int res=1;
     while(n>0)
     {
         if(n%2!=0)
            res=res*x;
        x=x*x;
        n=n/2;
     }
     return res;
 }

 int main()
 {
     int x,n;
     cout<<"Enter a number : ";
     cin>>x;
     cout<<"Enter the power to be raised : ";
     cin>>n;
     cout<<"The value is :"<<Power(x,n);
 }