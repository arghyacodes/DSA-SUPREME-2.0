#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int temp = arr[n-1];

    cout << "array before shifting is \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = n-1 ;i>0;i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    
    cout << "\narray after shifting is \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}