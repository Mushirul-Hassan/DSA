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
    for (int i = low_dist; i <= max_dist; i++)
    {
        if (guessNum(arr, k, i, n))
        {
            ans = i;
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