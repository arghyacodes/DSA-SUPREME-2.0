#include<iostream>
using namespace std;

int main()
{
    int arr[]={-23,-7,12,-10,-11,40,60};
    int n = 7;

    cout<<"The Array is\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    int temp;
    for (int i = 0,j = n-1; i <=j;)
    {
        if (arr[i]>0)
        {
            if (arr[j]<0)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }
        else
        {
            i++;
        }
        
    }

    cout<<"\nThe Array after sorting is\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}