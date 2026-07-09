#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>& arr) 
{
    int n =arr.size();
    int i = 0;
    for(int j = 0; j< n;j++){
        if(arr[j] != 0) {
          swap(arr[i],arr[j]);
              i++;
        }
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
  

    rotate(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    
    return 0;
}
