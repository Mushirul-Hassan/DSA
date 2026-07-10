#include <bits/stdc++.h>
using namespace std;

vector<int> uni(vector<int> &a, vector<int> &b)
{
    int i = 0, j = 0;
    int n = a.size(), m = b.size();

    vector<int> U;

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            if (U.empty() || U.back() != a[i])
            {
                U.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (U.empty() || U.back() != b[j])
            {
                U.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        if (U.empty() || U.back() != a[i])
        {
            U.push_back(a[i]);
        }
        i++;
    }

    while (j < m)
    {
        if (U.empty() || U.back() != b[j])
        {
            U.push_back(b[j]);
        }
        j++;
    }

    return U;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> result = uni(a, b);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}