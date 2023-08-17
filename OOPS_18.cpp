/*
    Class Template
        ** Explaination with the help of an example.
*/

#include <bits/stdc++.h>
using namespace std;

/*
    Here we are using a class for generic purpose.

    Instead of creating different class for different data types
    we should use one class with a template.
*/
template<class X>
class Arraylist
{
    private :
    struct ControlBlock
    {
        int capacity;
        X *arr_ptr;
    };
    ControlBlock *s;

    public :
    Arraylist(int capacity)
    {
        s = new ControlBlock;
        s->capacity = capacity;
        s->arr_ptr = new X[s->capacity];
    }

    void addElement(int idx,X data)
    {
        if(idx >= 0 && idx < s->capacity)
            s->arr_ptr[idx] = data;

        else
            cout<<"Not Possible!"<<endl;
    }
    void viewElement()
    {
        for(int i = 0; i < s->capacity; i++)
            cout<<s->arr_ptr[i]<<" ";
    }

};
int main()
{

    //Arraylist l1(3);
    Arraylist <float> l1(3);
    l1.addElement(0,1.1);
    l1.addElement(1,1.2);
    l1.addElement(2,1.3);

    l1.viewElement();

    return 0;
}