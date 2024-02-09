#include <iostream>
using namespace std;

int main()
{
    int arr[2][2] = {
        {10, 20},
        {30, 40}};
    int row = 2, col = 2;
    int key;
    bool found = 0;
    cout << "enter key\n";
    cin >> key;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                found = 1;
            }
        }
    }
    if (found == 1)
    {
        cout<<"key found\n";
    }
    else{
        cout<<"key not found\n";
    }
    
    cout << "printing the array\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}