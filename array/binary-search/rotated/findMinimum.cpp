#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int> &arr, int n)
{
    int l = 0;
    int r = n - 1;
    int minE = r;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] < arr[minE])
        {
            minE = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return arr[minE];
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findMin(arr, n);

    return 0;
}