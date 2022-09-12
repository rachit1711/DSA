//if a child class is inherited from two parent classes having the function with same name, then which class's function will be accessed from child class is an ambiguity ... to resolve this 
//we use scopr resolution operator ' :: '

//SYNTAX
//ObjectName.ClassnameWhichFunctionShouldBeAccessed::funtionName()
#include<bits/stdc++.h.h>
using namespace std;
class A
{
    public:
    void func()
    {
        cout<<"A"<<endl;
    }
};
class B
{
    public:
    void func()
    {
        cout<<"B"<<endl;
    }
};
class C:public A,public B{

};
int main()
{   
    C obj;
    //obj.func(); will cause ambiguity 
    obj.A::func();
    obj.B::func();


    return 0;
}