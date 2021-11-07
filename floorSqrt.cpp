#include <bits/stdc++.h>

using namespace std;

int sqrtFloor(int x)
{
    int low = 1, high = x, ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int sqrt = mid * mid;

        if (sqrt == x)
            return mid;
        else if (sqrt > x)
            high = mid - 1;
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int n, x;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Floor of square roots are : " << sqrtFloor(n);
}