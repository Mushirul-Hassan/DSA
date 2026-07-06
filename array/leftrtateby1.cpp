#include <bits/stdc++.h>
using namespace std;
void lftRtate(int arr[], int n)
{
    int i = 0;
    for (int j = 0; j < n-1;j++){
        arr[j-1] = arr[j];
    }
    arr[n-1] = arr[i];
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
    lftRtate(arr, n);
    

    return 0;
}
