#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums, int n)
{
    int seq = 1;
    int i = 0;
    int maxSeq = 1;
    sort(nums.begin(), nums.end());
    for (int j = 1; j < n; j++)
    {
        if (nums[j] - nums[i] == 1)
        {
            seq++;
            i++;
        }
        else if (nums[j] == nums[i])
        {
            i = j;
        }
        else
        {
            seq = 1;
            i++;
        }
        maxSeq = max(maxSeq, seq);
    }
    return n != 0 ? maxSeq : 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n - 1);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << longestConsecutive(nums, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << nums[i] << " ";
    // }

    return 0;
}
