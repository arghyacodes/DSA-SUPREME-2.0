#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,4,5,6,9,9};
    bool found;
    found = binary_search(arr.begin(),arr.end(),6);
    cout<<found<<endl;


    int upperBound;
    upperBound= upper_bound(arr.begin(), arr.end(),9) - arr.begin();
    cout<<upperBound<<endl;
    return 0;
}