#include<iostream>
using namespace std;

void arrayPair(int arr[], int n);

int main()
{
    int array[] = {10, 20, 30};
    int n = 3;
    arrayPair(array, n);
    return 0;
}

void arrayPair(int arr[], int n)
{
    cout<<"Pair Sum is :- \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<(arr[j] + arr[i])<<"\t";
        }
        cout<<endl;
    }
}