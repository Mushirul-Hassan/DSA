#include <bits/stdc++.h>
using namespace std;
int rmvDup(vector<int> arr[], int n)
{
    int k = arr[n];
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i + 1] != arr[i])
        {
            k = arr[i+1]
        }
    }
    return 1;
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
    rmvDup(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
 

    return 0;
}
