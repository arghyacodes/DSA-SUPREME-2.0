#include<iostream>
using namespace std;
int division(int a, int b)
{
    bool isNegA = 0, isNegB = 0;
    if (a < 0)
    {
        isNegA = 1;
        a = -a;
    }
    if (b < 0)
    {
        isNegB = 1;
        b = -b;
    }
    int s = 0, e = a, ans;
    while (s<=e)
    {
        long long int mid = s + (e-s)/2;
        if ((mid * b) == a)
        {
            ans = mid;
            break;
        }
        else if ((mid * b) < a)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        } 
    }
    if ((isNegA^isNegB) == 1)
    {
        return -ans;
    }
    else
    {
        return ans;
    }
}
int main()
{
    int a , b;
    cout<<"Enter Dividend"<<endl;
    cin>>a;
    cout<<"Enter Divisor"<<endl;
    cin>>b;
    int ans = division(a,b);
    cout<<"The quotient is "<<ans;
    return 0;
}