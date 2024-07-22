#include<bits/stdc++.h>
using namespace std;
void subSq(vector<string>& ans, string &temp, int index, string& s)
{
    if(index == s.length())
    {
        ans.push_back(temp);
        // cout<<temp;
        return;
    }
    temp.push_back(s[index]);
    subSq(ans, temp, index+1, s);
    temp.pop_back();
    subSq(ans, temp, index+1, s);
}
int main()
{
    vector<string>ans;
    string s = "312";
    string temp = "";
    subSq(ans, temp, 0, s);
    int i = 0;
    for(auto it : ans)
    {
        cout<<++i<<". "<<it<<endl;
    }
    return 0;
}