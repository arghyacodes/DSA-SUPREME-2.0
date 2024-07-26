/*
    when one child inherits properties from multiple parent classes
    People -> Student <-Subjects
*/
#include<bits/stdc++.h>
using namespace std;

class Person{
public:
string name;
int age;
};

class Subjects{
public:
string sub1;
string sub2;
string sub3;
};

class Students : public Person, public Subjects{
public:

    void studentInfo()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<sub1<<endl;
        cout<<sub2<<endl;
        cout<<sub3<<endl;
    }
};

int main()
{
    Students s1;
    s1.name = "abcd";
    s1.age = 20;
    s1.sub1="P";
    s1.sub2 = "C";
    s1.sub3 = "M";

    s1.studentInfo();
    return 0;
}