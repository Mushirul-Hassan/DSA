#include <bits/stdc++.h>
using namespace std;
void insSort(int n, int arr[])
{
   for(int i = 1 ;i < n;i++) {

    int k = arr[i];
    int j =  i -1 ;
    while (j >= 0 && arr[j] > k){
        arr[j + 1] = arr[j];
        j--;
      
    }
    //put key at arr[0]
    arr[j + 1] = k;

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
     insSort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
   
    return 0;
}
