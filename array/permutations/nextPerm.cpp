#include <bits/stdc++.h>
using namespace std;
void nP(vector<int> &arr, int n)
{
    int lexi_index = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i - 1] < arr[i]) // if i = 2 then i-1 = 1.
        {
            lexi_index = i - 1;
            break;
        }
    }
    // cout << lexi_index;
    if (lexi_index != 0)
    {
        int swap_index = lexi_index;

        for (int j = n - 1; j >= lexi_index + 1; j--)
        {
            if (arr[j] > arr[lexi_index])
            {
                swap_index = j;
                break;
            }
        }
        swap(arr[lexi_index], arr[swap_index]);
        // cout << swap_index;
    }

    reverse(arr.begin() + lexi_index + 1, arr.end());
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

    nP(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
