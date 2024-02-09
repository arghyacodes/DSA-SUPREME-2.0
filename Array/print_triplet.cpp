#include<iostream>
using namespace std;

void arrayPair(int arr[], int n);

int main()
{
    int array[] = {10, 20, 30, 40};
    int n = 4;
    arrayPair(array, n);
    return 0;
}

void arrayPair(int arr[], int n)
{
    cout<<"Array triplets are :- \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout<<arr[k]<<" "<<arr[j]<<" "<<arr[i]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}