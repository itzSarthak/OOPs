/*
    ** Operator Overloading
        When an operator is overloaded with Multiple jobs,it is known as Operator Overloading.
*/

#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a,b;

    public:
    void setdata(int x,int y) {a = x; b = y;}
    void showdata(){ cout<<"a = : "<<a<<endl; cout<<"b = : "<<b<<endl; }

    /*   Complex add(Complex c)
        {
            Complex t;
            t.a = a + c.a;
            t.b = b + c.b;

            return t;
        }
    */

   // Overloading

   // Binary Addition
    Complex operator+(Complex c)
    {
            Complex t;
            t.a = a + c.a;
            t.b = b + c.b;

            return t;        
    }


    // Unary Negation
    Complex operator-()
    {
            Complex t;
            t.a = -a;
            t.b = -b;

            return t;
    }

    // Pre Increment
    Complex operator++()
    {
            Complex t;
            t.a = ++a;
            t.b = ++b;

            return t;
    }

    // Post Increment
    Complex operator++(int)
    {
        
            Complex t;
            t.a = a++;
            t.b = b++;

            return t;
            /*
                In order for compiler to differentiate between pre/post increment
                in post increment we should have an argument.
            */
    }

};

int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(2,9);

    // Now,we want to add two complex no. and store in c3

    //c3 = c1.add(c2);
    //c3 = c1.operator+(c2);

    c3 = c1 + c2;

/*  
    Here,we have overloaded '+' with another operations !!
    That's Operator Overloading Bro !!
    Here,we are replacing ".operator" with "+"

    NOTE : CALLER Object is left of the operator for all binary op overloading .

*/

     c2 = c1++;
     c2.showdata();
     c1.showdata();
     // c1 : 3 4
     // c2 : 2 9


    // https://www.ibm.com/docs/en/i/7.2?topic=only-overloading-increment-decrement-operators-c
}