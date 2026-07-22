#include <bits/stdc++.h>
using namespace std;
void printF( int n, int arr[])
{

    unordered_map<int,int> store;

    for(int i = 0; i < n ; i++){
      store[arr[i]] = i;
    }

    if  (store.find(20) != store.end() || store.find(25) != store.end()){
      cout << "Value found ";
    }
    else {
      cout << "not found";
    }
  
   
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
