#include <bits/stdc++.h>
using namespace std;
int minSubarray(vector<int> &nums, int n)
{
    int best = nums[0];
    int ans = nums[0];
    for (int i = 1; i < n; i++)
    {
        int v1 = best + nums[i];
        int v2 = nums[i];
        best = min(v1, v2);
        ans = min(ans, best);
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

    cout << minSubarray(nums, n);

    return 0;
}
