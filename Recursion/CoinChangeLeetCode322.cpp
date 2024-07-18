#include<bits/stdc++.h>
using namespace std;
int coinChange(vector<int>& coins, int amount);
bool flag(int a, int b)
{
    return (b>a);
}
int counter(vector<int>& coins, int amount)
{
    if(amount == 0)return 0;
    int minCoin = INT_MAX;
    int ans = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int coin = coins[i];

        if(coin<=amount)
        {
            int recAns = coinChange(coins, amount - coin);
            if(recAns != INT_MAX) ans = 1 + recAns;
        }
        minCoin = min(minCoin, ans);
    }
    return minCoin;
}
int coinChange(vector<int>& coins, int amount)
{
    int ans = counter(coins, amount);
    if(ans == INT_MAX)return -1;
}
int main()
{
    vector<int> coins = {1,2,5};
    sort(coins.begin(), coins.end(), flag);
    int amount = 33;
    int ans = coinChange(coins, amount);
    cout<<"Minimum no of coin is "<<ans<<endl;
    return 0;
}