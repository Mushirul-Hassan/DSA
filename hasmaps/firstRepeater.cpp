#include <bits/stdc++.h>
using namespace std;
void printF(int n, int arr[])
{

  unordered_map<int, int> freq;

  for (int i = 0; i < n; i++)
  {
    freq[arr[i]]++;

    if (freq[arr[i]] > 1)
    {
      cout << arr[i];
        break;
    }
  
    // else
    // {
    //   freq[arr[i]] = i;
    // }
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

  printF(n, arr);
}
