#include<iostream>
#include<vector>
using namespace std;

// void print2DArray(int arr[][4], int row, int col);

void print2DArray(int arr[][4], int row, int col)
{
    //row wise access
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


    // // column wise access
    // for (int i = 0; i < col; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<"\n";
    // }
    
}

int main()
{
    int arr[3][4];
    //  = {
    //     {10,15,20,25},
    //     {30,55,35,40},
    //     {45,50,75,60}
    // };

    //take 2d array from input
    int row = 3, col = 4;
    //this is row wise input we can also take input column wise
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int temp;
            cin>>temp;
            arr[i][j] = temp;
        }
        
    }
    


    // cout<<"array of position 2-2 is "<<arr[2][2];
    print2DArray(arr, row, col);

    return 0;
}

