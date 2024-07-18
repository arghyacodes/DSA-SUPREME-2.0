#include<bits/stdc++.h>
using namespace std;
void subSeq(vector<string>& ans, string temp, string s, int index)
{
    if(index >= s.length())
    {
        ans.push_back(temp);
        return;
    }
    char ch = s[index];
    subSeq(ans, temp, s, ++index);
    temp.push_back(ch);
    subSeq(ans, temp, s, index);
}
int main()
{
    string s = "Thala";
    vector<string> ans;
    subSeq(ans,"", s, 0);
    int i = 1;
    cout<<"Subsequences are :\n";
    for(auto it : ans)
    {
        cout<<i++<<"    "<<it<<endl;
    }
    return 0;
}