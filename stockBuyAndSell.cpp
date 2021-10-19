#include <bits/stdc++.h>
using namespace std;

// Naive
// int maxProfit(int price[], int start, int end)
// {
//     if (end <= start)
//         return 0;

//     int profit = 0;

//     for (int i = start; i < end; i++)
//     {
//         for (int j = i + 1; j <= end; j++)
//         {
//             if (price[j] > price[i])
//             {
//                 int curr = price[j] - price[i] + maxProfit(price, start, i - 1) + maxProfit(price, j + 1, end);

//                 profit = max(profit, curr);
//             }
//         }
//     }

//     return profit;
// }

// efficient -

int maxProfit(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += (arr[i] - arr[i - 1]);
        }
    }
    return profit;
}
int main()
{
    int n, x;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum profit after selling stocks = " << maxProfit(arr, n);
}