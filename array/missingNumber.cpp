#include <bits/stdc++.h>
using namespace std;
int misNum(vector<int> &arr, int n)
{
    // n =arr.size();
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i <= n; i++)
    {
        xor1 ^= i;
    }

    for (int num : arr)
    {
        xor2 ^= num;
    }

    return xor1 ^ xor2;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << misNum(arr, n);

    return 0;
}
