
/*
    Template in C++

    ** Template is a keyword in C++ used to define...
        a) Function Template
        b) Class Template

    ** It is way to make your function or class generalise as
        far as data type is concern.

*/

#include<bits/stdc++.h>
using namespace std;

// Function Template Example
template<class X,class Y>
Y larger(X a,Y b)
{
    return a > b ? a : b;

    /*
        template<class T1,class T2...>
        T1 fun_name(T1 arg1,T2 arg2,..){}

        ## Instead of Overloading a Function with same no. of arguments,
            and same operations but different data types we should use
            function template.

        ## Data type of T will be data type of arg1 because of early binding.
        ## T is here place holder.

        Q : How about having more than one place holder ?
    */
}
template<class X,class Y,class Z>
Y larger(X a,Y b,Z c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int main()
{
    cout<<larger(3,5)<<endl;
    cout<<larger(2.99,2.999)<<endl;
    cout<<larger(2.45,3,11)<<endl;
    cout<<larger(2.83,7)<<endl;

    return 0;
}

