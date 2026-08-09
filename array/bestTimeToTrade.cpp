#include <bits/stdc++.h>
using namespace std;
int stocks(vector<int> &nums, int n)
{
    // int profit = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int currProfit = nums[j] - nums[i];
    //         if (currProfit > profit)
    //         {
    //             profit = currProfit;
    //         } r++;
    //     }
    //     // cout << profit;
    //     // return profit;
    // }
    // // return 0;
    //   return profit != 0 ? profit : 0;

    int l = 0;
    int r = 1;
    int maxP = 0;
    while( r < n){
        if(nums[l] < nums[r]){
            int profit  = nums[r] - nums[l];
            maxP = max(maxP,profit);
        } else {
            l = r; // cause all the elements inbetween prev l and r were already bigger than l,
                   // it prevetns negative values
        }
        r++;
    }
    return maxP;
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

    cout << stocks(nums, n);

    return 0;
}
