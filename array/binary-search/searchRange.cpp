#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target, int n)
{

    int l = 0;
    int r = n - 1;
    int ans = n;

    vector<int> empty;
    empty.push_back(-1);
    empty.push_back(-1);
    vector<int> pos;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            pos.push_back(mid);
            r = mid - 1;
            // } else if (nums[mid] > target) {
            //     r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    // return pos.size() != 0 ? pos : null;
    sort(pos.begin(), pos.end());
    return pos.size() != 0 ? pos : empty;
    // return pos;
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