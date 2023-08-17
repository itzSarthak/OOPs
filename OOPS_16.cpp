/*
    Abstract Class in C++

        ** A class which can't be instantiate !!
*/

#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    /*
        void fun()=0;

        ** Late Binding of "Do Nothing Function" is Necessary.
    */
    virtual void fun()=0;

    void f1(){}

    /*
        1) We can't create object of a class consisting of "do nothing function" !!
        2) To access the attributes of this class we should make child class .
        
    */
};
class Student : public Person
{
    /*
        3) We must override the pure virtual function here.
    */

   public:
    void fun()
    {}r
};
/*
    But,Why we need Abstract Classes ?
    
        There are moments in projects when we need to add certain common attributes
        in each of the classes,so instead of declaring a variable in each class we can 
        define it in parent class (abstract) and inherite from there.
*/
int main()
{

    return 0;
}