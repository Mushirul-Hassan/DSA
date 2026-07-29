#include <bits/stdc++.h>
using namespace std;
  int majorityElement(vector<int>& nums, int n) {
        unordered_map<int, int> mp;
         int m = n / 2;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;

            if (mp[nums[i]] > m) {
                cout << mp[nums[i]]; 
                return nums[i];
            }
        }
        return {};
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

    cout << majorityElement(nums, n);

    return 0;
}
