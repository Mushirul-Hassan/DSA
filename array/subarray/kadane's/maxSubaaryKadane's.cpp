#include <bits/stdc++.h>
using namespace std;
int maxSubarray(vector<int> &nums, int n)
{
    int best = nums[0];
    int ans = nums[0];
    for (int i = 1; i < n; i++)
    {
        int v1 = best + nums[i];
        int v2 = nums[i];
        best = max(v1, v2);
        ans = max(ans, best);
    }
    return ans;
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

    cout << maxSubarray(nums, n);

    return 0;
}
