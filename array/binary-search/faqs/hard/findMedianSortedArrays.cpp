#include <bits/stdc++.h>
using namespace std;
int findMedianSortedArrays(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> temp(m + n);
    int mid = 0;
    for (int i = 0; i < m; i++)
    {
        temp.push_back(nums1[i]);
    }
    for (int j = 0; j < n; j++)
    {
        temp.push_back(nums2[j]);
    }

    sort(temp.begin(), temp.end());

    for (int k = 0; k < temp.size(); k++)
    {
        // int even = (temp[k] % 2 == 0);
        int odd = (temp[k] % 2 != 0);

        if (odd)
        {

            double mid = temp.size() / 2;
            mid = temp[mid];
        }
        else
        {
            double medEve = temp.size() / 2;
            mid = (temp[medEve] + temp[medEve - 1]) / 2.0;
        }
    }
    return double(mid);
}

int main()
{
    int m, n;
    cin >> m, n;
    vector<int> nums1(m);
    vector<int> nums2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums1[i];
    }

    for (int j = 0; j < n; j++)
    {
        cin >> nums2[j];
    }

    cout << findMedianSortedArrays(nums1, m, nums2, n);

    return 0;
}