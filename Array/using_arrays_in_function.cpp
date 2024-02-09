#include<iostream>
using namespace std;

int sumArray(int arr[], int size);

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<" ";
    }
    
    int ans = sumArray(array,5);
    cout<<"\nSum of array is "<<ans<<endl;
    return 0;
}

int sumArray(int arr[] , int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}