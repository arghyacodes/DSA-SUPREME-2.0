#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;

    string str;
    str.push_back(1 + '0');
    // vector<int> ans(1, 1);
    int i = 2, cy = 0;
    while (i <= n)
    {
        for (int j = 0; j < str.size(); j++)
        {
            int x = (str[j] - '0')* i + cy; // digit by digit multipication
            str[j] = ((x % 10) + '0');      // store single digit in a index
            cy = x / 10;
        }
        while (cy) // to store multiple digited carry
        {
            str.push_back((cy % 10)+ '0');
            cy = cy / 10;
        }
        i++;
    }
    reverse(str.begin(), str.end()); // reverse the array as calculation in array is done in reverse indexes

    for(auto x : str)
    {
        cout<<(x - '0');
    }
    return 0;
}