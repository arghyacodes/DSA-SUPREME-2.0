#include<bits/stdc++.h>
using namespace std;
/*
poly --> multiple, morph --> form
****Polymorphism - ability of objects to take multiple forms or behaviour depending on the context in which they are used

1> Compile Time Polymorphism (eg - constructor overloading, function overloading, operator overloading)

2> Runtime Polymorphism (function overriding)

function overriding - If both parent and child class has same function with different implementation then parent class function is said to be overriden (function of child class gets more priority)
*/

class Student{
    public:
    /*
    //constructor overloading
    Student()
    {
        cout<<"Non parameterized constructor\n";
    }
    Student(string name)
    {
        this->name = name;
        cout<<"Parameterised constructor\n";
    }
    string name;
    int age;
    */

   /*
    //function overloading
    void printData(int age)
    {
        cout<<"Roll is "<<age<<endl;
    }

    void printData(char ch)
    {
        cout<<"Name is "<<ch<<endl;
    }
    */

   /*
   //Function Overriding

   void funcOne()
   {
    cout<<"Parent";
   }
    */
   virtual void funcTwo(){
        cout<<"Parent\n";
   }
};

class Grad : public Student{
    public:
    /*
    void funcOne()
    {
        cout<<"Child";  //override
    }
    */

   void funcTwo(){
        cout<<"Child\n";   //virtual
   }
};

int main()
{
    // Student s1;

    // s1.printData(24);

    Grad g1;

    g1.funcTwo();

    return 0;
}