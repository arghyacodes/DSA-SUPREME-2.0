#include<bits/stdc++.h>
using namespace std;
int robbery(vector<int>& nums, int size, int index)
{
    if(index>=size)return 0;//chori krne k liye ghar nhi bache
    //i th ghar pe chori karo
    int chori1 = nums[index] + robbery(nums, size, index + 2);
    //i th ghar pe chori mat kro
    int chori2 = 0 + robbery(nums,size,index+1);

    int ans = max(chori1, chori2);
}
int rob(vector<int>& nums)
{
    int size = nums.size();
    int ans = robbery(nums, size, 0);
}
int main()
{
    vector<int>nums = {2,7,9,3,1};
    int ans = rob(nums);
    cout<<ans;
    return 0;
}