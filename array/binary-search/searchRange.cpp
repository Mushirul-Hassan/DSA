#include <bits/stdc++.h>
using namespace std;

int leftMost(vector<int> &nums, int target, int n)
{
    int l = 0;
    int r = n - 1;
    int ans = -1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (nums[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int rightMost(vector<int> &nums, int target, int n)
{
    int l = 0;
    int r = n - 1;
    int ans = -1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            l = mid + 1;
        }
        else if (nums[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int> &nums, int target, int n)
{

    int left_most = leftMost(nums, target, n);
    int right_most = rightMost(nums, target, n);

    return {left_most, right_most};
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> result = searchRange(nums, target, n);

    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}