#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int> &nums, int n)
{
    vector<int>newArr(n);
    int pos = 0;
    int neg = 1;
    for(int i = 0; i < n; i++){
        if(nums[i] > 0){
            newArr[pos] = nums[i];
            pos += 2;
        }
        else {
            newArr[neg] = nums[i];
            neg += 2;
        }
    }
    return newArr;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> result = rearrangeArray(nums, n);

    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}
