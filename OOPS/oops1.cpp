#include<bits/stdc++.h>
using namespace std;
/*
4 Pillars of OOPS 1> Encaptulation, 2> Abstraction, 3> Inheritance, 4> Polymorphism

1> Encaptulation - Creating class and declaring properties and member functions/methods is encaptulation [Wrapping up data and methods in a single unit]
    * used in data hiding - make sensitive data private
*/
//Class



class Teacher{
    //properties / attributes

    /*
    There are three access modifiers from where we can define from where we can access properties/methods of the class

    1> private - data and methods are accessible inside the class (default in c++)

    2> public - data and methods are accessible to everyone

    3> protected - data and methods are accessible inside class and to its derived class

    */
private:    //all props and methods after this will be private
    string subject;

public: //all methods or properties after this will be public
    string name;
    string department;
    double salary;
    
    //methods - methods are functions for classes or objects
    //these are also called member functions
    void salaryIncrement(int increment){
        salary += increment;
    }

    void changeDept(string newDept)
    {
        department = newDept;
    }
//These are special functions to give limited access to the private properties in main or other functions
    //setter -> sets private values
    void setSubject(string s)
    {
        subject = s;
    }
    //getter -> to get private values
    string getSubject()
    {
        return subject;
    }
};




class Account{
private:       //data hiding
    string password;
    double accBalance;

public:
    string accNo;
    string userId;
    string branch;
    
    Account()   //non-parameterised
    {
        //first step when a object is created
        cout<<"Hi I am constructor\n";
        branch = "Tarakeswar";
    }
    
   Account(string ac, string userId)   //parameterised constructor
   {
        branch = "Tarakeswar";
        accNo = ac;
        //this indicates current object "this->userId" means userId of object "userId" means parameter of the constructor
        //"this" is a special pointer which points the memory location of that object
        this->userId = userId;
   }
   
    Account(Account &originalObject)   //copy constructor
    {
        //this copy constructor doesn't create another copy of object rather it is pass by reference for an object

        //any change in the "originalObject" will be reflected to the object that is created with this copy constructor

        //copy is of 2 types -> 1> shallow copy and 2> deep copy

        // shallow -> copies all member values from one object to other, works fine when memory is allocated statically but creates problem when memory is allocated dynamically in a class

        //deep -> 
        cout<<"I am custom copy constructor\n";
        this->accNo = originalObject.accNo;
        this->userId = originalObject.userId;
    }

   void accInfo()
   {
    cout<<(*this).accNo<<endl;//(*this).property is written as this->property for convineance
    cout<<userId<<endl;
    cout<<branch<<endl;
   }
};




class Student{

};

int main()
{
    /*
    //objects
    Teacher t1;
    // Teacher t2;
    // Teacher t3;
    // Teacher t4;

    //accessing properties or methods of object
    t1.name = "ram";
    // t1.subject = "physics";//private property cannot accessed outside class directly
    t1.setSubject("Physics");
    t1.department = "Science";
    t1.salary = 25000;

    //
    cout<<t1.name<<endl;
    cout<<t1.getSubject();
    */

   /*
   constructor initialize objects
   *    class doesn't take any significant space in memory but when constructor creates object memory is allocated to that object

   *    name of constructor is same as of the class and have no return type

   *    constructor is called once during creating object thereafter it cannot be called again

   *    always declared public as it is essential for creating object in main func.

   *    memory is allocated when constructor is called

   *    3 types - 1> non-parameterised, 2> parameterised, 3> copy constructor

   *    there maybe multiple constructors in a class that is known as "constructor overloading"

   *    copy constructor copies the properties of a object to another (there is a default copy constructor in c++) (copies an object)

   */

   Account a1;  //constructor is called automatically(if not called by the user) by c++ everytime a new object is created
    a1.accNo = "43631011110000"; //for non-parameterised
    a1.userId = "bkid0004336";
    // cout<<a1.accNo<<endl;
    // cout<<a1.userId<<endl;

    Account a2("436310110006336", "bkid0004363");
    // a2.accInfo();
    // a1.accInfo();
    //copy constructor
    Account a3(a2);
    a3.accInfo();
    return 0;
}