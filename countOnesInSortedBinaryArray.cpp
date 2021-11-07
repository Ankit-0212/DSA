#include<bits/stdc++.h>

using namespace std;

int countOnes(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==0)
            low=mid+1;
        else
        {
            if(mid==0||arr[mid]!=arr[mid-1])
                return n-mid;
            else
                mid=high-1;
        }
    }
    return 0;
}

int main()
{
    int n, x;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the binary array in a sorted order : \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << "number of occurences are : " << countOnes(arr, n);
}