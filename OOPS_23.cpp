/*
    ## How to copy content of one object to other of same class ?

    ** Copy Constructor
    ** Implicit Copy Assignment Operator 
*/

#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imag;
    int *ptr;

    public:

    Complex(){ptr = new int;}


    void setData(int a,int b,int z){real = a; imag = b; *ptr = z;}
    void showData(){cout<<"real : "<<real<<"/nImaginary : "<<imag<<"/nPointer : "<<*ptr;}

    /*
        Creating copy of objects by copying all the members
        variables as it is called shallow copy .

    Complex(Complex &c)
    {
        real = c.real;
        imag = c.imag;
        ptr = c.ptr;
    }
    */

    /*
        Creating an object by copying data of another object along
        with the values of memory resources resides outside the object 
        but handled by the object.
    */
    Complex(Complex &c)
    {
        real = c.real;
        imag = c.imag;
        //ptr = c.ptr;

        ptr = new int;
        *ptr = *(c.ptr);
    }

    ~Complex()
    {
        delete ptr;
    }
};

int main()
{
    Complex c1;
    c1.setData(3,5,7);
    c1.showData();

    // Complex c2(c1);  ** Copy Constructor Invoked

        Complex c2;
        c2 = c1;        // Implicit Assignment Operator Invoked
    
    return 0;
}