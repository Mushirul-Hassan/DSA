#include <bits/stdc++.h>
using namespace std;
void printF( int n, int arr[])
{

    unordered_map<int,int> store;

    for(int i = 0; i < n ; i++){
      store[arr[i]] = i;
    

    if  (store.find(arr[i]) != store.end()){
      cout << arr[i];
    }
    else {
      store[arr[i]];
    }
}
    // for (auto it: store){
    //     cout << it.first << " = "<< it.second << endl;
    // }
   
}

int main()
{
    int n;

    cin >> n ;

    int arr[n];
for (int i = 0; i < n; i++){
    cin >> arr[i];
}



  printF(n, arr);
   
}
