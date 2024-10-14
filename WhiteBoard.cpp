#include<bits/stdc++.h>
using namespace std;

class friendclass;

class myclass
{
    private:
    int pr_data;

    public :
    myclass(int p){pr_data = p;}

    friend class friendclass;
    /*
        friendclass is not friend of myclass meaning this class can 
        acces private attributes of "myclass".
    */
};
class friendclass
{
    public:
    void acces_myclass(myclass &obj)
    {
        cout<<"The private data is : "<<obj.pr_data<<endl;
    }
};
int main()
{
    
    return 0;
}