/*https://www.geeksforgeeks.org/problems/key-pair5616/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article */

#include <iostream>
using namespace std;
/*

//My approach could not pass all the test cases 103/187 passed

bool hasArrayTwoCandidates(int arr[], int n, int x) {
        bool keyFound = 0;

        for(int i = 0; i<n ; i++)
        {
            for(int j = i ; j<n; j++)
            {
                if((arr[i]+arr[j])== x)
                {
                    keyFound = 1;
                   break;
                }
            }
        }
        return keyFound;
    }
*/

/*
// bhaiya's approach in this the array is converted into an sorted array then 
// checking sum by two pointer approach

    bool hasArrayTwoCandidates(int arr[], int n, int x) {
        bool keyFound = false;
        // sort array
        sort(arr, arr+n);

        for(int i = 0, j= n-1; i<j;)
        {
            if((arr[i]+arr[j])== x)
            {
                keyFound = true;    //return true if key found
                break;
            }
            else if((arr[i]+arr[j])>x)
            {
                j--;    //decrement right if sum is greater than key
            }
            else if((arr[i]+arr[j])<x)
            {
                i++;    //increment left if sum is less than key
            }
        }
        return keyFound;
    }
*/