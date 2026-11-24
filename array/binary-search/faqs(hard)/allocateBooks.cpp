#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> &arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int isValid(vector<int> &arr, int page, int n, int k)
{
    int pages = 1;
    int student = 0;
    for (int i = 0; i < n; i++)
    {
        //  sum += arr[i];
        if (pages + arr[i] > page)
        {
             student++;
            // k--;
            pages = arr[i];
        }
        else
        {
            pages += arr[i];
        }
    }
    cout << pages << '\n';
    // return k == 0;
    return student <= k;
}

int findPages(vector<int> &arr, int n, int k)
{

    if (n < k)
    {
        return -1;
    }
    // int maxPg = 0;
    int l = *max_element(arr.begin(), arr.end());
    int r = sum(arr, n);
    while(l < r){
        int mid = l + ( r - l) / 2;
        if(isValid(arr, mid, n, k)){
            r = mid;
        }else {
            l = mid + 1;
        }
    }
    // for (int i = l; i <= r; i++)
    // {
    //     if (isValid(arr, i, n, k))
    //     {
    //         maxPg = i;
    //     }
    //     // 			} else {
    //     // 				maxPg = -1;
    //     // 			}
    // }
    return r;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findPages(arr, n, k);

    return 0;
}