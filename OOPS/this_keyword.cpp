#include<bits/stdc++.h.h>
using namespace std;
class A{
    int a;
    public:
    void setData(int a)
    {
        this->a=a;
    }
    //in case only a=a is written then priority is given to only "local variable" hence we use this-> to distinguish local variable with the class variable
    void getData()
    {
        cout<<"The value of A is "<<a;
    }
};
int main()
{
    //this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setData(4);
    a.getData();
    return 0;
}