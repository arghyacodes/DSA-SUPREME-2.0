// leetcode #2643

/*
vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxOne = 0;
        int row = 0;

        for (int i = 0; i < mat.size(); i++) {
            int oneCount = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    oneCount++;
                }
            }
            if (oneCount > maxOne) {
                maxOne = oneCount;
                row = i;
            }
        }
        vector<int> ans;
        ans.push_back(row);
        ans.push_back(maxOne);
        return ans;
    }
*/