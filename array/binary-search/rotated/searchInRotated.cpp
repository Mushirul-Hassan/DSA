#include <bits/stdc++.h>
using namespace std;

int min(vector<int> &nums, int target, int n, int l, int r)
{
    int min = r;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] < nums[r])
        {
            mid = min;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    // int minNum = nums[min];
    // return minNum;
    return min;
}

int left(vector<int> &nums, int target, int n,  int smallest)
{
    int l = 0;
    int r = smallest - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        // check the left side of the minimum number or index we just got
        if (mid == target)
        {
            mid = ans;
            r = mid - 1;
        }
        else if (mid > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }

        // by taking l and min -1 , and taking minimum as min but
        //  if a more smaller number is found then take it as min
    }
    return ans;
}
int right(vector<int> &nums, int target, int n,  int smallest)
{
    // do the same here but take the minimum index + 1 upto right most index
    int l = smallest;
    int r = n - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid == target)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (mid > target)
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
int search(vector<int> &nums, int target, int n)
{
    int l = 0;
    int r = n - 1;
    int smallest = min(nums, target, n, l, r);
    int left_search = left(nums, target, n,  smallest);
    int right_search = right(nums, target, n,  smallest);
    // while (l <= r) {
    //     int mid = (l + r) / 2;
    //     if (min > target) {

    //     }
    // }
    if (left_search != -1)
    {
        return left_search;
    }
    else if (right_search != -1)
    {
        return right_search;
    }
    else
    {
        return -1;
    }
    // karna ye hai ki min function ka return value ko left aur tright funcs mein use karna hai taki compare kar sakein
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

    cout << search(nums, n, target);

    return 0;
}