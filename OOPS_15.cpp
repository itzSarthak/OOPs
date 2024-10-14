#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    void f1(){}
    virtual void f2(){cout<<"Parent Class !!"<<endl;}
    // Now all the function with same signature as f2()
    // became virtual function.
};
class B: public A
{
    public:
    void f1(int x){}
    void f2(){cout<<"Child Class!!"<<endl;}
};

int main()
{
    A *ptr;
    // pointer of type parent class can store address of any of its decendents.

    A obj1;
    B obj2;

    ptr = &obj2;
    ptr->f2();  
    /*
        This should call f1() of class B but due to early binding f1() of class A is being called.
        Bcz at compile ptr is of type 'A' !!

        Early Binding --> type of Pointer / Object.
        Late Binding --> content of Pointer.

        To avoid that we can use virtual keyword in the function of parent class.
        Now all the function with same name and signature became virtual function.




        # Concepts of vptr & vtable !!

        ** When Pointer is of type 'parent' and object is of type 'child' then only
        ** virtual functions are relevant🤖🤖

        https://www.geeksforgeeks.org/virtual-function-cpp/
    */

    return 0;
}