/*
    Exception Handling

    1)Exception is any abnormal behaviour,run time 
    error.

    2)There is a built in mechanism present in C++
        to handle exceptions.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age; cout<<"Enter your age : ";
    cin>>age;

    try
    {
        if(age > 60 || age < 18)
            throw age;
    }
    catch(int a)
    {
        cout<<"your input "<<a<<"is out of range.\n";
    }
    
    cout<<"Exceptional Handling"<<endl;
    return 0;
}

/*
    # try
        ** Program statement that we want to monitor should be in this block.
        ** try
            {
                // check if required
                throw value;
            }
    # throw
        ** General Form -- throw exception;
        ** Must be executed either within try block proper
            or from any function that the code within the block calls.

    # catch
        ** used to receive the exception value
        ** catch (type arg)
            {

            }
        ** Any type of data can be caught,including classes that we create.
*/