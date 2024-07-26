/*

*/
#include<bits/stdc++.h>
using namespace std;

//multi level inheritancen : person->student->grads

class Person{
    public:
    string name;
    int age;
};

class Student:public Person{
    public:
    int roll;
};

class Grads:public Student{
    public:
    string researchDomain;

    void getInfo()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll<<endl;
        cout<<researchDomain<<endl;
    }
};
int main()
{
    Grads g1;
    g1.name = "abc";
    g1.age = 27;
    g1.roll= 512;
    g1.researchDomain = "VLSI";

    g1.getInfo();
    return 0;
}