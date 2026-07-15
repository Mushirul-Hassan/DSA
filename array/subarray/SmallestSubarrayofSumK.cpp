#include <bits/stdc++.h>
using namespace std;
int misNum(vector<int> &arr, int k)
{
    int n = arr.size();
    int low = 0;
    int high = 0;
    int sum = 0;
    int minL = INT_MAX;

    while (high < n)
    {
        sum += arr[high];

        while (sum >= k)
        {
            int l = high - low + 1;
            minL = min(minL, l);
            sum -= arr[low];
            low++;
        }

        high++;
    }
    return minL;
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
