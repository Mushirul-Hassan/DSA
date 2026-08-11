#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &arr, int n)
{
    int seq = 0;
    int maxSeq = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i <= n; i++)
    {
        if (arr[i + 1] - arr[i] == 1)
        {
            seq++;
        }
        maxSeq = max(maxSeq, seq);
    }
    return maxSeq + 1;
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

    cout << longestConsecutive(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
