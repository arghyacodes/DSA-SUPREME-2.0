#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10, k;
    cout << "How much do you want to shift ?\n";
    cin >> k;

    cout << "the array before shifting\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[n - k + i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - k];
    }

    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }

    cout << "\nthe array after shifting\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}