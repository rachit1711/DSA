/*
DEEP COPY 
_________
In Deep copy, an object is created by copying data of all variables and it also allocates similar memory resources with the same value to the object. In order to perform Deep copy, we need to explicitly define the copy constructor and assign dynamic memory as well if required. Also, it is required to dynamically allocate memory to the variables in the other constructors, as well.

*/
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

   


};
int main()
{
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('A');
    char name[100]="Narang";
    hero1.setname(name);
    hero1.print();

    //now we need to create a deep copy using user defined copy constructor
    Hero hero2=hero1;
    hero2.print(); //this should print same var values as hero1

    //now making some modifications in hero1 
    hero1.name[0]='J';
    hero1.print(); //it should print modified values

    //now check for hero2 which is a shallow copy of hero1
    hero2.print(); //it should not print modified value as it maps to a completely new address
     

    return 0;



}