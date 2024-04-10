#include <iostream>
#include <vector>
using namespace std;
int findOddOccurance(vector<int> nums)
{
    int ans = -1;
    int n = nums.size();
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (s == e)
            return s;
        int mid = s + (e - s) / 2;
        if (mid % 2 == 0) // mid -> even
        {
            if (nums[mid] == nums[mid + 1]) // You are before odd occurance
            {
                s = mid + 2;
            }
            else
            {
                e = mid; // You are on odd occurance of after that
            }
        }
        else // mid -> odd
        {
            if (nums[mid] == nums[mid - 1]) // You are before odd occurance
            {
                s = mid + 1;
            }
            else // You are on odd occurance or after odd occurance
            {
                e = mid - 1;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr({20, 20, 10, 50, 50, 40, 40, 60, 60});
    int ans = findOddOccurance(arr);
    cout << ans;
    return 0;
}