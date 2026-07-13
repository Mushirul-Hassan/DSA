#include <bits/stdc++.h>
using namespace std;
int misNum(vector<int> &arr, int n)
{
    int xorAll = 0;
    for (int num : arr)
    {
        xorAll ^= num;
    }
    return xorAll;
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

    cout << misNum(arr, n);

    return 0;
}
