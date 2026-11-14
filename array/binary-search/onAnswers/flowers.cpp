#include <bits/stdc++.h>
using namespace std;

int checkBouq(vector<int> &arr, int n, int mid, int k)
{
    int bouq = 0;
    int flowers = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= mid)
        {
            flowers++;
        }
        else
        {
            flowers = 0;
        }

        if (flowers == k)
        {
            bouq++;
            flowers = 0;
        }
        return bouq;
    }
}
int minDays(vector<int> &arr, int n, int m, int k)
{
    int ans = -1;
    int l = 1;
    int r = *max_element(arr.begin(), arr.end());
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (m <= checkBouq(arr, n, mid, k))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        return ans;
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

// count the number of adjacent flowers by counting the day less than the mid value
// then increment the bouquet (m) accordingly , when flowers value becomes equal to k.
// then check if bouquets are made more or equal to the value of m on that specific day (mid).