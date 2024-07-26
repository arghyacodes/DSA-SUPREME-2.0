#include<bits/stdc++.h>
using namespace std;

class Students{
    public:
    string name;
    float* cgpaPointer; //storing cgpa dynamically to show deep copy

    Students(string name, double cgpa)
    {
        this->name = name;
        cgpaPointer = new float;//cgpaPointer got memory location in heap
        *cgpaPointer = cgpa;
    }

    //deep copy constructor
    /*
    Students(Students &obj)
    {
        this->name = obj.name;
        cgpaPointer = new float;
        *cgpaPointer = *obj.cgpaPointer;
    }
    */
    void studentInfo()
    {
        cout<<"name : "<<name<<"\ncgpa : "<<*cgpaPointer<<endl;
    }

    //destructor - deallocates memory allocated to objects there is a default destructor in c++ which deallocates memory after the main function ends this default destructor only works with statically allocated memory

    //destructor
    ~Students()
    {
        cout<<"I am destructor and I am deleting everything automatically";
        delete cgpaPointer;//as dynamically allocated memory is not deleted automatically(if not done it could lead to memory leak)
    }
};

int main()
{
    Students s1("Ram kumar",8.696);
    s1.studentInfo();
    // Students s2(s1);//Ram Sharma
    //this is shallow copy so when we update data of one object that change is reflected to other objects too if memory is dynamically allocated
    //so we have to use deep copy in this scenario but deep copy doesn't comes by default we have to write it
    /*
    *(s2.cgpaPointer) = 9.69;
    s2.name =  "Ram Sharma";
    s1.studentInfo();//no change in data
    s2.studentInfo();
    */
    return 0;
}