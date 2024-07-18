//leetcode #189


//This approach passed all the test cases
/*
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int newIndex = (i + k) % n;
        arr[newIndex] = nums[i];
    }
    nums = arr;
}
*/
//--------------------------------------------------------------
/*
//This could not pass all the test cases

void rotate(vector<int>& nums, int k) {
        if (k > 0) {
            int n = nums.size();
            int temp[k];
            for (int i = 0; i < k; i++) {
                temp[i] = nums[n - k + i];
            }
            for (int j = n - 1; j >= k; j--) {
                nums[j] = nums[j - k];
            }
            for (int j = 0; j < k; j++) {
                nums[j] = temp[j];
            }
        }
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4,5};
    int k = 3;
    int n = arr.size();
    vector<int> ans;
    return 0;
}