#include<bits/stdc++.h.h>
using namespace std;
class Human
{
    public:
    int height,weight,age;
    public:
    int getAge()
    {
        return this->age;
    }
    int setWeight(int w)
    {
        this->weight=w;
    }
};
class Male:public Human{
    public:
    string color;
    void sleep()
    {
        cout<<"Male sleeping"<<endl;
    }
    int getheight()
    {
        return this->height;
    }

};
int main()
{
    Male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.weight<<endl;
    obj1.setWeight(85);
    cout<<obj1.color<<endl;
    obj1.sleep();
    cout<<obj1.getheight()<<endl;


    return 0;
}