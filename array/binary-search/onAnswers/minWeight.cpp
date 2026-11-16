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
    int days = 1;
    for (int i = 0; i < n; i++)
    {

        // cout << s << '\n';
        if (s + weights[i] > mid)
        {
            days++;
            s = weights[i];
        }
        else
        {
            s += weights[i];
        }
    }
    // cout << days << '\n';
    return days;
}

int shipWithinDays(vector<int> &weights, int n, int days)
{
    int l = *max_element(weights.begin(), weights.end());
    int r = sum(weights, n);
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (totalDays(weights, mid, n) <= days)
        {
            // wt = mid;
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return r;
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
