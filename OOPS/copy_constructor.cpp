#include<bits/stdc++.h.h>
using namespace std;
class Demo
{
//empty class
};
class Hero
{
    //properties
    private:
    int health;
    int power; 
    public:
    string level;
    Hero()
    {
        cout<<"Default Constructor called"<<endl;
    }
    /*
    USE OF THIS KEYWORD -- this is a pointer which contains the address of the current object( ramesh ) here
    */

    Hero(int power)
    {
        //RHS power is parameterised power while power with this is the class variable power
        
        this->power=power;
        cout<<"Parameterised Constructor called"<<endl;
    }
    Hero(int health,string level)
    {
        cout<<"multi parameterised constructor called"<<endl;
        this->health=health;
        this->level=level;
    }
    //COPY CONSTRUCTOR - ************* ALWAYS PASS BY REFERENCE *************
    Hero(const Hero &temp)
    {
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;

    }
    void print()
    {
        cout<<"Health is "<<this->health<<endl;
        cout<<"Level is "<<this->level<<endl;
    }
    //getters 
    int getHealth()
    {
        return health;
    }
    string getLevel()
    {
        return level;
    }
    //setters
    void setHealth(int h)

    {
        health=h;

    }
    void setLevel(char ch)
    {
        level=ch;
    }
    

   


};
int main()
{
    Hero suresh(70,"Noob"); //parameterised const called
    //if we want to create an object having the same parameter values as suresh then copy constructor will be called automatically
    Hero ritesh(suresh); //Copy constructor invoked automatically
    suresh.print();
    ritesh.print();




    return 0;
}