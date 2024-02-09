#include <iostream>
using namespace std;

int main()
{
    
     int sum =0;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    //doubled array

    // for (int i = 0; i < 10; i++)
    // {
    //     arr[i] = 2 * arr[i];
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout<<endl;

    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    
    cout<<"sum is "<<sum;
    return 0;
}