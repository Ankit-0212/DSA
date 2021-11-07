#include<bits/stdc++.h>
using namespace std;
// Recursive - 
// int findOccurence(int arr[],int low,int high,int val)
// {
//     if(low>high) return -1;

//     int mid=(low+high)/2;
//     if(val>arr[mid])
//         return findOccurence(arr,mid+1,high,val);
//     else if(val<arr[mid])
//         return findOccurence(arr,low,mid-1,val);
    
//     else{
//         if(mid==0||arr[mid-1]!=arr[mid])
//             return mid;
//         else
//             return findOccurence(arr,low,mid-1,val);
//     }

// }

int findOccurence(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]>x)
            high=mid-1;
        else if(arr[mid]<x)
            low=mid+1;

        else{
            if(mid==0||arr[mid-1]!=arr[mid])
                return mid;
            else
                high=mid-1;
            
        }

        return -1;
    }
}

int main() {
    
    int arr[] = {5, 10, 10, 15, 20, 20, 20}, n = 7;

	int x = 20;
	
	cout<<findOccurence(arr, n , x);
	return 0;
}