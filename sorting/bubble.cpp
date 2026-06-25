#include <bits/stdc++.h>
using namespace std;
void bubSort(int n, int arr[])
{
   for(int i = n-1 ;i > 0;i--) {


    for (int j = 0;j<i;j++){
        if ( arr[j]>arr[j+1]){
             swap(arr[j],arr[j+1]);
        }
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
     bubSort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
   
    return 0;
}
