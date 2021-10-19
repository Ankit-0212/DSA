#include <bits/stdc++.h>
using namespace std;

int maxEvenOdd(int arr[], int n)
{
    int res = 0, curr = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i + 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i + 1] % 2 == 0))
        {
            curr++;
            res=max(res,curr);
        }
        else
            curr=1;
    }

    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array : \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"maximum length of even odd subarrays is : "<<maxEvenOdd(arr,n);
}