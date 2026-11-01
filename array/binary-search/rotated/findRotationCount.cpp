#include <bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> &arr, int n)
{
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] < arr[r])
        {
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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findKRotation(arr, n);

    return 0;
}

//find roatation count , same as finding the smallest , since index of smallest in roated actually
// gives the number of rotaion in sorted array