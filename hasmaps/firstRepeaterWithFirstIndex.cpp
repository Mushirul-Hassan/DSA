#include <bits/stdc++.h>
using namespace std;
int printF(int n, int arr[])
{

    unordered_map<int, int> freq;
    int index = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        freq[arr[i]]++;

        if (freq[arr[i]] > 1)
        {
            index = i;
        }
    }
    return (index == -1) ? -1 : index + 1;
}


int main()
{
    int n;

    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << printF(n, arr);
}
