#include <bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> &arr, int n)
{
    if( n == 0){
        return 0;
    }
     if( arr[0] > arr[1]){
        return 0;
    }
     if( arr[n-1] > arr[n-2]){
        return n-1;
    }
    int l = 1;
    int r = n - 2;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] > arr[mid+1])
        {
            r = mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            l = mid + 1;
        } 
        else {
            r = mid;
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

    cout << findPeakElement(arr, n);

    return 0;
}