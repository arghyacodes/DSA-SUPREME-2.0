#include<bits/stdc++.h>
using namespace std;
int vec2num(vector<int>& nums, int index, int ans)
{
    //base case
    if(index == nums.size()) return ans;
    //pre processing
    ans = (ans * 10) + nums[index];
    //recursion call
    vec2num(nums, ++index, ans);
}
int main()
{
    vector<int> nums = {4,2,1,7};
    int ans = vec2num(nums, 0, 0);
    cout<<ans<<endl;
    return 0;
}