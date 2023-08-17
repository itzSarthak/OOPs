/*
    Friend Function

    1) Friend Function is NOT a Member Function of a class to which it is a friend.
    2) Declared in the Class with Friend Keyword and defined outside the class to which it is friend.
    3) Shouldn't be defined using membership level.
    4) It has no caller objects.
    5) Can access any member of the class to which it is friend.
    6) Cannot access member of the class directly.

    Why we need this ?

*/
#include <iostream>
using namespace std;
class Complex
{
    int a,b;

    public :
    void setData(int x,int y){a = x; b = y;}
    void showData(){cout<<"a : "<<a<<endl; cout<<"b : "<<b<<endl;}

    friend int sum(Complex c);
    int greater();
};

void print(Complex c)
{
    cout<<"I am a Non-Member Function 🤖🤖 "<<endl;
    cout<<"I can't access the private attributes of class."<<endl;
    //cout<<c.a<<" "<<c.b<<endl;
}
int Complex::greater()
{
    cout<<"I am a Member Function 🚗🚗"<<endl;
    return a >= b ? a : b;
}
int sum(Complex c)
{
    cout<<" I am a Friend Function 🎃🎃" <<endl;
    cout<<" I have access to private members !! "<<endl;
    return c.a + c.b;
}

int main()
{
    Complex c1,c2,c3;
    c1.setData(4,1);
    c2.setData(8,3);
    c3.setData(1,1);


    cout<<c2.greater()<<endl;
    cout<<sum(c3)<<endl;
    print();
    return 0;
}


