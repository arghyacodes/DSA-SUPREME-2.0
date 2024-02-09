// leetcode #268

/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int res = ((n)*(n+1))/2;

        int i = 0;
        while (i<n) {
            sum = sum + nums[i];
            i++;
        }
        int ans = res - sum;
        return ans;
    }
};
*/