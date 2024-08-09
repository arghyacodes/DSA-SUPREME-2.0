#include<bits/stdc++.h>
using namespace std;
/*
Abstraction - Hiding all unnecessary details and showing only the important parts
    use of access modifiers in a class is a way to implement abstraction
    ** abstract classes are used to provide a base class from which other classes can be derived
    ** we can not create objects of abstract class (objects can not be instantiated)
    ** Abstract classes are typically used to define an interface of derived classes
*/

class Shape{    //Class with Pure virtual function are by default Abstract class
    virtual void draw() = 0;    //Pure virtual function
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"Drawing a Circle\n";
    }
};

int main()
{
    // Shape s1;   //cannot declare variable 's1' to be of abstract type 'Shape'
    Circle c1;
    c1.draw();
    return 0;
}