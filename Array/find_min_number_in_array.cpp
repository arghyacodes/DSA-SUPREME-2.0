#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int minNum = INT_MAX;
    int arr[10] = {13,59,76,57,46,200,5,30,2,-512};
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]<minNum)
        {
            minNum = arr[i];
        }
    }

    cout<<"The minimum number is "<<minNum<<endl;
    
    
    return 0;
}