#include<bits/stdc++.h>
using namespace std;
void loadEven(int* arr, vector<int>& even, int index, int len)
{
    if(index == len) return;
    else if(!(arr[index]%2))even.push_back(arr[index]);
    loadEven(arr, even, ++index, len);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int len = sizeof(arr)/sizeof(int);
    vector<int> ans;
    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    loadEven(arr, ans, 0, len);
    cout<<endl;
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    return 0;
}