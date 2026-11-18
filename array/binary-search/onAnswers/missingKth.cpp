#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &arr, int n, int k)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int missNums = arr[mid] - (mid + 1);
        if (missNums < k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return l + k;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findKthPositive(arr, n, k);

    return 0;
}