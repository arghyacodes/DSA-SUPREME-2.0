// leetcode #75

/*
void sortColors(vector<int>& nums) {
        int n = nums.size();
        int temp;
        for (int i = 0, index = 0, j = n - 1; index <= j;) {
            if (nums[index] == 1) {
                index++;
            } else if (nums[index] == 0) {
                temp = nums[i];
                nums[i] = nums[index];
                nums[index] = temp;
                i++;
                index++;
            } else if (nums[index] == 2) {
                temp = nums[j];
                nums[j] = nums[index];
                nums[index] = temp;
                j--;
            }
        }
    }
*/