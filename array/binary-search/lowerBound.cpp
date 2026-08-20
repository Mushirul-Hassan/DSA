#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &arr, int n, int target)
{
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] >= target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            if (arr[mid + 1] == arr[mid - 1])
            {
                return mid - 1;
            }
            // if (arr.back() == target) {
        }
        // else {
        // 	return n;
        // }
    }
    // else {
    // 				r = mid - 1;
    // 			}
    return n;
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << search(arr, n, target);

    return 0;
}