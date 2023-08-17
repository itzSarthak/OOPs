/*
    ** Overloading of insertion and exertion operator
    ** >>
    ** <<
*/

#include <iostream>
using namespace std;

class Complex
{
    int a,b;

    public :
    
    void setData(int x,int y) {a = x; b = y;}
    void showData() {cout<<"a : "<<a<<"\nb : "<<b<<endl;}

    /*
        1) Here we are returning refrence of class istream and ostream.
        2) In insertion operation we need refrence to Complex as well bcz it requires change in o/p as well !!
    */

    friend ostream& operator<<(ostream&,Complex);
    friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream& dout,Complex c)
{
    dout<<"\na : "<<c.a<<"\n"<<"b : "<<c.b<<endl;
    return cout;
}
istream& operator>>(istream& din,Complex& c)
{
    din>>c.a>>c.b;
    return din;
}
int main()
{

    /*
        ** cin and cout are objects of class istream and ostream !!

        q1 : While overloading "<<" and ">>"" operator why we are using object of Complex class ?
        q2 : Why we are returning refrence to class istream and ostream and not the objects itself ?
    */

   Complex c1,c2;
   cout<<"Enter  complex no. : ";
   cin>>c1>>c2;


   cout<<"Your Complex no. is : ";
   cout<<c1<<c2<<endl;

    return 0;
}