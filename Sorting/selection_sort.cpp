#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" \t";
    }
}

void selectionSort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
    int min = arr[i];
     for (int j = i; j < len; j++)
     {
        if (arr[j] < min)
        {
            min = arr[j];
        } 
     }
    swap(arr[i], min);
    }
}

int main()
{
    int arr[] = {1, 10, 4, 8, 5, 7};
    int len = 6;
    cout<<"Array before sorting\n";
    printArray(arr, len);
    selectionSort (arr, len);
    cout<<"Array after sorting\n";
    printArray(arr, len);
    return 0;
}