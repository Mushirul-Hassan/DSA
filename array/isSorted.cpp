#include <bits/stdc++.h>
using namespace std;
bool isSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            return 0;
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
    if (isSort(arr, n))
        cout << "true";
    else
        cout << "false";

    return 0;
}
