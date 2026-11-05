#include <bits/stdc++.h>
using namespace std;
int nthRoot(int n, int m)
{
    int ans = -1;
    for (int i = 0; i <= m; i++)
    {
        int power = pow(i, n);
        if (power == m)
        {
            ans = i;
        }
        else if (power > m)
        {
            break;
        }
    }

    return ans;
}

int main()
{
    int n, m;

    cin >> n >> m;

    cout << nthRoot(n, m);

    return 0;
}
