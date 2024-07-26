/*
Inheritance - when properties and member functionsof base class are passed on to the derived class

This increases code reusability

In case of inheritance the parent constructor is formed first then child constructor is created

Destructor is called first for child then for parent object

mode of inheritance - private, protected, public

private members and properties of parent class can not be inherited

***members and properties are made protected just to inherit them (can be accessed from parent and child classes can't be accessed from main)

protected members are inherited as private become private member of child class
                                    protected-----protected--------------------
                                    public--------protected--------------------
                            
public mrmbers are inherited as private become private in child class
                                protected-----protected--------------
                                public--------public-----------------


*/

#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string name;
    int age;

    // Person()
    // {
    //    cout<<"Parent Constructor\n";
    //     // this->name = name;
    //     // this->age = age;
    // }

    Person(string name, int age){
        this->name = name;
        this->age = age;
        cout<<"Parent constructor\n";
    }

    // void getInfo()
    // {
    //     cout<<name<<"   "<<age<<" years"<<endl;
    // }
    ~Person()
    {
        cout<<"Parent Destructor\n";
    }
};
/*
class Student : public Person{  //inheritance constructor call for non parameterised constructor
    //name, age, roll no.
    public :
    Student()
    {
        cout<<"Child Constructor\n";
    }


    int rollNo;

    void studentInfo()
    {
        cout<<"name - "<<name<<endl;
        cout<<"age - "<<age<<endl;
        cout<<"Roll No - "<<rollNo<<endl;
    }
    ~Student()
    {
        cout<<"Child destructor\n";
    }
};
*/
class Staff : public Person{//inheritance with parameterised constructor
    //name, age, salary
public:
    int salary;
    Staff(string name, int age, int salary) : Person(name, age){
        this->salary = salary;
        cout<<"this is child constructor\n";
    }

    void staffInfo()
    {
        cout<<name<<"   "<<age<<"   "<<salary<<endl;
    }
    ~Staff(){
        cout<<"this is child destructor\n";
    }
};


int main()
{
    // Student s1;
    // s1.name = "Raj";
    // s1.age = 21;
    // s1.rollNo = 00113;
    // s1.studentInfo();

    Staff s1("abc",26,25000);
    s1.staffInfo();
    return 0;
}