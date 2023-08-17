/*
    Namespaces in C++
*/
#include <iostream>
using namespace std;

namespace my_space
{
    double pi = 3.1482; 
    void fun_check();

    class c
    {
        int z;
        public : 
            void check_c();
    };
}
void my_space::fun_check()
{
    cout<<"Fun - Check"<<endl;
}
void my_space::c::check_c()
{
    cout<<"Check - Class"<<endl;
}

using namespace my_space;
int main()
{
    fun_check();
    c obj_1;
    obj_1.check_c();

    int radius = 7;
    double area = my_space::pi * radius * radius;
    cout<<area<<endl;
    return 0;
}