int bs(vector<int>& arr, int x)
    {
        int start = 0;
        int mid;
        int end = arr.size() - 1;
        while(start<= end)
        {
            mid = start + (end - start)/2;
            if(arr[mid]==x)
            {
                return mid;
            }
            else if(arr[mid]>x)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return mid;
    }
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int n = arr.size();
        if(k == n)
        {
            for(int i = 0; i<n; i++)
            {
                ans.push_back(arr[i]);
            }
            return ans;
        }
        int closest = bs(arr, x);
        cout<<closest;
        if(closest == n-1)
        {
            cout<<"\n case 3";
            for(int i = 0; i<k; i++)
            {
                ans.push_back(arr[n-1-i]);
            }
        }
        else if(closest == 0)
        {
            cout<<"\n case 2";
            for(int i = closest; i<k; i++)
            {
                ans.push_back(arr[i]);
            }
        }
        else
        {
            cout<<"\n case 1";
            ans.push_back(arr[closest]);
            int i = closest - 1;
            int j = closest + 1;
            while(ans.size()<k)
            {
                if(i > -1 && (abs(abs(arr[i])-x) <=abs(abs(arr[j])-x)))
                {
                    ans.push_back(arr[i]);
                    i--;
                }
                else if(j < n && (abs(abs(arr[i])-x) > abs(abs(arr[j])-x)))
                {
                    ans.push_back(arr[j]);
                    j++;
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }