#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int> &nums, int n)
{
    int l = 0;
    int r = n - 1;
    int single = 0;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        int even = (r - mid + 1) % 2 == 0;
        int odd = (r - mid + 1) % 2 != 0;
        if (nums[mid] == nums[mid + 1])
        {
            if (odd)
            {
                l = mid + 2;
                single = nums[mid];
            }
            else
            {
                r = mid - 2;
            }
        }
        else
        {
            if (even)
            {
                r = mid;
                single = nums[mid];
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return single;
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

    cout << singleNonDuplicate(nums, n);

    return 0;
}