#include <bits/stdc++.h>
using namespace std;
int midNum(vector<int> &arr)
{
    int n = arr.size();
    int total = 0;
    for ( int num: arr){
        total += num;
    }
    int left = 0;
    for(int i=0; i<n;i++){
        int right = total - left - arr[i];
        
        if (left == right){
            return i;
        }
        left += arr[i];
    }
    return -1;
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

    cout << midNum(arr);

    return 0;
}
