#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<pair<int,int>>& a, int n, int m, int mid)
{
	int dateCounter = 0;
	for(int i = 0; i<m; i++)
	{
		int time = 0, t = a[i].first + a[i].second;
		while(true)
		{
			if(time + t <= mid)
			{
				dateCounter++;
				time += t;
			}
			else
			{
				break;
			}
		}
		if(dateCounter >= n)
		{
			return true;
		}
	}
	return false;
}
int main() {
	int n, m;
	cin>>n;//no of dates
	cin>>m;//no of date setter
	vector<pair<int, int>>a(m);
	for(int i = 0; i<m; i++)
	{
		int temp = 0;
		cin>>temp;
		a[i].first = temp;
		cin>>temp;
		a[i].second = temp;
	}
	int start = 0, end = 10000000, ans = -1;
	while(start<=end)
	{
		int mid = start + (end - start)/2;
		if(isPossible(a, n, m, mid))
		{
			ans = mid;
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	cout<<ans;
	return 0;
}