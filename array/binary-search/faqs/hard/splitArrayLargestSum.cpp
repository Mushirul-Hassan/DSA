#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> &arr, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
    }
    return s;
}

int isMaxSum(vector<int> &arr, int maxSum, int n, int k)
{
    int sum = 0;
    int splitCount = 1;
    for (int i = 0; i < n; i++)
    {

        
        if (sum + arr[i] > maxSum)
        {
             splitCount++;
            sum = arr[i];
        }
        else
        {
            sum += arr[i];
        }
    }
    
    return splitCount <= k;
}

int splitArray(vector<int> &arr, int n, int k)
{
    int l = *max_element(arr.begin(), arr.end());
    int r = sum(arr, n);
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (isMaxSum(arr, mid, n, k))
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << splitArray(arr, n, k);

    return 0;
}
