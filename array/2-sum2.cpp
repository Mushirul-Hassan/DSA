#include <bits/stdc++.h>
using namespace std;
int tSum(int arr[],   int t, int n)
{
    int i = 0;
    int j = n - 1;


    while ( i < j)
    {
       int sum = arr[i] + arr[j];
       if ( sum == t){
        cout << "Indices: " << i <<" "<< j;
       }

       else if ( sum < t){
         i++;
       } else {
         j--;
       }
    }
     cout << "No pair found";
}


int main()
{
    int n;
    cin >> n;
     int t;
    cin >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    tSum(arr,  t, n);
   

    return 0;
}
