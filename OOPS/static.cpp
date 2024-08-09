#include<bits/stdc++.h>
using namespace std;
/*
Static Variables : variables declared as static in a function are created & initialisedonce for the lifetime of the program (in function)

Static variables in a class are created and initialised once. They are shared by all the objects of the class (in class)
*/
/*
static variable
void fun()
{
    static int x = 0;
    cout<<"x is "<<x<<endl;
    x++;
}
*/

class ABC{
    public:
    ABC(){
        cout<<"constructor\n";
    }
    
    ~ABC(){
        cout<<"destructor\n";
    }
};

int main()
{
    /*
    fun();
    fun();
    fun();
    fun();
    */
   /*
   if(true){
    ABC Obj;
    //program flow -
    //constructor
    //destructor
    //End of main function
   }
   */

    if(1){
        static ABC obj;
        /*
        //program flow - 
        constructor
        End of main function
        destructor
        */
    }
   cout<<"End of main function\n";
    return 0;
}