#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[][2]=
    {
        {20,69},
        {45,-5}
    };
    int row = 2, col = 2;

    //max number from an array
    int temp = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]>temp)
            {
                temp = arr[i][j];
            }
            
        }
        
    }
    cout<<"the max number is "<<temp;

    //row wise sum
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<"\nsum of "<<i+1<<" row is "<<sum;
    }

    //diagonal sum
    int dig_sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==j)
            {
                dig_sum = dig_sum + arr[i][j];
            }
            
        }
    }
    cout<<"\ndiagonal sum is "<<dig_sum;
    
    return 0;
}