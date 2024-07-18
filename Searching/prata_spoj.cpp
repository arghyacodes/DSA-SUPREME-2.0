#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> &arr, int n, int p, int mid)
{
    int prata = 0;
    for (int i = 0; i < n; i++)
    {
        int time = 0, r = arr[i], j = 1;
        while (true)
        {
            if (time + r * j <= mid)
            {
                prata++;
                time += j * r;
                j++;
            }
            else
            {
                break;
            }
        }
        if (prata >= p)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    // cout<<"number of testcases\n";
    cin >> t;
    while (t--)
    {
        int p;
        // cout<<"number of pratas\n";
        cin >> p;
        int c;
        // cout<<"number of cooks\n";
        cin >> c;
        vector<int> arr(c);
        for (int i = 0; i < c; i++)
        {
            cin >> arr[i];
        }
        int ans = -1;
        int highest = *max_element(arr.begin(), arr.end());
        int start = 0, end = highest * (p * (p + 1) / 2);

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (isPossible(arr, c, p, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        cout <<"\n"<< ans;
    }
    return 0;
}