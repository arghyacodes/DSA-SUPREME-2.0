#include <iostream>
using namespace std;

void print_all_digits_of_an_integer(int x);

int main()
{
    int x = 0;
    cin >> x;

    print_all_digits_of_an_integer(x);
    return 0;
}

void print_all_digits_of_an_integer(int x)
{
    cout<<"digits of the number are :-"<<endl;
    while (x > 0)
    {
        int result = x % 10;
        cout << result << endl;
        x = x / 10;
    }
}