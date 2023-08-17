/*
    a) Method Overloading
    b) Method Overriding
    c) Method Hiding
*/

#include<iostream>
using namespace std;

class RBI
{
    public:
    void insurance() {cout<<"Parent Class"<<endl;}
    void funding() {cout<<"Mai Basti Ka Hasti Bro!!"<<endl;}
};
class HDFC : public RBI
{
    public:
    void insurance() {cout<<"Child Class"<<endl;}
    void funding(int x){cout<<"Ab sab kalti lo !!"<<endl;} // Method Hiding
    void car_loan(){}
};

/*
    Method Overriding redefines a function of the base class inside the derived class,
    which overrides the base class function.

    Q : But How can we access it from child class object ?


    Q : Difference between Method Overridng and Method Hiding ?

    A : In this case the Derived class creates its own method that has the exact
        same signature as the Base class method. It has the exact same name, returned
        value, arguments (parameters list), const / non-const declaration, etc.


    A : In this case the Derived class creates its own method that has the same name as the Base class method.
        Yet, its signature is different! I.e. the return value is different, or the arguments, or both, etc.



    In C++, function overloading is possible i.e., two or more functions from the same class
    can have the same name but different parameters.
    
    However, if a derived class redefines 
    the base class member method then all the base class methods with the same name become 
    hidden in the derived class.
*/

int main()
{
    HDFC user1;
    user1.insurance();
    user1.funding(4);  // Method Hiding

    /*
        user1.funding(); 

        This will give error bcz the caller object of child class find "funding(int)"   
        This will not call parent class function !!
    */



    return 0;
}