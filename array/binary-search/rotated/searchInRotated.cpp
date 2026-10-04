#include <bits/stdc++.h>
using namespace std;

int min(vector<int> &nums, int target, int n, int l, int r)
{
    int min = r;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid < r)
        {
            mid = min;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return nums[min];
}

int left(vector<int> &nums, int target, int n, int l, int r) {
    while(l <= r){
        int mid = (l +r)/2;
        
    }
}
int right(vector<int> &nums, int target, int n, int l, int r) {

}
int search(vector<int> &nums, int target, int n)
{
    int l = 0;
    int r = n - 1;
    int smallest = min(nums, target, n, l, r);
    int left_search = left(nums, target, n, l, r);
    int right_search = right(nums, target, n, l, r);
    // while (l <= r) {
    //     int mid = (l + r) / 2;
    //     if (min > target) {

    //     }
    // }
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