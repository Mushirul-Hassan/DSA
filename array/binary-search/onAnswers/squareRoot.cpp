#include <bits/stdc++.h>
using namespace std;
int sqrt(int n)
{
    int l = 1;
    int r = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int sqr = mid * mid;
        if (sqr <= n)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return r;
}

int main()
{
    int n;

    cin >> n;

   cout << sqrt(n);

    return 0;
}
