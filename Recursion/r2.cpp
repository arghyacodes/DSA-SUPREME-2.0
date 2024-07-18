#include<bits/stdc++.h>
using namespace std;
void digitCounter(vector<int>& digits, int n)
{
    if(n==0)return;
    int digit = n%10;
    digits.push_back(digit);
    digitCounter(digits, n/10);
    cout<<digit<<endl;
}
int main()
{
    int n = 1234;
    vector<int> ans;
    digitCounter(ans, n);
    // for(auto it : ans)
    // {
    //     cout<<it<<endl;
    // }
    return 0;
}