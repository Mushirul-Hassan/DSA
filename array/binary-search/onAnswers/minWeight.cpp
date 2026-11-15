#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> &weights, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += weights[i];
    }
    return s;
}

int totalDays(vector<int> &weights, int mid, int n)
{
    int s = 0;
    int days = 0;
    for (int i = 0; i < n; i++)
    {
        s += weights[i];
        if (s <= mid)
        {
            days++;
            s = 0;
        }
    }
    return days;
}

int shipWithinDays(vector<int> &weights, int n, int days)
{
    int wt = -1;
    int l = 1;
    int r = sum(weights, n);
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (totalDays(weights, mid, n) <= days)
        {
            wt = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return wt;
}

int main()
{
    int n, days;
    cin >> n >> days;
    vector<int> weights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    cout << shipWithinDays(weights, n, days);

    return 0;
}
