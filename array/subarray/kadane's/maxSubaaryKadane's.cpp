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
// we have to take best(current sum) and ans(largest sum) - both on the first 0th index,
// then starting the loop from next index we would choose between the current index or sum of current with previous best sum,
// then we would put the chosen new best sum and compare with the old larg sum 
// then again update the ans.