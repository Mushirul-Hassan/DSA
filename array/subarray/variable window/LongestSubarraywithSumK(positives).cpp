#include <bits/stdc++.h>
using namespace std;
int misNum(vector<int> &arr, int k)
{
    int n = arr.size();
    int low = 0;
    int high = 0;
    int sum = 0;
    int maxL = 0;

    while (high < n)
    {
        sum += arr[high];

        while (sum > k)
        {
            sum -= arr[low];
            low++;
        }
        if (sum == k)
        {
            int l = high - low + 1;
            maxL = max(maxL, l);
        }

        high++;
    }
    return maxL;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << misNum(arr, k);

    return 0;
}
