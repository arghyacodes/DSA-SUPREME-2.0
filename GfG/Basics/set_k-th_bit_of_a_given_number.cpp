/*
Given a number N and a value K. From the right, set the Kth bit in the binary representation of N.
 The position of Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on.
*/


#include<iostream>
using namespace std;

int set_bit(int n, int k);


int main()
{
    int n, k;
    cout<<"enter number"<<endl;
    cin>>n;

    cout<<"enter k th bit"<<endl;
    cin>>k;

    int ans = set_bit(n, k);
    cout<<"Output is "<<ans<<endl;
    return ans;
}

int set_bit(int n, int k)
{
    int musk = (1<<k);
    return (n | musk);
}