#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;
    cin>>n;
    factorial(n);
    return 0;
}

int factorial(int n){
    int ans = 1;
    for (int i = n; i >= 1; i--)
    {
        ans = (ans * i);
    }
    cout<<"value of factorial is "<<ans<<endl;
}