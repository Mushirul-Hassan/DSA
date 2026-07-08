#include <bits/stdc++.h>
using namespace std;
void lftRtate(int arr[], int n)
{
    int t = arr[0];
    for (int j = 0; j < n-1;j++){
        arr[j] = arr[j+1];

    }
    arr[n-1] = t;
    
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
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
