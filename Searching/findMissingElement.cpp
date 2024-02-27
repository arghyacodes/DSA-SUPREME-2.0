#include <iostream>
using namespace std;

int missingElement(int arr[], int len);

int main()
{
    int sampleArray[] = {1, 2, 3, 4, 6, 7, 8,9};
    int ans = missingElement(sampleArray, 9);
    cout << "Missing element is " << (ans + 1) << endl;
    return 0;
}

int missingElement(int arr[], int len)
{
    int start = 0, end = len - 1, mid, miss = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if ((arr[mid] - mid) == 1)
        {
            start = mid + 1;
        }
        else if ((arr[mid] - mid) > 1)
        {
            miss = mid;
            end = mid - 1;
        }
    }
    return miss;
}