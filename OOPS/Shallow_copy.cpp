/*
SHALLOW COPY -- always created by shallow copy
____________
In shallow copy, an object is created by simply copying the data of all variables of the original object. This works well if none of the variables of the object are defined in the heap section of memory. If some variables are dynamically allocated memory from heap section, then copied object variable will also reference then same memory location.
This will create ambiguity and run-time errors dangling pointer. Since both objects will reference to the same memory location, then change made by one will reflect those change in another object as well. Since we wanted to create a replica of the object, this purpose will not be filled by Shallow copy. 
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
    /*
    Hero(Hero &temp)
    {
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;

    }*/
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

    //now we need to create a shallow copy using default copy constructor
    Hero hero2=hero1;
    hero2.print(); //this should print same var values as hero1

    //now making some modifications in hero1 
    hero1.name[0]='J';
    hero1.print(); //it should print modified values

    //now check for hero2 which is a shallow copy of hero1
    hero2.print(); //it should not print modified value
    //but it will print modified value which is an ambiguity as we are using same memory location using tow different names
    //so there we'll using deep copy 

    return 0;



}