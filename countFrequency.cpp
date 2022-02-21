#include<bits/stdc++.h>

using namespace std;

void countFreq(int arr[],int n)
{
    unordered_map<int ,int> h;
    for(int i=0;i<n;i++)
        h[arr[i]]++;
    for(auto e: h)
        cout<<e.first<<" "<<e.second<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"The Frequency of elements are : "<<endl;
    countFreq(arr,n);
}