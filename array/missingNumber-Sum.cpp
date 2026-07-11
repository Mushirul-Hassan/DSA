#include <bits/stdc++.h>
using namespace std;
int misNum(vector<int>& arr, int n) 
{
    // n =arr.size();
    int originalSum = n * (n + 1)/2;
    int currSum = 0;

    for ( int i = 0; i < arr.size(); i++){
        currSum += arr[i];
    }

    return originalSum - currSum;


}


int main()
{
    int n;
    cin >> n;
    vector <int> arr(n-1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    

   cout <<  misNum(arr, n);
    
    return 0;
}
