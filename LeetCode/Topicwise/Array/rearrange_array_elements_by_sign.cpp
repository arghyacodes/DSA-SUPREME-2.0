//leetcode #2149

/*
vector<int> rearrangeArray(vector<int>& nums) {
       int n = nums.size();
       vector<int> plus;
       vector<int> minus;

       for(int i = 0 ; i<n ; i++)
       {
           if(nums[i]>=0)
           {
               plus.push_back(nums[i]);
           }
           else
           {
               minus.push_back(nums[i]);
           }
       }
        vector<int> ans;
       for(int i = 0; i<n/2; i++)
       {
           ans.push_back(plus[i]);
           ans.push_back(minus[i]);
       }
       plus.clear();
       minus.clear();
       return ans; 
    }
*/