#include <bits/stdc++.h>
using namespace std;

int min(vector<int> &nums, int n)
{
    int l = 0;
    int r = n - 1;
    // int minIdx = r;
    while (l < r && nums[l] == nums[l + 1])
        l++;
    while (l < r && nums[r] == nums[r - 1])
        r--;
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

int binarySearch(vector<int> &nums, int target, int n, int l, int r)
{
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

int search(vector<int> &nums, int n, int target)
{
    int smallest = min(nums, n);
    int binary_search = binarySearch(nums, target, n, 0, smallest - 1);

    if (binary_search != -1)
    {
        return binary_search;
    }
    binary_search = binarySearch(nums, target, n, smallest, n - 1);
    return binary_search;
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

// the most important thing in searching in rotated array problems is finding the pivot index ,
// which might upon the edge cases provided in the question
// duplicates require to be eliminated from the search before the actual control begins so that 
// a peculiar situation doesn't arrive where , the smalllest is not after the largest but anywhere 
// which nullifies any chance of breaking the array in 2 ascending parts and then searching the target