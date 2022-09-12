//destructors are invoked automatically for statically created objects 
//while in case of dynamically created objects we need explicit creation of destructors
//Destructor never takes an argument nor does it return any value
#include<bits/stdc++.h.h>
using namespace std;

class num
{
    int count=0;
    public:
    num()
    {
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~num()
    {
        cout<<"This is the time when destructor is called for object number "<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"Inside main"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;

    }
    cout<<"Back to main function"<<endl;

    return 0;
}