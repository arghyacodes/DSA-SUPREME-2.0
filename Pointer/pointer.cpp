#include<bits/stdc++.h>
using namespace std;
int main()
{
    int * ptr = new int;
    void * voidPtr = ptr;
    int * intPtr = static_cast<int *>(voidPtr);
    *intPtr = 100;
    cout<<"value of ptr : "<<*ptr;
    return 0;
}