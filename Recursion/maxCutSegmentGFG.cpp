#include<bits/stdc++.h>
using namespace std;
int maximizeTheCuts(int n, int x, int y, int z)
{
    if(n==0) return 0;
    if(n<0) return INT32_MIN;

    int option1 = 1 + maximizeTheCuts(n-x,x,y,z);
    int option2 = 1 + maximizeTheCuts(n-y,x,y,z);
    int option3 = 1 + maximizeTheCuts(n-y,x,y,z);

    int ans = max(option1, max(option2, option3));
    return ans;
}
int main()
{
    int n = 4, x = 2, y = 1, z = 1;
    int ans = maximizeTheCuts(n, x, y, z);
    cout<<ans;
    return 0;
}