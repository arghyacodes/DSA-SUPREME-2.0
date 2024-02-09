#include<iostream>
using namespace std;

void count(int arr[], int count);

int main()
{
    int bitStream[7] = {1, 0, 1, 1, 1, 0, 0};
    for (int i = 0; i < 7; i++)
    {
        cout<<bitStream[i]<<" ";
    }
    cout<<endl;

    count(bitStream, 7);
    return 0;
}

void count(int arr[], int count)
{
    int one = 0, zero = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == 1)
        {
            one ++;
        }
        else if (arr[i] == 0)
        {
            zero ++;
        }
    }
    cout<<"Number of ones is "<<one<<" and number of zeroes is "<<zero;
}