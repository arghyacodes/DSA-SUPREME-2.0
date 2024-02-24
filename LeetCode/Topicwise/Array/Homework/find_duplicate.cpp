// Leetcode Problem #287
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Lakshay Bhaiya
    /*
        int findDuplicate(vector<int>& nums) {
        while(nums[0] != nums[nums[0]])
        {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
    */

    // My solution
    /*
    vector<int> nums = {1,3,4,2,2};
    int n = nums.size();
    int sum_with_duplicate = 0;
    for (int i = 0; i < n; i++)
    {
        sum_with_duplicate += nums[i];
    }
    cout<<sum_with_duplicate<<endl;

    int sum = (n * (n - 1)) / 2;
    cout<<sum<<endl;

    int duplicate = sum_with_duplicate - sum;
    cout<<duplicate;
    return 0;
    */
}
