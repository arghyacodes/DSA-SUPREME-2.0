#include<iostream>
using namespace std;

int main()
{
    double a = 12.0004;
    double b = 12.00039;
    if(b<a)
    {
        cout<<b/4;
    }
    else
    {
        cout<<"false";
    }
    return 0;
}