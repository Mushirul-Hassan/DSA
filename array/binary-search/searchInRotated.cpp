#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target, int n)
{
    int l = 0;
    int r = n - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid > target)
        {
            ans = mid;
            l = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << search(arr, n, target);

    return 0;
}