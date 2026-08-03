#include <bits/stdc++.h>
using namespace std;
int misNum(vector<int> &arr, int k)
{
    int n = arr.size();
		if (n < k)
			return 0;
		
		int sum = 0 ;
		int maxS = 0;
		
		for (int i = 0; i < k; i++) {
			sum += arr[i];
		}
		
		maxS = sum;
		
		for (int i = k; i < n; i++) {
			sum += arr[i] - arr[i - k];
			maxS = max(maxS, sum);
		}
		
		return maxS;
 
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << misNum(arr, k);

    return 0;
}
