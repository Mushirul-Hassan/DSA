#include <bits/stdc++.h>
using namespace std;
vector<int> TSum(vector<int> &arr, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        int need = target - arr[i];
        if (mp.find(need) != mp.end())
        {
            return {mp[need], i};
        }
        mp[arr[i]] = i;
    }
    return {};
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

    vector<int> result = TSum(arr, target);

    if (!result.empty())
    {
        cout << result[0] << " " << result[1];
    }
    else
    {
        cout << "No solution found";
    }

    return 0;
}

// we check and put the current element in the map and check if the required element is already present in the map or not. If it is present we return the indices of both the elements.