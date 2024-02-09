#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    cout<<"The array is\n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

/*
    //Reversing using while loop
    int left = 0;
    int right = size - 1;
    int i = 0;
    while (right>=left)
    {
        int temp = 0;
        temp = arr[left];
        arr[left] =  arr[right];
        arr[right] = temp;
        left ++;
        right --;
    }
*/
/*
    //Reversing using for loop
    for (int right = size - 1, left =0; right >= left; right--, left++)
    {
        int temp = 0;
        temp = arr[left];
        arr[left] =  arr[right];
        arr[right] = temp;
    }
*/   

    // cout<<"\n Reversed Array is\n";
    
    //    for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    //extreme print in an array
    cout<<"\nExtrema print in array"<<endl;
    for (int right = size - 1, left =0; right >= left;)
    {
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
        left++;
        right--;
    }
    return 0;
}