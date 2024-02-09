#include<iostream>
using namespace std;

// int incrementor(int n)   //for call by value
// {
//     n++;
//     return n;
// }

int incrementor(int &n) //for call by reference
{
    n++;
}

int main()
{
    int n = 5;
    cout<<"value of n before function is "<<n<<endl;
    incrementor(n);
    cout<<"value of n after function is "<<n<<endl;
    return 0;
}