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
    int health=67;
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
    
    //statically
    Hero ramesh; //Default constructor is invoked automatically - ramesh.Hero()
    Hero mahesh(20); //parameterized constructor object
    //dynamically
    Hero *suresh=new Hero; //suresh.Hero()
    return 0;
}