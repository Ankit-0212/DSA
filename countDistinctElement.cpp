#include<bits/stdc++.h>
using namespace std;
// O(n)
int countDistinct(int arr[],int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
        s.insert(arr[i]);
    return s.size();
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Number of distinct elements in an array are : "<<countDistinct(arr,n);

}