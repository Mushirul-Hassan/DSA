#include <bits/stdc++.h>
using namespace std;
int nthRoot(int n, int m)
{
    int l = 0;
    int r = m;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int power = pow(mid, n);
        if (power == m)
        {
            return r;
            break;
        }
        else if (power > m)
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
