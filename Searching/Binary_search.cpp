#include<iostream>
using namespace std;

int binarySearch(int arr[], int len, int key);

int main()
{
    int sampleArray[]= {10,20,30,40,50,60,70,80,90};
    int ans = binarySearch(sampleArray, 9, 60);
    if (ans == -1)
    {
        cout<<"Element not Found\n";
    }
    else
    cout<<"Element found at index "<<ans<<endl;
    
    return 0;
}

int binarySearch(int arr[], int len, int key)
{
    int start = 0, end = (len -1), mid;
    while (start<=end)
    {
        mid = start + (end - start)/2 ;
        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        //key is less so go to left half array
        else if(arr[mid]>key)
        {
            end = mid - 1;
        }
        // key is greater than mid so go to right half array
        else if(arr[mid]<key)
        {
            start = mid + 1;
        }
    }
    return -1;
    
}