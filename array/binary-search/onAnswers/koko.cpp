#include <bits/stdc++.h>
using namespace std;

bool checkSum(vector<int> &piles, int mid, int h)
{
    int sum = 0;
    for (int &pile : piles)
    {
        sum += pile / mid;
        if (pile % mid != 0)
        {
            sum++;
        }
    }
    return sum <= h;
}
int minEatingSpeed(vector<int> &piles, int n, int h)
{
    int k = -1;
    int l = 1;
    int r = *max_element(piles.begin(), piles.end());
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (checkSum(piles, mid, h))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}

int main()
{
    int n, h;
    cin >> n >> h;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << minEatingSpeed(nums, n, h);

    return 0;
}