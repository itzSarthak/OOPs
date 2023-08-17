
/*
    Structures

    ## Structure is a collection of similar elements.
    ## Structure is a way to group variables.
    ## Structure is used to create data type.

        1) Locally Defined Structure
        2) Globally Defined Structure
*/

#include<bits/stdc++.h>
using namespace std;

// Structure Definition
struct book
{
    int bookid;
    char title[50];
    float price;
};
int main()
{

    book b1 = {100,"C++ Made Easy",450.75};
    book b2;
    b2.bookid = 211;

    /*
        b2.title = "Object Oriented Programming";

        ** Here b2.title represents address of first element of array title
        ** which is constant, but l value should not be constant.
    */

    strcpy(b2.title,"Object Oriented Programming");
    b2.price = 540.50;

    book b3 = b2;
    /*
        ## Difference between C structures and C++ structures
        ## https://www.geeksforgeeks.org/difference-c-structures-c-structures/
    */
   
    return 0;
}

