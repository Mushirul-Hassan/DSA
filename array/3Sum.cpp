#include <bits/stdc++.h>
using namespace std;
void trSum(int arr[],   int n)
{
    int i = 0;
    int j = n - 1;
    int k = n-1; 

    while ( i < j)
    {
       arr[k] = 0 - arr[i] + arr[j];
       int sum = arr[i] + arr[j] + arr[k];
       
       if ( sum == 0){
        cout << "Triplets: " << arr[i] <<" "<< arr[j] << " "<< arr[k];
        break;
       }

       else if ( sum < 0){
         i++;
       } else {
         j--;
       }
       k--;
    
}
     cout << "No triplet found";
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
    trSum(arr,  n);
   

    return 0;
}
