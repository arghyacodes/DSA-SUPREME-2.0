#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2,2,1};
    int n = nums.size();
    sort(nums.begin(), nums.end());
    if (n == 1)
    {
        return nums[0];
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                i++;
            }
            else
            {
                cout<<nums[i - 1];
            }
        }
        if (nums[n - 1] != nums[n - 2])
        {
            cout<<nums[n - 1];
        }
    }
}