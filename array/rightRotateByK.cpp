#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>& arr, int k) 
{
    int n =arr.size();
    k = k % n;

    vector<int> temp(k);
    
    for(int i = 0; i < k ;i++){
        temp[i] = temp[n-k-i];
    }

    for(int i = n-1; i >= k ; i-- ){
        arr[i] = arr[i-k];
    }

   for (int i = 0; i < k;i++){
        arr[i] = temp[i];

    }
    
}


int main()
{
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    rotate(arr, k);
    
    return 0;
}
