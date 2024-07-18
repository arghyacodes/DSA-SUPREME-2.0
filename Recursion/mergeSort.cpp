#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int s, int e)
{
    //divide into two
    int mid = s + (e-s)/2;
    int leftSize = mid - s + 1;
    int rightSize = e - mid;

    int* left = new int[leftSize];
    int* right = new int[rightSize];

    int k = s;
    for(int i = 0; i<leftSize; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for(int j = 0; j<rightSize; j++)
    {
        right[j] = arr[k];
        k++;
    }

    //merge
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = 0;

    while(leftIndex<leftSize && rightIndex <rightSize)
    {
        if(left[leftIndex]<right[rightIndex])
        {
            arr[mainIndex] = left[leftIndex];
            leftIndex++; mainIndex++;
        }
        else
        {
            arr[mainIndex] = right[rightIndex];
            rightIndex++; mainIndex++;
        }
    }

    while(leftIndex<leftSize)
    {
        arr[mainIndex] = left[leftIndex];
        leftIndex++; mainIndex++;
    }

    while(rightIndex<rightSize)
    {
        arr[mainIndex] = right[rightIndex];
        rightIndex++; mainIndex++;
    }
    delete[] left;
    delete[] right;
}
void mergeSort(int arr[], int s, int e)
{
    //base case
    if(s>=e)return;
    int mid = s + (e-s)/2;
    //recursion call for left
    mergeSort(arr, s, mid);
    //recursion call for right
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);
}
int main()
{
    int arr[6] = {2,1,6,9,4,5};
    int end = (sizeof(arr)/sizeof(int))-1;
    cout<<"Array before merge sort\n";
    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    mergeSort(arr, 0, end);
    cout<<"Array after merge sort\n";
    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    return 0;
}