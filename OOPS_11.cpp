/*
    Static Members in Class

    1) Static Local Variable
        a) Concept as it is taken from C.
        b) They are by default initialsed to zero.
        c) Their lifetime is throughout the program.
*/

#include<bits/stdc++.h>
using namespace std;

void print_random()
{
    static int random;
    int val;

    cout<<random<<endl;
    /*
        Every time this function is being called, variable 'val' is created and destroy.
        But,static variable is being created only once and destroy when whole program ends.
    */
}

/*
    2) Static Class Variable
        a) Declared inside the class.
        b) Also known as class Member Variable.
        c) They must be defined outside the class with membership level.
        d) They doesn't belong to any object but to whole class.
        e) Any object can use same copy of class variable.
        f) They can also be used with class name.


    3) Static Member Function 
        a) They are qualified with the keyword static.
        b) They are also called class Member function.
        c) They can be invoked with or without object.
        d) They can only access static members of the class.


        Q : Why they are used ??

*/

class Amount
{
    private :
        int balance;
        static float roi;     

    public :
    static int time;
    void setdata(int b) {balance = b;}

    //void setroi(float r) {roi = r;}
    static void setroi(float r) {roi = r;}      // static member function 🚗🚗

};

float Amount::roi = 2.77;
int Amount::time = 2;

int main()
{
    print_random();

    Amount a;
    a.setdata(3200);

    cout<<a.time<<endl;

    /* 
      We can't access roi from here because it is a private member.
      a.setroi(2.93); 
    */

    Amount::setroi(2.97);
    /*
        Here we are calling a function without an object because it is a static member function and
        it is accessing a variable 'roi' which is also a static.

        From a static member function we can only access static variables !!
    */
    return 0;
}