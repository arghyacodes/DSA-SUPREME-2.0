#include<iostream>
using namespace std;

void evenodd(int a);

int main()
{
    int num;
    cin>>num;
    evenodd(num);
    return 0;
}

void evenodd(int a){
    if (a & 1==1)
    {
        cout<<"The Number is Odd"<<endl;
    }
    else {
        cout<<"The Number is Even"<<endl;
    }
}