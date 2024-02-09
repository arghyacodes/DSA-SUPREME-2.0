#include <iostream>
using namespace std;



int main()
{
    int arr[] = {1, 0, 0, 1, 1, 0, 1, 1};
    int n = 8;

    cout << "The array before sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    //****** method 1 *******

    // for (int i = 0, j = (n-1); j>=i ; i++, j--)
    // {
    //     if (arr[i] == 1 && arr[j] == 0)
    //     {
    //         int temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
    //     }
    // }


    //****** method 2 ******

    int zeroes = 0, ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            zeroes++;
        }
        else if (arr[i] = 1)
        {
            ones++;
        }  
    }
    

    int i = n;
    while(i--)  //loop runs until i becomes 0
    {
        if (i<zeroes)
        {
            arr[i] = 0;
        }
        else if (i>zeroes)
        {
            arr[i] = 1;
        }
    }
    cout << "\nThe array after sorting\n";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}