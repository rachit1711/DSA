#include<bits/stdc++.h.h>
using namespace std;
class Animal
{
    public:
    int age;
    int weight;
    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }
};
class Dog:public Animal
{

};
class GermanShepherd:public Dog
{

};
int main()
{

    Dog d;
    d.speak();
    GermanShepherd gs;
    gs.speak();
    return 0;
}