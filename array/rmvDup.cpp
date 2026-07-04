#include <bits/stdc++.h>
using namespace std;
int rmvDup(int arr[], int n)
{
    int i = 0;
    int j = i+1;
    while (j < n)
    {
        if (arr[j] == arr[i])
        {
            j++;
       }else{
        swap(arr[i+1], arr[j]);
        i++;
        j++;
           }
    }
    return i + 1;
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
