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
    public:
    string level;
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
//as health was a private variable and thus couldn't be accessed inside the main function thats why we have used geters and setters


int main()
{

    //static allocation
    Hero h1; //h1 is the object of class Hero
    cout<<"Level is "<<h1.level<<endl;
    cout<<"Health is "<<h1.getHealth()<<endl;

    //dynamic allocation
    Hero *h2=new Hero; //memory allocated in HEAP

    /*
    ACCESSING THE DATA-MEMBERS
    */ 

    cout<<"Level is "<<(*h2).level<<endl;  //or h2->level
    cout<<"Health is "<<h2->getHealth()<<endl; //or (*h2).getHealth()
    /*
    cout<<"size of h1 is :"<<sizeof(h1)<<endl;
    cout<<"Health of h1 is "<<h1.getHealth()<<endl;
    h1.setHealth(70);
    cout<<"Updated Health of h1 is "<<h1.getHealth()<<endl;
    
    h1.level="pro";
     cout<<"Level of h1 is "<<h1.level<<endl;
    //incase of empty class the object is instantiated with 1 byte of memory
    Demo d1;
    cout<<"Size of d1 (Empty class's object)is: "<<sizeof(d1)<<endl;
    */
    return 0;
}