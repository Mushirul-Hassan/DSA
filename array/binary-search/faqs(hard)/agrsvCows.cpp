#include <bits/stdc++.h>
using namespace std;
int guessNum(vector<int> &arr, int k, int dist, int n)
{
    int count = 1;
    int pos = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos >= dist)
        {
            count++;
            pos = arr[i];
        }
    }
    return (count >= k);
}
int agrsvCows(vector<int> &arr, int n, int k)
{
    int ans = 0;
    sort(arr.begin(), arr.end());
    int low_dist = 1;
    int max_dist = arr.back() - arr[0];
    while (low_dist <= max_dist)
    {

        int mid = low_dist + (max_dist - low_dist) / 2;
        if (guessNum(arr, k, mid, n))
        {
            ans = mid;
            low_dist = mid + 1;
        }
        else
        {
            max_dist = mid - 1;
        }
    }

    return ans;
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

    cout << agrsvCows(arr, n, k);

    return 0;
}