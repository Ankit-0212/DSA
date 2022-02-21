#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[50],n,count=0,max=0;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++)
    {
        count =1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(count>max)
            max=count;
    }
    
    cout<<"Max occurred elements is : "<<max;
    
}