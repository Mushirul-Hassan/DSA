#include <bits/stdc++.h>
using namespace std;

int exp(int mid, int m, int n)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}
int nthRoot(int n, int m)
{
    int l = 0;
    int r = m;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int power = exp(mid, m, n);
        if (power == 1)
        {
            return r;
            break;
        }
        else if (power == 2)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, m;

    cin >> n >> m;

    cout << nthRoot(n, m);

    return 0;
}
