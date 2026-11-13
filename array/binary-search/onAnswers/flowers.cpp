#include <bits/stdc++.h>
using namespace std;

int minDays(vector<int> &arr, int n, int m, int k)
{
    int l = 1;
    int r = *max_element(arr.begin(), arr.end());
    // int ans = -1;
    int total = m * k;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (mid <= total)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
        return r;
    }
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << minDays(arr, n, m, k);

    return 0;
}