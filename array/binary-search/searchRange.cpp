#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target, int n)
{

    vector<int> pos;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            pos.push_back(i);
        }
    }
    return pos;
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