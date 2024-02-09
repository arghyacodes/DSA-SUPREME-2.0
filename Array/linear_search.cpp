#include <iostream>
using namespace std;

int main()
{
    int key;
    bool flag = 0;
    cout << "Enter search element" << endl;
    cin >> key;

    int arr[] = {10, 20, 25, 30, 40, 50, 60};

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            // cout << "Element found" << endl;
            break;
        }
        // cout<<flag<<endl;
    }

    if (flag == 1)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}