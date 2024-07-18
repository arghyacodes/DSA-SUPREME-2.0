#include<iostream>
#include<vector>
using namespace std;
vector<int> findTwoElement(vector<int> arr, int n) {
        for(int i = 0; i<n; i++)
        {
            int index = abs(arr[i]);
            if(arr[index-1]>0)
            {
                arr[index-1] *= -1;//Mark as visited
            }
        }
        for(int i = 0; i<n; i++)
        {
            cout<<arr[i]<<"\t";
        }
        vector<int> ans;
        for(int i = 0; i<n; i++)
        {
            if(arr[i]>0)
            {
                cout<<(arr[i]);//Duplicate Element
                cout<<(i+1);//Missing Element
            }
        }
        return ans;
    }

int main()
{
    vector<int> arr= {1,2,3,4,4,5};
    findTwoElement(arr, 6);
}