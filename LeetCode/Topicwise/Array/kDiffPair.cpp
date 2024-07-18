#include<vector>
#include<algorithm>
#include<set>
#include<iostream>
using namespace std;
int main() {
       vector<int> nums = {1,3,1,5,4};
       int k = 0;
       int n = nums.size();
       int counter = 0;
       sort(nums.begin(), nums.end());
       vector<int> arr;
       set<int> st;
       for(int i = 0; i<n; i++)
       {
            st.insert(nums[i]);
       }
       for(auto it = st.begin(); it != st.end(); it++)
       {
        arr.push_back(*it);
        cout<<(*it)<<"\t";
       }
        int s = arr.size();
        cout<<"\n"<<s<<endl;
        int i = 0, j = 0;
        while(i <= s-2)
        {
            if(arr[j]-arr[i] == k)
            {
                counter ++;
                cout<<"counter"<<counter;
                i++;
                if(j<3)
                {
                    j++;
                }
            }
            else if(arr[j]-arr[i] < k)
            {
                if(j<s-1)
                {
                    cout<<"j"<<j;
                    j++;
                }
            }
            else
            {
                cout<<"i"<<i;
                i++;
            }
            if (counter == 2)
            {
                break;
            }
            
        }
        return 0;
    }