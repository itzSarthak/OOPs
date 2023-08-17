/*
    ** Constructors
    
    1) Constructor is implicitly invoked when
        an object is created.

    2) Constructor is used to solve problems 
        of Initialization.

    
    ** But,What is a Constructor ?
        
        a) Member function of a class.

        b) Name same as that of class and has
            No return type.

        c) It must be instance member function.
*/

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    private :
        int a,b;
    
    public :

    // Parameterized Constructor
    Complex(int x, int y) {a = x; b = y;}
    Complex(int k) {a = k;}

    // Default Constructor
    Complex(){ } 

    /*
        ** Copy Constructor
            A copy constructor is a member function that initializes an object
            using another object of the same class. 

        ** Error Approach
        Complex(Complex c)
        {
            ** Recursion will takes place
            ** Complex c will be intialized to c4, but for that
                this constructor again being called.
        }

        ** Correct Approach
    */
    Complex(Complex &c)
    {
        a = c.a;
        b = c.b;
    }

    /*
        But, What is a Default Constructor ?

        *** Compiler create two constructors when there are none !!
            1) Default
            2) Copy

        *** When any parameterized constructor is present,programmer must
            create default constructor by own,copy constructor is created by compiler !!

        ** When we have both (copy & default) by the user, compiler doesn't creat any constructor at all.
    */



   /*
        ** Destructor

        1) Instance Member Function of a Class.
        2) Name same as that of class but with ~ in front.
        3) Never be Static.
        4) No return type.
        5) No argument hence overloading is not possible.


        ## Why we need Destructor ?
            Destructor is the last function before object gets destroy,
            so if some memory allocation are there we should free that !!

            ## It invoked implicitly when object is going to destroy.
   */
};

int main()
{
    Complex c1(3,4),c2(5),c3;
    Complex c4(c1);
}