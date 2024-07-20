#include<bits/stdc++.h>
using namespace std;
void pos(string &s, int i)
{
    string copy = s;
    if(i>=s.length())
    {
        cout<<s<<"  ";
        return;
    }
    for(int j = i; j<s.length(); j++)
    {
        swap(s[i], s[j]);
        //recursion
        pos(s, i+1);
        //backtracking
        swap(s[i], s[j]);
    }
}
int main()
{
   string s = "abc";
   int i = 0;
   pos(s,i);
   return 0;
}