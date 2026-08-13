#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums, int n)
{
    unordered_set<int> st;
    int maxSeq = 1;
    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int currSeq = 1;
            int x = it;

            while (st.find(x + 1) != st.end())
            {
                x++;
                currSeq++;
            }
            maxSeq = max(currSeq, maxSeq);
        }
    }
    return n != 0 ? maxSeq : 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n - 1);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << longestConsecutive(nums, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << nums[i] << " ";
    // }

    return 0;
}
