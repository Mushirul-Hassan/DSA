#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums, int n)
{
    int count = 1;
    int i = nums[0];
    for (int j = 1; j < n; j++)
    {
        if (count == 0)
        {
            i = nums[j];
            count = 1;
        }
        else if (nums[j] == i)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
   
    return i;
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

    cout << majorityElement(nums, n);

    return 0;
}
