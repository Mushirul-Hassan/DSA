#include <bits/stdc++.h>
using namespace std;
void colors(int arr[], int n)
{
    int i =0;
    int j= 0;
    int k = n-1;
    while( j <= k){
        if ( arr[j] == 1){
            j++;
        } else if ( arr[j] == 2){
            swap(arr[j], arr[k]);
          k--;
        } else {
            swap(arr[j], arr[i]);
            i++;
            j++;
        }
    }
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
    colors(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//it works on the principle of 3 pointers, i for 0's, j for 1's and k for 2's. We keep swapping the elements to their respective positions.