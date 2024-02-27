#include<iostream>
using namespace std;

int lastOccurance(int arr[], int len, int key);

int main()
{
    int sampleArray[]= {10,20,30,40,70,70,70,70,90};
    int ans = lastOccurance(sampleArray, 9, 70);
    if (ans == -1)
    {
        cout<<"Element not Found\n";
    }
    else
    cout<<"Last Occurance at index "<<ans<<endl;
    
    return 0;
}

int lastOccurance(int arr[], int len, int key)
{
    int start = 0, end = (len -1), mid, occurance = -1; 
    //occurance is initialized with -1 if no occurance then it will return -1
    while (start<=end)
    {
        mid = start + (end - start)/2 ;
        if (arr[mid] == key)
        {
            occurance = mid; //store current occurance
            start = mid + 1;  //go to right for further occurance
            
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
    return occurance;
    
}