#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int> &nums, int n)
{
    int i = 0;
    int j = 1;
    int sngl = nums[0];
    while (i < j && j < n)
    {
        if (nums[j] != nums[i])
        {
            sngl = nums[i];
            break;
        }
        else
        {
            i = i + 2;
            j = j + 2;
        }
        return nums.back();
        // else {
        //     i++;
        // }
    }
    // return n == 1 ?  nums[i] : sngl;
    return sngl;
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

    cout << singleNonDuplicate(nums, n);

    return 0;
}