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

// take start for starting index and best start and end for assigning after the largest sum subarray is found
// start is assigned on the curr index whenever v2 is larger than v1
// the best end is assigned at the current index since if the v2 is last element then it would be the start and end index
//else it would add up till the sum becomes more , then that last index would be best end.
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
