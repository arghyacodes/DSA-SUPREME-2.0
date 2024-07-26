/*
    Student <- Person -> Teacher
*/
#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
};

class Student:public Person{
    public:
    float cgpa;
};

class Teacher:public Person{
    public:
    double salary;
};

int main()
{
    return 0;
}