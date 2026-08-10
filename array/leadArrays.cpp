#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int> &arr, int n)
{
    // int r = n-1;
    vector<int> leadArr;
    // int l = -1;

    for (int i = 0; i <= n-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            // r = arr[i];
            // l = i;
            leadArr.push_back(arr[i]);
        }
    }

    return leadArr;
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

    vector<int> result = leaders(nums, n);

    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}
