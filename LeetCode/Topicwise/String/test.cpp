/*
class Solution {
public:

    vector<int> hash(string x)
    {
        vector<int>hash 
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        vector<vector<string>>ans;
        if(strs.length()==0)
        {
            return ans;
        }
        else if(strs.length()==1)
        {
            ans.push_back(strs);
            return ans;
        }
        for(int i = 0; i<strs.size(); i++)
        {
            vector<string> temp;
            while(strs[i+1]==strs[i])
            {

            }
        }
    }
};
*/

/*
class Solution {
public:
    vector<int> hash(string x)
    {
        vector<int>hash(256,0);
        for(int i = 0; i<x.length(); i++)
        {
            char ch = x[i];
            hash[ch]++;
        }
        return hash;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        int done[10001] = {0};
        vector<vector<string>> ans;
        sort(strs.begin(), strs.end());
        for(int i = 0; i<n; i++)
        {
            vector<string> tempAns;
            string cur = strs[i];
            vector<int>reference = hash(cur);
            for(int j = i; j<n; j++)
            {
                int marker = done[j];
                string temp = strs[j];
                if(marker==0)
                {
                    vector<int>current = hash(temp);
                    if(current == reference)
                    {
                        tempAns.push_back(temp);
                        done[j] = 1;
                    }
                }
            }
            if(tempAns.size()>0) ans.push_back(tempAns);
        }
        return ans;
    }
};
*/