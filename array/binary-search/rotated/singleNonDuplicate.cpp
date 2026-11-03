#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int> &nums, int n)
{
    int l = 0;
    int r = n - 1;

    while (l < r)
    {
        int mid = (l + r) / 2;
        int l =  r - mid;
        if (nums[mid] == nums[mid + 1])
        {
            if (l % 2 == 0)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        else
        {
            if (l % 2 == 0)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return nums[r];
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