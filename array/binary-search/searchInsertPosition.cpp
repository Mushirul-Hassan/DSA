#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &arr, int n, int target)
{
    int l = 0;
    int r = n - 1;
    int ans = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] >= target)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
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