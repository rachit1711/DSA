#include<bits/stdc++.h.h>
using namespace std;
class Dad
{
    public:
    int age;
    int weight;
    public:
    void speak()
    {
        cout<<"Dad called "<<endl;
    }
};
class Mom
{
    public:
    int age;
    int weight;
    public:
    void speak1()
    {
        cout<<"Mom called"<<endl;
    }
};
//MULTIPLE INHERITANCE 
class Child :public Dad,public Mom
{

};
int main()
{

    Dad d;
    d.speak();
    Mom m;
    m.speak1();

    cout<<"Now child class"<<endl<<endl;
    Child c;
    c.speak();
    c.speak1();
    
    return 0;
}