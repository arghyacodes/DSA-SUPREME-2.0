#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<long long int> &arr, long long int n, long long int m, long long int mid)
{
    int len = 0;
    for (long long int i = 0; i < n; i++)
    {
        if (arr[i] - mid >= 0)
        {
            len += (arr[i] - mid);
        }
        if (len >= m)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    long long int n;
    cout << "Enter Number of trees\n";
    cin >> n;
    long long int m;
    cout << "Enter wood requirement\n";
    cin >> m;
    vector<long long int> arr(n);
    cout << "Enter length of trees\n";
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long int start = 0, end = arr[n - 1];
    long long int ans = -1;
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout <<"Max height of saw is "<< ans;

    return 0;
}