#include<iostream>
using namespace std;

int getUnique(int arr[], int n);

int main()
{
    int array[] = {10, 20, 30, 40, 50, 40, 30, 20, 10};
    int n = 9;
    int res = getUnique(array, n);
    cout<<"The unique number is : "<<res;
    return 0;
}

int getUnique(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];   //if XOR is done between 0 and a number then the result will be that number
    }                       //if XOR is done between two same numbers then the result will be zero (0)
    
    return ans;
}