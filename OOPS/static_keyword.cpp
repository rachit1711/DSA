//static keywords  - creates data members that belong to the class and to access that data members there's no need to create an object 
#include<bits/stdc++.h.h>
using namespace std;
class Hero
{
    //properties
    private:
    int health;
    int power; 
    public:
    string level;
    char *name;
    static int TimeToComplete;
    Hero()
    {
        cout<<"Default Constructor called"<<endl;
        name=new char[100];
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
    
    Hero(Hero &temp)
    {
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;

    }
    void print()
    {
        cout<<"Name is "<<this->name<<endl;
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
    void setname(char name[])
    {
        strcpy(this->name,name);
    }
    static int random()
    {
        //cout<<health<<endl; //cannot be accessed as static functions can access only static variables
        cout<<Hero::TimeToComplete<<endl;
    }

   


};
//declaration of static members  should be done outside the class declaration
int Hero::TimeToComplete=5;

int main()
{
    cout<<Hero::TimeToComplete<<endl; //accessed without creating an object for the class
    cout<<Hero::random()<<endl; //accessed
    return 0;
}