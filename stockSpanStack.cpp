#include<bits/stdc++.h>

using namespace std;
void printSpan(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int span =1;
        for(int j=i-1;j>=0&&arr[j]<=arr[i];j--)
        {
            span++;
        }
        cout<<span<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter number of days : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the prices of stocks for each day : \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<"Span of stocks for each day is : \n";
    printSpan(arr,n);
    return 0;
}