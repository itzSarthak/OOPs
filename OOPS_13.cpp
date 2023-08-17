/*
    Constructor & Destructor in Inheritance.

    Q : When we create object of child class which one get invoked first parent constructor,child constructor
        and what is the order ?
*/

class A
{
    int a;

    public :
    A(int k){a = k;}

    ~A(){}
};
class B : public A
{
    int b;

    public :

    B(int x,int y) : A(x)
    {b = y;}
    /*
        First,Constructor for A is being invoked
        then for this class.

        If we do not specify anything default constructor of A is being 
        called , which give error in this case.


        However, in the case of Destructor,child class Destructor is being invoked 
        and then that of parent class.
    */

    ~B(){}
};
class C : public B
{
    public : 
    C() : B(2,3)
    {
        cout<<"Constructor of Class C"<<endl;
    }
};

#include<bits/stdc++.h>
using namespace std;

int main()
{
    B (3,5);
    return 0;
}