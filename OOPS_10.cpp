/*
    Member function of one Class can become friend to other.
*/
#include<bits/stdc++.h>
using namespace std;

class A
{
    public :

        void fun(){}
        void foo(){}
};
class B 
{
    public :

        friend void A::fun();
        friend void A::foo();
};
class C
{
    public :

        friend class A;
        /*
            From Now on all functions of class A became friend of class C
        */
};

/*
    We can define the function we have created here.
*/

int main()
{
    return 0;
}

