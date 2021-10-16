#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n)
{
    int low=0,high= n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array :\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverse(arr,n);
    cout<<"Array after reversing : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}