#include <iostream>
using namespace std;

int main()
{
    int arr[][2] =
        {
            {1, 2},
            {3, 4}};

    int row = 2, col = 2;

    cout << "original matrix is\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // transpose matrix;
    for (int i = 0; i < row; i++)
    {
    int temp = 0;
        for (int j = i; j < col; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout << "transposed matrix is\n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}