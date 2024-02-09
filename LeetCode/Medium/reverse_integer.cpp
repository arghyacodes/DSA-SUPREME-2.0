/*
Given a signed 32-bit integer x, return x with its digits reversed.
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/

#include <iostream>
using namespace std;

int reverse_integer(int x);

int main()
{
    int x;
    cin >> x;
    int ans = reverse_integer(x);
    cout << ans;
    return ans;
}

int reverse_integer(int x)
{
    int result = 0, bit = 0;
    bool isNeg = false;
    if (x <= INT32_MIN) // VVIP
    {
        return 0;
    }

    if (x < 0)
    {
        isNeg = true; // VVIP
        x = -x;
    }
    while (x > 0)
    {
        if (result > INT32_MAX / 10) // VVIP
        {
            return 0;
        }
        bit = (x % 10);
        result = result * 10 + bit;
        x = x / 10;
    }
    if (isNeg == true)
    {
        result = -result;
    }
    return result;
}