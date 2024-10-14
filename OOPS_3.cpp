
#include<bits/stdc++.h>
using namespace std;

/*
    q1 : Difference between class and structure ?
    q2 : Why we need class if we have c++ style structure ??
    q3 : Declaring function inside a class and defining outside of it using membership level !!
    q4 : Member function can directly access the attributes of an object !!


    ** To provide backward compatibility over C language.(q2 solution)
*/

class Complex
{
    int a;
    int b;

    public :
    void set_data(int x,int y);
    void show_data();
    Complex add(Complex n);
};
void Complex::set_data(int x,int y){a = x; b = y;}
void Complex::show_data() {cout<<a<<" "<<b<<endl;}

/* 
    q5 : Why this function is inside the class ?
    : Because from member function we can directly access the private attributes .

        q6 : How it is accessing elements ?
*/

Complex Complex::add(Complex n)
{
    Complex temp;

    temp.a = a + n.a;
    temp.b = b + n.b;

    return temp;

}

/*

This Function can access the private var of the object C
void manipulate_data(Complex C)
{
    C.a = C.a + 1;
    C.b = C.b + 1;
}

*/
int main()
{
    Complex n1,n2,n3;
    n1.set_data(3,6);
    n2.set_data(2,4);

    n3 = n1.add(n2);

    /*
        ** Techinical Terms

        1) Class is a description of an Object.
        2) Object is an instance of a Class.

            ** Instance Member Variables
            ** Instance Member Functions

    
            Complex C;
            C.set_data(2,9);
    */
}

