
#include<bits/stdc++.h.h>
using namespace std;
class A
{
    public:
    void printA()
    {
        cout<<"In class A"<<endl;
    }
};
//SINGLE INHERITANCE from A to D
class D:public A
{
    public:
    void printDA()
    {
        cout<<"In class D"<<endl;
    }
};
//MULTIPLE INHERITANCE WHERE C IS THE child WHILE A AND A ARE parent CLASSES
class C:public A,public D
{
    public:
    void printCAD()
    {
        cout<<"In class C inherited from A and D class"<<endl;
    }
};

int main()
{
    A a;
    C c;
    a.printA();
    c.printCAD();

    return 0;
}