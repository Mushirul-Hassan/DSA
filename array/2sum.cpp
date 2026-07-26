#include <bits/stdc++.h>
using namespace std;
int TSum(vector<int> &arr, int target)
{
    int n = arr.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int need = target - arr[i];

        if (mp.find(need) != mp.end())
        {
            return mp[need] , i;
        }

        mp[arr[i]] = i;
    }
    return 0;
}
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << TSum(arr, target);

    return 0;
}
