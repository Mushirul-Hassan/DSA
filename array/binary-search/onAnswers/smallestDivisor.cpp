#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // cout << max << '\n';
    return max;
}

int findSum(vector<int> &arr, int n, int mid)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (arr[i] + mid - 1) / mid;
        // sum = sum + (double)(arr[i]) / (double)(arr[mid]);
    }
    // cout << sum << '\n';
    return sum;
}

int smallestDivisor(vector<int> &arr, int n, int threshold)
{
    int max = findMax(arr, n);
    int l = 1;
    int h = max;
    int div = -1;
    while (l <= h)                       
    {
        int mid = (l + h) / 2;
        int sum = findSum(arr, n, mid);
        if (sum <= threshold)
        {
            div = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    // cout << "ANS" << div <<  '\n';
    return div;
}

int main()
{
    int n, threshold;
    cin >> n >> threshold;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << smallestDivisor(arr, n, threshold);

    return 0;
}