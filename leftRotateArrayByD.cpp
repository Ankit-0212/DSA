#include <bits/stdc++.h>

using namespace std;



//  time - O(n) and Auxilarry space - 0(d)


// void leftRotateArrayByD (int arr[], int n,int d)
// {
//    int temp[d];
//    for(int i=0;i<d;i++)
//    temp[i]=arr[i];
//    for(int i=d;i<n;i++)
//     arr[i-d]=arr[i];
//    for(int i=0;i<d;i++) 
//    arr[n-d+i]=temp[i];
// }


// Reversal Algorithm -- time- 0(n) auxilary space - 0(n)

void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void leftRotateArrayByD (int arr[], int n,int d)
{
   reverse(arr,0,d-1);
   reverse(arr,d,n-1);
   reverse(arr,0,n-1);
}

int main()
{
    int n,d;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout<<"Enter the value by which you have to rotate (d<n) : ";
    cin>>d;
    leftRotateArrayByD(arr,n,d);

    cout<<"Array after left rotating by D elements : ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}