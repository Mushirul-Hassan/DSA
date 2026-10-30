#include <bits/stdc++.h>
using namespace std;

int min(vector<int> &nums, int n)
{
    int l = 0;
    int r = n - 1;
    // int minIdx = r;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] > nums[r])
        {
            // mid = minIdx;
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    // int minNum = nums[min];
    // return minNum;
    return r;
}

// int left(vector<int> &nums, int target, int n,  int smallest)
// {
//     int l = 0;
//     int r = smallest - 1;
//     // cout << r;
//     int ans = -1;
//     while (l <= r)
//     {
//         int mid = (l + r) / 2;
//         // check the left side of the minimum number or index we just got
//         if (nums[mid] == target)
//         {
//             mid = ans;
//             r = mid - 1;
//         }
//         else if (nums[mid] < target)
//         {
//             l = mid + 1;
//         }
//         else
//         {
//             r = mid - 1;
//         }

//         // by taking l and min -1 , and taking minimum as min but
//         //  if a more smaller number is found then take it as min
//     }
//     return ans;
// }
// int right(vector<int> &nums, int target, int n,  int smallest)
// {
//     // do the same here but take the minimum index + 1 upto right most index
//     int l = smallest;
//     // cout << l;
//     int r = n - 1;
//     int ans = -1;
//     while (l <= r)
//     {
//         int mid = (l + r) / 2;
//         if (nums[mid] == target)
//         {
//             ans = mid;
//             l = mid + 1;
//         }
//         else if (nums[mid] > target)
//         {
//             l = mid + 1;
//         }
//         else
//         {
//             r = mid - 1;
//         }
//     }
//     return ans;
// }

int binarySearch(vector<int> &nums, int target, int n, int l, int r)
{
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            l = mid - 1;
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

int search(vector<int> &nums,  int n,int target)
{
    int smallest = min(nums, n);
    int binary_search = binarySearch(nums, target, n, 0, smallest - 1);

    if (binary_search != -1)
    {
        return binary_search;
    }
    binary_search = binarySearch(nums, target, n, smallest, n - 1);
    return binary_search;

    // karna ye hai ki min function ka return value ko left aur tright funcs mein use karna hai taki uske around compare kar sakein
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