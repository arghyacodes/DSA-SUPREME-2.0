#include<iostream>
#include<vector>
using namespace std;
// int array[10000000];
// int sumArray(int arr[], int N){
// 	int sum = 0;
// 	for(int i = 0; i<N; i++)
// 	{
// 		sum = sum + arr[i];
// 	}
// 	return sum;
// }

void fill(string &s, int k)
{
    if(k==0)return;
    int digit = k%10;
    fill(s, k/10);
    s.push_back(digit + '0');
}

int main()
{
    // int n;
    // cin>>n;
    // for(int i = 0; i<n; i++)
    // {
    //     int temp = 0;
    //     cin>>temp;
    //     array[i] = temp;
    // }
    // int ans = sumArray(array, n);
    // cout<<ans;
    int n = 2;
    // string s;
    // s.push_back(i + '0');
    // s.push_back(i + '0');
    // if (s[0]=='1')
    // {
    //     cout<<"yes";
    // }
    
    // cout<<s;
    // for (int j = 1; j < n+1; j++)
    // {
    //     fill(s, j);
    // }
    // cout<<s;
    
    // string s;
    while(n!=0)
    {
    int k = 0;
    cin>>k;
    string s;
    int i = 0;
    int count = 0;
    for(int j = 1; j<=k; j++)
    {
        fill(s, j);
    }
    while(s[i]!=string::npos)
    {
        if (s[i] == '1') {
          if (s[i + 1] == '1' && i < s.length())
            count++;
        }
        i++;
    }
    n--;
    cout<<count;
    }
    return 0;
}



