#include <bits/stdc++.h>
using namespace std;
bool twoSum(vector<int> &arr, int target)
{

    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        int need = target - arr[i];
        if (mp.find(need) != mp.end())
        {
            return true;
        }
        mp[arr[i]] = i;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    if (twoSum(arr, target))
        cout << "True";
    else
        cout << "False";
}