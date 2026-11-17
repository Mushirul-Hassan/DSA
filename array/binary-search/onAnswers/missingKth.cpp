#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &arr, int n, int k)
{
    int num = 1;
    int i = 0;
    while (i < n && k > 0)
    {
        if (arr[i] == num)
        {
            i++;
        }
        else
        {
            k--;
        }
        num++;
    }

    while (k--)
    {
        num++;
    }
    return num - 1;
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

    cout << findKthPositive(arr, n, k);

    return 0;
}