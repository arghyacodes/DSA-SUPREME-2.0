/*
                                    Person
                --------------------------------------------------
            Teacher                                             Student
            |      \                                             |
            |       \                                             |
        Person     Subject                           Grad
*/
#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Teacher : public Person, public Subject{
    public:
    double salary;
};
class Student : public Person{
    public:
    float cgpa;
};
class Grads : public Student{
    public:
    bool isResearcher;
};
class Subject{
    public:
    string subject;
};
int main()
{
    return 0;
}