/*
    7) Friend Function can become friend to more than one class
    ** Meaning it can access private attributes of more than one classes 🚗🚗
*/

#include <iostream>
using namespace std;

class B;
class A
{
    int a;

    public:
    void setdata(int x) { a = x; }
    friend void fun(A,B);
};
class B
{
    int b;

    public :
    void setdata(int y) { b = y; }
    friend void fun(A,B);

};
void fun(A obj1,B obj2)
{
    /*
        This function is friend of A and B
        which means it can access the private memebers of both the classes.
        We don't have speciality like this to any other function .
    */
    cout<<"sum : "<<obj1.a + obj2.b<<endl;
}
int main()
{
    A obj1;
    obj1.setdata(5);
    B obj2;
    obj2.setdata(3);

    fun(obj1,obj2);
    return 0;
}