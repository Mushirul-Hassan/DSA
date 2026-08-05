#include <bits/stdc++.h>
using namespace std;
vector<int> maxSubarray(vector<int> &nums, int n)
{
    int best = nums[0];
    int ans = nums[0];
    int start = 0;
    int bestStart = 0;
    int bestEnd = 0;
    for (int i = 1; i < n; i++)
    {
        int v1 = best + nums[i];
        int v2 = nums[i];
        // best = max(v1, v2);
        if (v2 > v1)
        {
            best = v2;
            start = i;
        }
        else
        {
            best = v1;
        }
        // ans = max(ans, best);
        if (best > ans)
        {
            ans = best;
            bestStart = start;
            bestEnd = i;
        }
    }
    vector<int> arr;
    for (int i = bestStart; i <= bestEnd; i++)
    {
        arr.push_back(nums[i]);
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> result = maxSubarray(nums, n);

    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}
