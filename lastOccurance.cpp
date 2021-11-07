#include <bits/stdc++.h>
using namespace std;

int lastOccurence(int arr[], int n, int x)
{
    int low = 0, high = n - 1;


	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else
		{
			if(mid == n - 1 || arr[mid + 1] != arr[mid])
				return mid;

			else
				low = mid + 1;
		}

	}
    return -1;
}

int main()
{
    int n, x;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array in sorted order : \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the value to find the last occurance :";
    cin >> x;
    cout << "index of last occurence : " << lastOccurence(arr, n, x);
}