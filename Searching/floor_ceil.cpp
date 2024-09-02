#include<bits/stdc++.h>
using namespace std;

void getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor =-1, ceil = -1;
	int start = 0, end = a.size()-1;

	// floor
	while(start<=end)
	{
		int mid = start + (end - start)/2;
		if(a[mid]<=x)
		{
			floor = a[mid];
			start = mid+1;
		}
		else
		{
			end = mid - 1;
		}
	}

	// ceil
	start = 0;
	end = a.size()-1;
	while(start<=end)
	{
		int mid = start + (end - start)/2;
		if(a[mid]>=x)
		{
			ceil = a[mid];
			end = mid-1;
		}
		else
		{
			start = mid + 1;
		}
	}
	pair<int, int> ans(floor, ceil);
	
    cout<<ans.first<<"\t"<<ans.second;
}

int main()
{
    
    vector<int> a = {3,4,7,8,8,10};
    int n = a.size();
    int x = 5;
    getFloorAndCeil(a, n, x);

    return 0;
}