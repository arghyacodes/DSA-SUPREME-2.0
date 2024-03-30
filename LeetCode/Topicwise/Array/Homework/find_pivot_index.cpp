// leetcode problem #724

// Bruteforce
/*
int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        for(int index = 0; index<n; index++)
        {
            auto leftSum = 0;
            auto rightSum = 0;
            if(index == 0) leftSum = 0;
            else if(index == n-1) rightSum = 0;
            else
            {
                for(int s = 1; s<index; s++) leftSum = leftSum + nums[s];
                for(int e = n-2; e>index; e--) rightSum = rightSum + nums[e];
            }
            if(rightSum == leftSum) return index;
        }
        return -1;
    }
*/

// Better Approach

/*
int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        else
        {
            int sum = 0;
            for(int i = 0; i<n; i++) sum = sum + nums[i];
            int rightSum = sum;
            int leftSum = 0;
            for(int index = 0; index<n; index++)
            {
                rightSum = rightSum - nums[index];
                if(rightSum == leftSum) return index;
                leftSum = leftSum + nums[index];
            }
        }
        return -1;
    }
*/