#include <bits/stdc++.h>

using namespace std;

int SecondLargest(int arr[], int n)
{
   int largest=0;
   int res=-1;

   for(int i=1;i<n;i++)
   {
       if(arr[i]>arr[largest])
       {
           res=largest;
           largest=i;
       }

       else if(arr[i]!=arr[largest])
       {
           if(res=-1||arr[i]>arr[res])
           res=i;
       }
   }
   return arr[res];
}

int main()

{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for ( int i = 0; i < n; i++)
        cin >> arr[i];

    cout<<"Second largest element in array is : "<<SecondLargest(arr,n);

        
}